// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSPDC1016_H_
#define VERILATED_VSPDC1016_H_  // guard

#include "verilated_heavy.h"

//==========

class Vspdc1016__Syms;

//----------

VL_MODULE(Vspdc1016) {
  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk4x,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(lcd_CP,0,0);
    VL_OUT8(lcd_DO,0,0);
    VL_OUT8(lcd_FP,0,0);
    VL_OUT8(lcd_LP,0,0);
    VL_OUT8(lcd_FM,0,0);
    VL_OUT8(lcd_CKV,0,0);

    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ spdc1016__DOT__clk;
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
        CData/*7:0*/ spdc1016__DOT__cpu__DOT__BI;
        CData/*7:0*/ spdc1016__DOT__cpu__DOT__IR;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__CI;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__CO;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__NMI_edge;
        CData/*1:0*/ spdc1016__DOT__cpu__DOT__regsel;
        CData/*7:0*/ spdc1016__DOT__cpu__DOT__regfile;
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
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__shift_right;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__alu_shift_right;
        CData/*3:0*/ spdc1016__DOT__cpu__DOT__op;
        CData/*3:0*/ spdc1016__DOT__cpu__DOT__alu_op;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__adc_bcd;
    };
    struct {
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
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__NMI_1;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__AI7;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__BI7;
        CData/*7:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI;
        CData/*4:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l;
        CData/*4:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__temp_h;
        CData/*0:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__temp_HC;
        CData/*5:0*/ spdc1016__DOT__lcd__DOT__cpcounter;
        CData/*6:0*/ spdc1016__DOT__lcd__DOT__fpcounter;
        CData/*3:0*/ spdc1016__DOT__lcd__DOT__ckvcounter;
        SData/*15:0*/ spdc1016__DOT__addr;
        SData/*11:0*/ spdc1016__DOT__hub__DOT__offsetzb;
        SData/*8:0*/ spdc1016__DOT__hub__DOT__io_timer0_val;
        SData/*15:0*/ spdc1016__DOT__hub__DOT__io_timer1_val;
        SData/*15:0*/ spdc1016__DOT__hub__DOT__io_timerA_val;
        SData/*11:0*/ spdc1016__DOT__hub__DOT__io_timerB_val;
        SData/*14:0*/ spdc1016__DOT__hub__DOT__timerbasecounter;
        SData/*15:0*/ spdc1016__DOT__cpu__DOT__PC;
        SData/*15:0*/ spdc1016__DOT__cpu__DOT__PC_temp;
        SData/*8:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic;
        SData/*8:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__temp;
        SData/*12:0*/ spdc1016__DOT__lcd__DOT__lpcounter;
        SData/*13:0*/ spdc1016__DOT__lcd__DOT__pixeladdr;
        IData/*21:0*/ spdc1016__DOT__hub__DOT__nmicounter;
        VlUnpacked<CData/*7:0*/, 16384> spdc1016__DOT__hub__DOT__sram;
        VlUnpacked<CData/*7:0*/, 12582912> spdc1016__DOT__hub__DOT__brommem;
        VlUnpacked<CData/*7:0*/, 524288> spdc1016__DOT__hub__DOT__normem;
        VlUnpacked<CData/*7:0*/, 4> spdc1016__DOT__cpu__DOT__AXYS;
    };

    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ spdc1016__DOT__cpu__DOT____Vcellinp__ALU__BCD;
    CData/*6:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx5;
    CData/*0:0*/ __Vdly__spdc1016__DOT__hub__DOT__is_4000_nor;
    CData/*7:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_bank_switch;
    CData/*7:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_bios_bsw;
    CData/*7:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_lcd_segment;
    CData/*7:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_zp_bsw;
    CData/*7:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_port4;
    CData/*7:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_port3;
    CData/*7:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_int_status;
    CData/*0:0*/ __Vdlyvset__spdc1016__DOT__hub__DOT__sram__v0;
    CData/*0:0*/ __Vdlyvset__spdc1016__DOT__hub__DOT__sram__v1;
    CData/*5:0*/ __Vdly__spdc1016__DOT__cpu__DOT__state;
    CData/*0:0*/ __Vclklast__TOP__clk4x;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vclklast__TOP__spdc1016__DOT__clk;
    SData/*10:0*/ __Vtableidx3;
    SData/*10:0*/ __Vtableidx4;
    SData/*11:0*/ __Vdly__spdc1016__DOT__hub__DOT__offsetzb;
    SData/*8:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_timer0_val;
    SData/*15:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_timer1_val;
    SData/*15:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_timerA_val;
    SData/*11:0*/ __Vdly__spdc1016__DOT__hub__DOT__io_timerB_val;
    SData/*13:0*/ __Vdly__spdc1016__DOT__lcd__DOT__pixeladdr;
    static VlUnpacked<CData/*0:0*/, 128> __Vtable1_spdc1016__DOT__we;
    static VlUnpacked<CData/*0:0*/, 256> __Vtable2_spdc1016__DOT__cpu__DOT__write_register;
    static VlUnpacked<CData/*1:0*/, 2048> __Vtable3_spdc1016__DOT__cpu__DOT__regsel;
    static VlUnpacked<CData/*3:0*/, 2048> __Vtable4_spdc1016__DOT__cpu__DOT__alu_op;
    static VlUnpacked<CData/*0:0*/, 128> __Vtable5_spdc1016__DOT__cpu__DOT__cond_true;

    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vspdc1016__Syms* __VlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vspdc1016);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vspdc1016(VerilatedContext* contextp, const char* name = "TOP");
    Vspdc1016(const char* name = "TOP")
      : Vspdc1016(nullptr, name) {}
    /// Destroy the model; called (often implicitly) by application code
    ~Vspdc1016();

    // API METHODS
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp();
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();

    // INTERNAL METHODS
    static void _eval_initial_loop(Vspdc1016__Syms* __restrict vlSymsp);
    void __Vconfigure(Vspdc1016__Syms* symsp, bool first);
  private:
    static QData _change_request(Vspdc1016__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vspdc1016__Syms* __restrict vlSymsp);
    static void _ctor_var_reset(Vspdc1016* self) VL_ATTR_COLD;
  public:
    static void _eval(Vspdc1016__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vspdc1016__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vspdc1016__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vspdc1016__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vspdc1016__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vspdc1016__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vspdc1016__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vspdc1016__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vspdc1016__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(Vspdc1016__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(Vspdc1016__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vspdc1016__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
