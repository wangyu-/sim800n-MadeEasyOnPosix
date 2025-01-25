module memhub (
    input clk,      // cpu clock 3.68Mhz
    input spiclk,   // spi clock 118Mhz = 32x3.68
    input reset,
    // for CPU
    input [15:0] addr,
    input we, // only avalible on data cycle
    input [7:0] din,
    output [7:0] dout,
    output reg irq,
    output reg nmi,
    // to spi flash
    output spiclken,
    output spiss,
    input [3:0] spiin,
    output [3:0] spiout,
    output spiz0,
    output spiz1,
    // to LCD driver
    input pixelclk, // CP
    input [13:0] pixeladdr,
`ifdef SIM
    output reg pixel
`else
    output pixel
`endif
);

`ifdef SIM
reg [7:0] sram[0:16384-1]; // 16k, 真机用双口bram
`else
wire [7:0] dout_ram;
`endif
reg [7:0] dout_oc; // onchip
(* mark_debug = "true" *) reg [7:0] dout_ext; // ROM+Flash
wire sel_ext = (addr[15:14] != 2'b00); // 4xxx..Fxxx
wire sel_ram = (addr[15:14] == 'b00 && addr[13:6]); // 40..3FFF (zp+sram)
wire sel_io = (addr[15:6] == 'h0); // 00..3F
reg sel_ext_r, sel_ram_r, sel_io_r; // 上1 cpu时钟选通目标
always @(posedge clk) begin
    sel_ext_r <= sel_ext;
    sel_ram_r <= sel_ram;
    sel_io_r <= sel_io;
end
// TODO: 对齐到cpu clk上升沿?
reg clkr = 0, clkr2 = 0;
reg [7:0] dout_ext_r;
reg [3:0] doutcnt;
`ifdef SIM
assign dout = sel_ext_r?dout_ext_r:dout_oc;
`else
assign dout = sel_ext_r?dout_ext_r:(sel_ram_r?dout_ram:(sel_io_r?dout_oc:8'h00));
`endif
always @(posedge spiclk) begin
    clkr <= clk;
    clkr2 <= clkr;
end
always @(posedge spiclk) begin
    if (clkr && !clk) begin
        doutcnt <= 15;
    end else if (!clkr) begin
        doutcnt <= doutcnt - 1'b1;
        if (doutcnt == 1 && !we && sel_ext) begin
            dout_ext_r <= dout_ext;
        end
    end
end

initial irq = 0;
initial nmi = 0;

wire is_io = addr[15:6] == 'h0;     // 00..3F
wire is_zp40 = addr[15:6] == 'h1;   // 40..7F 优先于sram, ZB
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
reg [7:0] io_port0 = 0;         // 09 r/w
reg [7:0] io_bios_bsw = 0;      // 0A r/w
reg [7:0] io_port3 = 0;         // 0B r/w
reg [7:0] io_timer01_ctrl = 0;  // 0C w
reg [7:0] io_general_status = 0;// 0C r
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
//timer0是每2时钟进1, timer1是256时钟进1
//Timerbase 4ms=250Hz, nmi=2Hz
localparam timerbase_reload = 20000 - 1;
reg [14:0] timerbasecounter = timerbase_reload;
localparam nmi_reload = 5000000 - 1;
reg [22:0] nmicounter = nmi_reload;

// 3.7M
always @(posedge clk) begin
    if (reset) begin
        irq <= 0;
        nmi <= 0;
        nmicounter <= nmi_reload;
        timerbasecounter <= timerbasecounter;
    end else begin
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
                'h02: io_timer0_val <= {din, 1'b0};
                'h03: io_timer1_val <= {din, 8'b0};
                'h05: io_clock_ctrl <= din;
                'h18: io_port4 <= din;
                'h19: io_ckv_select <= din;
                'h07: begin
                    io_port_config <= din;
                end
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
                    io_port3 <= din; // TODO: LCDEN
                end
                'h0C: begin
                    io_timer01_ctrl <= din; // TMS
                end
                endcase
            end else begin
                // Read io
                case (addr[5:0])
                'h00: dout_oc <= io_bank_switch;
                'h0A: dout_oc <= io_bios_bsw;
                'h0D: dout_oc <= io_lcd_segment;
                'h0F: dout_oc <= io_zp_bsw;
                'h02: dout_oc <= io_timer0_val[8:1];
                'h03: dout_oc <= io_timer1_val[15:8];
                'h01: begin
                    dout_oc <= io_int_status;
                    io_int_status[5:0] <= 0; // b5:b0
                end
                'h04, 'h05: begin
                    timer0run <= addr[0];
                    dout_oc <= io_timer0_val[8:1];
                end
                'h06, 'h07: begin
                    timer1run <= addr[0];
                    dout_oc <= io_timer1_val[15:8];
                end
                'h18: dout_oc <= io_port4;
                'h0B: dout_oc <= io_port3;
                endcase
            end
`ifdef SIM
        end else if (is_zp40) begin
            // TODO: optmize ZB0
            if (we)
                sram[offsetzb + addr[5:0]] <= din;
            else
                dout_oc <= sram[offsetzb + addr[5:0]];
        end else if (is_sram) begin
            if (we)
                sram[addr[12:0]] <= din;
            else
                dout_oc <= sram[addr[12:0]];
`endif
        end
        // timers
        if (timer0run) begin
            if (&io_timer0_val == 1'b1) begin
                io_int_status[4] <= 1;
                irq <= 1;
            end
            io_timer0_val <= io_timer0_val + 1;
        end
        if (timer1run) begin
            if (&io_timer0_val == 1'b1) begin
                io_int_status[5] <= 1;
                irq <= 1;
            end
            io_timer1_val <= io_timer1_val + 1;
        end
        // TODO: TBC
        if (io_int_enable[3] == 0 && io_general_ctrl[3:0] != 0) begin
            if (timerbasecounter == 0) begin
                io_int_status[3] <= 1;
                irq <= 1;
                timerbasecounter <= timerbase_reload;
            end else
                timerbasecounter <= timerbasecounter - 1;
        end
        if (io_int_enable[4] == 0) begin
            if (nmicounter == 0) begin
                nmi <= 1;
                nmicounter <= nmi_reload;
            end else
                nmicounter <= nmicounter - 1;
        end
        // irq 
        if (irq) begin
            irq <= 0;
        end
        if (nmi) begin
            nmi <= 0;
        end
    end
end

localparam IDLE     = 4'b0001;
localparam SENDCMD  = 4'b0010;
localparam SENDADDR = 4'b0100;
localparam READDAT  = 4'b1000;

(* mark_debug = "true" *) reg [3:0] state = IDLE;
// BusROM 12M, 真机用W25Q128, 最小SCK 5M*22=110M, 5M*18=90M(连续读取) 3.69*22=82M 3.69*18=67M
// flash 512K, 无法跟12M合并? 考虑hyperram?(GW1NR-1/2)
reg [23:0] offset; // brom+flash

reg [7:0] spicmd = 'hEB;
reg [2:0] spicmdcnt = 7; 
reg [2:0] spiaddrcnt = 6; // 6..1clk地址, 0 M74 | 5clk dummy + 2clk 读取
//reg [2:0] addridx = 5;

assign spiclken = (state != IDLE) && ~(state == READDAT && spicmdcnt <= 1); // 20th
assign spiss = (state != IDLE);

// wire [3:0] addrout = 
//     spiaddrcnt == 6?offset[23:20]:
//     spiaddrcnt == 5?offset[19:16]:
//     spiaddrcnt == 4?offset[15:12]:
//     spiaddrcnt == 3?offset[11:8]:
//     spiaddrcnt == 2?offset[7:4]:
//     spiaddrcnt == 1?offset[3:0]:4'b1111;
assign spiout = (state == SENDCMD)?{3'b000, spicmd[spicmdcnt]}:(state == SENDADDR)?offset[23:20]:4'b0000;
assign spiz0 = (state != SENDCMD) && (state != SENDADDR);
assign spiz1 = (state == READDAT) || (state == SENDCMD);

`ifndef SIM
reg [3:0] spicmdcnt2;
// 下降沿会比上升沿提前看到计数器更新
always @(negedge spiclk) begin
    if (reset) begin
        spicmdcnt2 <= 7;
    end else if (state == READDAT) begin
        spicmdcnt2 <= spicmdcnt2?spicmdcnt2 - 1'b1:7;
        if (spicmdcnt2 == 1)
            dout_ext[7:4] <= spiin;
        else if (spicmdcnt2 == 0)
            dout_ext[3:0] <= spiin;
    end
end
`endif        
// 上升沿准备数据(时钟倒置输出)+切换状态, 经过反相, 设备上升沿看来指令已在下降沿准备好
always @(posedge spiclk) begin
    if (reset) begin
        state <= IDLE;
        spicmdcnt <= 7;
        spiaddrcnt <= 6;
        //addridx <= 5;
    end else begin
        case (state)
            IDLE: begin
                // only on cpu clk raise
                if (clkr && !clkr2) begin
                    if (addr[15:14]) begin
                        state <= SENDCMD;
                        //spicmd <= 'hEB;
                        if (is_4000 || is_8000) begin
                            // delta 0-3FFF
                            if (is_4000)
                                offset <= is_4000_nor?{5'b11000,io_bank_switch[3:0],1'b1,addr[13:0]}:{{1'b0,io_bank_switch[7]}+io_lcd_segment[0], 1'b1, addr[13:0]};
                            else
                                offset <= io_bios_bsw[7]?{5'b11000,io_bank_switch[3:0],1'b0,addr[13:0]}:{{1'b0,io_bank_switch[7]}+io_lcd_segment[0], 1'b0, addr[13:0]};
                        end else if (is_bios) begin
                            if (io_bios_bsw[3:0] == 1) begin
                                offset <= addr[12:0] | 'h6000;
                            end else begin
                                offset <= {io_bios_bsw[3:0] ^ 'b0010, addr[12:0]};
                            end
                        end else if (is_boot) begin
                            offset <= {4'h3, addr[12:0]};
                        end
                    end
                end
            end
            SENDCMD: begin
                //spicmd <= {spicmd[6:0], 1'b0};
                spicmdcnt <= spicmdcnt - 1;
                if (spicmdcnt == 0) begin
                    state <= SENDADDR;
                end
            end
            SENDADDR: begin
                offset <= {offset[19:0], 4'b1111};
                spiaddrcnt <= (spiaddrcnt == 0)?6:spiaddrcnt - 1;
                //addridx <= addridx?addridx-1:5;
                if (spiaddrcnt == 0)
                    state <= READDAT;
            end
            READDAT: begin
                // 此处的上升设备看来提前0.5-0.75时钟, 对齐设备上一时钟下降沿或提前0.25
                // IO总延迟不超过0.25时钟, 下降沿采样. 0.5时钟(0.25+0.25), +1上升沿采样
                // IO总延迟不超过1时钟,  +1下降沿采样, 超1.5, +2上升沿采样
                spicmdcnt <= spicmdcnt - 1;
                if (spicmdcnt == 1) begin
`ifdef SIM
                    dout_ext[7:4] <= $random;
`else
                    //dout_ext[7:4] <= spiin[3:0];
`endif
                end else if (spicmdcnt == 0) begin
`ifdef SIM
                    dout_ext[3:0] <= $random;
`else
                    //dout_ext[3:0] <= spiin[3:0];
`endif
                    state <= IDLE;
                end
            end
        endcase
    end
end

// 桥接 LCD
`ifdef SIM
always @(posedge pixelclk) begin
    pixel <= sram[pixeladdr[13:3] + 'h9C0][~pixeladdr[2:0]];
end
`else
ram16K ram(
    // CPU
    .clka (clk),
    .ena (is_zp40 || is_sram),
    .wea (we && (is_zp40 || is_sram)),
    .addra (is_zp40?(offsetzb + addr[5:0]):addr[13:0]),
    .dina (dout),
    .douta (dout_ram),
    // LCD
    .clkb(pixelclk),
    .enb(1'b1),
    .web(1'b0),
    .addrb(pixeladdr + 'h09C0 * 8), // 0..640, 9c0..fff
    .doutb(pixel)
);
`endif

endmodule