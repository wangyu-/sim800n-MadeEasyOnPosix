module spdc1016 (
    input clk4x, // 4x cpu clk
    input reset,
    // LCD signal
    output lcd_CP,
    output lcd_DO,
    output lcd_FP,
    output lcd_LP,
    output lcd_FM,
    output lcd_CKV
);

reg [1:0] cpucnt = 0;
wire clk = cpucnt[1];
always @(posedge clk4x) begin
    cpucnt <= cpucnt + 1;
end

wire [15:0] addr;
wire [7:0] cpu_di, cpu_do;
wire we;
wire irq, nmi;

wire [13:0] ram_lcdaddr;
wire ram_lcd_dat_o;

memhub_sim hub(
    .clk (clk),
    .reset (reset),
    .addr(addr),
    .din(cpu_do),
    .dout(cpu_di),
    .we(we),
    .irq(irq),
    .nmi(nmi),
    .pixelclk(lcd_CP),
    .pixeladdr(ram_lcdaddr),
    .pixel(ram_lcd_dat_o)
);

cpu cpu(
    .clk (clk),
    .reset (reset),
    .AB (addr),
    .DI (cpu_di),
    .DO (cpu_do),
    .WE (we),
    .IRQ (irq),
    .NMI (nmi),
    .RDY (1'b1)
);

spld_pump lcd(
    .clk(clk4x),
    .rstn(!reset),
    // RAM
    .pixeladdr_o(ram_lcdaddr),
    .pixel_i(ram_lcd_dat_o),
    // LCD
	.CP(lcd_CP),
    .DO(lcd_DO),
	.FP(lcd_FP),
	.LP(lcd_LP),
	.FM(lcd_FM),
	.CKV(lcd_CKV)
);

endmodule

