module memhub_sim #(
    parameter BROM = "brom.hex",
    parameter NOR = "cc800.hex"
) (
    input clk,
    input reset,
    // for CPU
    input [15:0] addr,
    input we, // only avalible on data cycle
    input [7:0] din,
    output reg [7:0] dout,
    output irq,
    output reg nmi,
    // to LCD driver
    input pixelclk, // CP
    input [13:0] pixeladdr,
    output reg pixel
);

reg [7:0] sram[0:16384-1]; // 16k, 真机用双口bram
reg [7:0] brommem[0:12*1048576 - 1]; // 12M, 真机用qspi, SCL 5M*22=110M, 5M*18=90M
reg [7:0] normem[0:512*1024-1]; // 512K, 无法跟12M合并? 考虑hyperram?(GW1NR-1/2)

initial begin
    $readmemh(BROM, brommem);
    $readmemh(NOR, normem);
end

reg [3:0] irqcnter = 0;
assign irq = irqcnter != 0;
initial nmi = 0;

wire is_io = addr[15:6] == 'h0;     // 00..3F
wire is_zp40 = addr[15:6] == 'h1;   // 40..7F sram, ZB
wire is_sram = addr[15:14] == 'b00 && addr[13:7]; // 80..3FFF sram, fixed
// only NC1020 need 6000
wire is_4000 = addr[15:14] == 'b01;  // 4000..7FFF ROM/nor, ROA/BSW/vol
wire is_8000 = addr[15:14] == 'b10;  // 8000..BFFF ROM/nor, ROA/BSW/vol
wire is_bios = addr[15:13] == 'b110; // C000..DFFF ROM/nor, BBS
wire is_boot = addr[15:13] == 'b111; // E000..FFFF ROM, fixed

reg is_4000_nor;
reg [11:0] offsetzb = 'h40;
// switch bank/etc
reg [7:0] io_bank_switch = 0;   // 00 r/w
reg [7:0] io_int_status = 0;    // 01 r/c
reg [7:0] io_int_enable = 0;    // 01 w
reg [8:0] io_timer0_val = 0;    // 02 r/w
reg [15:0] io_timer1_val = 0;   // 03 r/w
reg [7:0] io_general_ctrl = 0;  // 04 w
reg [7:0] io_clock_ctrl = 0;    // 05 w
reg [7:0] io_lcd_config = 0;    // 06 w
reg [7:0] io_port_config = 0;   // 07 w
reg [7:0] io_port0 = 0;         // 08 gpio
reg [7:0] io_port0_od = 0;
reg [7:0] io_port1 = 0;         // 09 gpio
reg [7:0] io_port1_od = 0;
reg [7:0] io_bios_bsw = 0;      // 0A r/w
reg [7:0] io_port3 = 0;         // 0B r/w
reg [7:0] io_timer01_ctrl = 0;  // 0C w
reg [7:0] io_general_status = 8;// 0C r
reg [7:0] io_lcd_segment = 0;   // 0D r/w
reg [7:0] io_dac_data = 0;      // 0E r/w
reg [7:0] io_zp_bsw = 0;        // 0F r/w
reg [15:0] io_timerA_val = 0;   // 10/11 r/c/w
reg [11:0] io_timerB_val = 0;   // 12/13 r/c/w
reg [7:0] io_timerAB_ctrl = 0;  // 14 w
reg [7:0] io_port1_dir = 0;     // 15 w
reg [7:0] io_port2_dir = 0;     // 16 w
reg [7:0] io_port2 = 0;         // 17 r/w
reg [7:0] io_port4 = 0;         // 18 r/w
reg [7:0] io_ckv_select = 0;    // 19 w
reg [7:0] io_volume_set = 0;    // 1A
// timer flag
reg timer0run = 0;
reg timer1run = 0;

always @(posedge clk) begin
    if (is_io) begin
        if (we) begin
            // 00..3F, 6bit
            case (addr[5:0])
            'h00: begin
                // use din instead io_bank_switch!
                is_4000_nor <= io_bios_bsw[7] == 0 && din == 0;
                io_bank_switch <= din;
            end
            'h0A: begin
                // TODO: change PTYPE?
                is_4000_nor <= din[7] == 0 && io_bank_switch == 0;
                io_bios_bsw <= din;
            end
            'h0D: begin
                // PowerSave?
                io_lcd_segment <= din;
            end
            'h0F: begin
                io_zp_bsw <= din;
                if (din[2])
                    offsetzb <= 'h200 + din[1:0] * 'h40;
                else if (din[2:0] == 0)
                    offsetzb <= 'h40;
                else
                    offsetzb <= 'h00;
            end
            'h01: io_int_enable <= din;
            'h02: io_timer0_val <= {din, 1'b0};
            'h03: io_timer1_val <= {din, 8'b0};
            'h05: io_clock_ctrl <= din;
            'h18: io_port4 <= din;
            'h19: io_ckv_select <= din;
            'h07: begin
                io_port_config <= din;
            end
            'h08: io_port0_od <= din;
            'h09: io_port1_od <= din;
            'h04: begin
                io_general_ctrl <= din;
            end
            'h15: begin
                io_port1_dir <= din;
            end
            'h06: begin
                io_lcd_config <= din;
            end
            'h0B: begin
                io_port3[7:1] <= din[7:1]; // TODO: LCDEN/ONOFF
            end
            'h0C: begin
                io_timer01_ctrl <= din; // TMS
            end
            default: begin
                $display("write io: %02X <= %02X", addr[5:0], din);
            end
            endcase
        end else begin
            // Read io
            case (addr[5:0])
            'h00: dout <= io_bank_switch;
            'h0A: dout <= io_bios_bsw;
            'h0D: dout <= io_lcd_segment;
            'h0F: dout <= io_zp_bsw;
            'h02: dout <= io_timer0_val[8:1];
            'h03: dout <= io_timer1_val[15:8];
            'h01: begin
                dout <= io_int_status;
                io_int_status[5:0] <= 0; // b5:b0
            end
            'h04, 'h05: begin
                timer0run <= addr[0];
                dout <= io_timer0_val[8:1];
            end
            'h06, 'h07: begin
                timer1run <= addr[0];
                dout <= io_timer1_val[15:8];
            end
            'h08: dout <= io_port0;
            'h09: dout <= io_port1;
            'h10: begin
                dout <= io_timerA_val[7:0];
                io_timerA_val[7:0] <= 0;
            end
            'h11: begin
                dout <= io_timerA_val[15:8];
                io_timerA_val[15:8] <= 0;
            end
            'h12: begin
                dout <= io_timerB_val[7:0];
                io_timerB_val[7:0] <= 0;
            end
            'h13: begin
                dout <= {4'b0, io_timerB_val[11:8]};
                io_timerB_val[11:8] <= 0;
            end
            'h18: dout <= io_port4;
            'h0B: dout <= {io_port3[7:1], 1'b1};
            'h0C: dout <= io_general_status;
            default: begin
                $display("read io: %02X", addr[5:0]);
                dout <= 0; 
            end
            endcase
        end
    end else if (is_zp40) begin
        // TODO: optmize ZB0
        if (we)
            sram[offsetzb + addr[5:0]] <= din;
        else
            dout <= sram[offsetzb + addr[5:0]];
    end else if (is_sram) begin
        if (we) begin
            sram[addr[13:0]] <= din;
        end else
            dout <= sram[addr[13:0]];
    end else if (is_4000 || is_8000) begin
        if (we) begin
            // nor
        end else begin
            // delta 0-3FFF
            if (is_4000 && !io_bios_bsw[7])
                dout <= is_4000_nor?normem[{io_bank_switch[3:0],addr[14:0]}]:brommem[{io_bank_switch[7]?2'b01 + io_lcd_segment[0]:2'b00, io_bank_switch[6:0], addr[14:0]}];
            else
                dout <= io_bios_bsw[7]?normem[{io_bank_switch[3:0],addr[14:0]}]:brommem[{io_bank_switch[7]?2'b01 + io_lcd_segment[0]:2'b00, io_bank_switch[6:0], addr[14:0]}];
        end
    end else if (is_bios) begin
        if (io_bios_bsw[3:0] == 1) begin
            if (we) begin
                // nor
            end else begin
                dout <= normem[{6'b11, addr[12:0]}];
            end
        end else if (!we) begin
            dout <= brommem[{io_bios_bsw[3:0] ^ 'b0010, addr[12:0]}];
        end
    end else if (is_boot) begin
        if (!we)
            dout <= brommem[{11'b11, addr[12:0]}];
    end
end

//timers
//timer0是每2时钟进1, timer1是256时钟进1
//Timerbase 4ms=250Hz, nmi=2Hz
localparam spdcfreq = 3686400;
localparam timerbase_reload = spdcfreq / 250 - 1; // 20000 ok, 14745 error
reg [14:0] timerbasecounter = timerbase_reload;
localparam nmi_reload = spdcfreq / 2 - 1;
reg [21:0] nmicounter = nmi_reload;
localparam irqreload = 14;
always @(posedge clk) begin
    if (timer0run) begin
        if (&io_timer0_val == 1'b1) begin
            io_int_status[4] <= 1;
            irqcnter <= irqreload;
        end
        io_timer0_val <= io_timer0_val + 1;
    end
    if (timer1run) begin
        if (&io_timer0_val == 1'b1) begin
            io_int_status[5] <= 1;
            irqcnter <= irqreload;
        end
        io_timer1_val <= io_timer1_val + 1;
    end
    io_timerA_val <= io_timerA_val + 1;
    io_timerB_val <= io_timerB_val + 1;
    // TODO: TBC
    if (io_general_ctrl[3:0] != 0) begin
        if (timerbasecounter == 0) begin
            if (io_int_enable[3] == 0) begin
                io_int_status[3] <= 1;
                irqcnter <= irqreload;
            end
            timerbasecounter <= timerbase_reload;
        end else
            timerbasecounter <= timerbasecounter - 1;
    end
    if (nmicounter == 0) begin
        if (io_int_enable[4] == 0)
            nmi <= 1;
        nmicounter <= nmi_reload;
    end else
        nmicounter <= nmicounter - 1;
    // irq 
    if (irqcnter) begin
        irqcnter <= irqcnter - 1;
    end
    if (nmi) begin
        nmi <= 0;
    end
end

// 桥接 LCD
always @(posedge clk) begin
    pixel <= sram[pixeladdr[13:3] + 'h9C0][~pixeladdr[2:0]];
end

endmodule