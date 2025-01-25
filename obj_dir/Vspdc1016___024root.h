// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vspdc1016.h for the primary calling header

#ifndef VERILATED_VSPDC1016___024ROOT_H_
#define VERILATED_VSPDC1016___024ROOT_H_  // guard

#include "verilated.h"


class Vspdc1016__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vspdc1016___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk4x,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ spdc1016__DOT__clk;
        VL_OUT8(lcd_CP,0,0);
        VL_OUT8(lcd_DO,0,0);
        VL_OUT8(lcd_FP,0,0);
        VL_OUT8(lcd_LP,0,0);
        VL_OUT8(lcd_FM,0,0);
        VL_OUT8(lcd_CKV,0,0);
        CData/*1:0*/ spdc1016__DOT__cpucnt;
        CData/*7:0*/ spdc1016__DOT__cpu_di;
        CData/*7:0*/ spdc1016__DOT__cpu_do;
        CData/*0:0*/ spdc1016__DOT__we;
        CData/*0:0*/ spdc1016__DOT__nmi;
        CData/*0:0*/ spdc1016__DOT__ram_lcd_dat_o;
        CData/*3:0*/ spdc1016__DOT__hub__DOT__irqcnter;
        CData/*0:0*/ spdc1016__DOT__hub__DOT__is_4000_nor;
        CData/*7:0*/ spdc1016__DOT__hub__DOT__io_bank_switch;
        CData/*7:0*/ spdc1016__DOT__hub__DOT__io_int_status;
        CData/*7:0*/ spdc1016__DOT__hub__DOT__io_int_enable;
        CData/*7:0*/ spdc1016__DOT__hub__DOT__io_general_ctrl;
        CData/*7:0*/ spdc1016__DOT__hub__DOT__io_bios_bsw;
        CData/*7:0*/ spdc1016__DOT__hub__DOT__io_port3;
        CData/*7:0*/ spdc1016__DOT__hub__DOT__io_lcd_segment;
        CData/*7:0*/ spdc1016__DOT__hub__DOT__io_zp_bsw;
        CData/*7:0*/ spdc1016__DOT__hub__DOT__io_port4;
        CData/*0:0*/ spdc1016__DOT__hub__DOT__timer0run;
        CData/*0:0*/ spdc1016__DOT__hub__DOT__timer1run;
        CData/*7:0*/ spdc1016__DOT__cpu__DOT__ABL;
        CData/*7:0*/ spdc1016__DOT__cpu__DOT__ABH;
        CData/*7:0*/ spdc1016__DOT__cpu__DOT__ADD;
        CData/*7:0*/ spdc1016__DOT__cpu__DOT__IRHOLD;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__IRHOLD_valid;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__C;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__Z;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__I;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__D;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__V;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__N;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__AN;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__HC;
        CData/*7:0*/ spdc1016__DOT__cpu__DOT__AI;
        CData/*7:0*/ spdc1016__DOT__cpu__DOT__IR;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__CO;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__NMI_edge;
        CData/*1:0*/ spdc1016__DOT__cpu__DOT__regsel;
        CData/*7:0*/ spdc1016__DOT__cpu__DOT__P;
        CData/*5:0*/ spdc1016__DOT__cpu__DOT__state;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__PC_inc;
        CData/*1:0*/ spdc1016__DOT__cpu__DOT__src_reg;
        CData/*1:0*/ spdc1016__DOT__cpu__DOT__dst_reg;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__index_y;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__load_reg;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__inc;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__write_back;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__load_only;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__store;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__adc_sbc;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__compare;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__shift;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__rotate;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__backwards;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__cond_true;
        CData/*2:0*/ spdc1016__DOT__cpu__DOT__cond_code;
    };
    struct {
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__shift_right;
        CData/*3:0*/ spdc1016__DOT__cpu__DOT__op;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__adc_bcd;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__adj_bcd;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__bit_ins;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__plp;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__php;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__clc;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__sec;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__cld;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__sed;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__cli;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__sei;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__clv;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__res;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__write_register;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT____Vcellinp__ALU__BCD;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__NMI_1;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__AI7;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__BI7;
        CData/*7:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI;
        CData/*4:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__temp_h;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__temp_HC;
        CData/*5:0*/ spdc1016__DOT__lcd__DOT__cpcounter;
        CData/*6:0*/ spdc1016__DOT__lcd__DOT__fpcounter;
        CData/*3:0*/ spdc1016__DOT__lcd__DOT__ckvcounter;
        CData/*0:0*/ __Vdly__spdc1016__DOT__hub__DOT__is_4000_nor;
        CData/*7:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_bank_switch;
        CData/*7:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_bios_bsw;
        CData/*7:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_lcd_segment;
        CData/*7:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_zp_bsw;
        CData/*7:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_port4;
        CData/*7:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_port3;
        CData/*7:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_int_status;
        CData/*5:0*/ __Vdly__spdc1016__DOT__cpu__DOT__state;
        CData/*0:0*/ __VdlySet__spdc1016__DOT__hub__DOT__sram__v0;
        CData/*0:0*/ __VdlySet__spdc1016__DOT__hub__DOT__sram__v1;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk4x__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__spdc1016__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ spdc1016__DOT__addr;
        SData/*11:0*/ spdc1016__DOT__hub__DOT__offsetzb;
        SData/*8:0*/ spdc1016__DOT__hub__DOT__io_timer0_val;
        SData/*15:0*/ spdc1016__DOT__hub__DOT__io_timer1_val;
        SData/*15:0*/ spdc1016__DOT__hub__DOT__io_timerA_val;
        SData/*11:0*/ spdc1016__DOT__hub__DOT__io_timerB_val;
        SData/*14:0*/ spdc1016__DOT__hub__DOT__timerbasecounter;
        SData/*15:0*/ spdc1016__DOT__cpu__DOT__PC;
        SData/*15:0*/ spdc1016__DOT__cpu__DOT__PC_temp;
        SData/*8:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__temp;
        SData/*12:0*/ spdc1016__DOT__lcd__DOT__lpcounter;
        SData/*13:0*/ spdc1016__DOT__lcd__DOT__pixeladdr;
        SData/*11:0*/ __Vdly__spdc1016__DOT__hub__DOT__offsetzb;
        SData/*8:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_timer0_val;
        SData/*15:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_timer1_val;
        SData/*15:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_timerA_val;
        SData/*11:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_timerB_val;
        SData/*13:0*/ __Vdly__spdc1016__DOT__lcd__DOT__pixeladdr;
        IData/*21:0*/ spdc1016__DOT__hub__DOT__nmicounter;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 16384> spdc1016__DOT__hub__DOT__sram;
        VlUnpacked<CData/*7:0*/, 12582912> spdc1016__DOT__hub__DOT__brommem;
    };
    struct {
        VlUnpacked<CData/*7:0*/, 524288> spdc1016__DOT__hub__DOT__normem;
        VlUnpacked<CData/*7:0*/, 4> spdc1016__DOT__cpu__DOT__AXYS;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vspdc1016__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vspdc1016___024root(Vspdc1016__Syms* symsp, const char* v__name);
    ~Vspdc1016___024root();
    VL_UNCOPYABLE(Vspdc1016___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
