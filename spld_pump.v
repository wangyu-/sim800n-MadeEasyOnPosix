module spld_pump(
    input wire clk,
    input wire rstn,
    // RAM
    output [13:0] pixeladdr_o,
    input pixel_i,
    // LCD signal
    output CP,
    output DO,
    output FP,
    output LP,
    output reg FM,
    output reg CKV
);

// CP (507+573) 17(35~19),19(18~0)
reg [5:0] cpcounter; //36
parameter CP_RELOAD = 6'd35; // 18*30=540
assign CP = cpcounter > 17;

reg [12:0] lpcounter; //160*36
parameter LP_RELOAD = 160*36-1; // 160CP=1LP
assign LP = lpcounter < 22 && lpcounter > 13; // 30*8=240 noise if 5,1

reg [6:0] fpcounter;
parameter FP_RELOAD = 80-1; // 80LP->FP/FM
assign FP = fpcounter == 0;

reg [3:0] ckvcounter;
parameter CKV_RELOAD = 7;

reg [13:0] pixeladdr;
parameter PA_RELOAD = 160*80 - 1;

assign DO = pixel_i;
assign pixeladdr_o = pixeladdr;

// 30ns clock
always @(posedge clk or negedge rstn) begin
	if( !rstn ) begin
        cpcounter <= CP_RELOAD;
        lpcounter <= LP_RELOAD;
        fpcounter <= FP_RELOAD + 1;
        ckvcounter <= CKV_RELOAD;
        pixeladdr <= PA_RELOAD;
        FM <= 0;
        CKV <= 0;
    end else begin
        if (cpcounter == 0) begin
            if (ckvcounter == 4)
                CKV <= ~CKV;
            ckvcounter <= (ckvcounter == 0)?CKV_RELOAD:ckvcounter - 1;
            pixeladdr <= (pixeladdr == 0)?PA_RELOAD:pixeladdr - 1;
        end
        if (lpcounter == 0) begin
            // raise edge of LP
            if (fpcounter == 1)
                FM <= ~FM;
            fpcounter <= (fpcounter == 0)?FP_RELOAD:fpcounter - 1;
        end
        cpcounter <= (cpcounter == 0)?CP_RELOAD:cpcounter - 1;
        lpcounter <= (lpcounter == 0)?LP_RELOAD:lpcounter - 1;
    end
end

endmodule
