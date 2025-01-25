// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspdc1016.h for the primary calling header

#include "Vspdc1016__pch.h"
#include "Vspdc1016___024root.h"

VL_ATTR_COLD void Vspdc1016___024root___eval_static__TOP(Vspdc1016___024root* vlSelf);

VL_ATTR_COLD void Vspdc1016___024root___eval_static(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vspdc1016___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vspdc1016___024root___eval_static__TOP(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.spdc1016__DOT__cpucnt = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__irqcnter = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__offsetzb = 0x40U;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_int_status = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_int_enable = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_timer0_val = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_timer1_val = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_general_ctrl = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_bios_bsw = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_port3 = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_lcd_segment = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_zp_bsw = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_timerA_val = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_timerB_val = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_port4 = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__timer0run = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__timer1run = 0U;
    vlSelfRef.spdc1016__DOT__hub__DOT__timerbasecounter = 0x3998U;
    vlSelfRef.spdc1016__DOT__hub__DOT__nmicounter = 0x1c1fffU;
    vlSelfRef.spdc1016__DOT__cpu__DOT__C = 0U;
    vlSelfRef.spdc1016__DOT__cpu__DOT__Z = 0U;
    vlSelfRef.spdc1016__DOT__cpu__DOT__I = 0U;
    vlSelfRef.spdc1016__DOT__cpu__DOT__D = 0U;
    vlSelfRef.spdc1016__DOT__cpu__DOT__V = 0U;
    vlSelfRef.spdc1016__DOT__cpu__DOT__N = 0U;
    vlSelfRef.spdc1016__DOT__cpu__DOT__NMI_edge = 0U;
    vlSelfRef.spdc1016__DOT__cpu__DOT__NMI_1 = 0U;
}

VL_ATTR_COLD void Vspdc1016___024root___eval_initial__TOP(Vspdc1016___024root* vlSelf);

VL_ATTR_COLD void Vspdc1016___024root___eval_initial(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vspdc1016___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk4x__0 = vlSelfRef.clk4x;
    vlSelfRef.__Vtrigprevexpr___TOP__spdc1016__DOT__clk__0 
        = vlSelfRef.spdc1016__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void Vspdc1016___024root___eval_initial__TOP(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VL_READMEM_N(true, 8, 12582912, 0, std::string{"brom.hex"}
                 ,  &(vlSelfRef.spdc1016__DOT__hub__DOT__brommem)
                 , 0, ~0ULL);
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x63383030U;
    __Vtemp_1[2U] = 0x63U;
    VL_READMEM_N(true, 8, 524288, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.spdc1016__DOT__hub__DOT__normem)
                 , 0, ~0ULL);
    vlSelfRef.spdc1016__DOT__nmi = 0U;
}

VL_ATTR_COLD void Vspdc1016___024root___eval_final(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspdc1016___024root___dump_triggers__stl(Vspdc1016___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vspdc1016___024root___eval_phase__stl(Vspdc1016___024root* vlSelf);

VL_ATTR_COLD void Vspdc1016___024root___eval_settle(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vspdc1016___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("spdc1016.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vspdc1016___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspdc1016___024root___dump_triggers__stl(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspdc1016___024root___stl_sequent__TOP__0(Vspdc1016___024root* vlSelf);

VL_ATTR_COLD void Vspdc1016___024root___eval_stl(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vspdc1016___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vspdc1016__ConstPool__TABLE_h3046dbb4_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vspdc1016__ConstPool__TABLE_hf9320a1f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vspdc1016__ConstPool__TABLE_h2335744c_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vspdc1016__ConstPool__TABLE_hfbc9adf5_0;
extern const VlUnpacked<CData/*0:0*/, 8192> Vspdc1016__ConstPool__TABLE_hc377d77d_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vspdc1016__ConstPool__TABLE_h8ffa5a2b_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vspdc1016__ConstPool__TABLE_h00ffe440_0;

VL_ATTR_COLD void Vspdc1016___024root___stl_sequent__TOP__0(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ spdc1016__DOT__cpu__DOT__BI;
    spdc1016__DOT__cpu__DOT__BI = 0;
    CData/*0:0*/ spdc1016__DOT__cpu__DOT__CI;
    spdc1016__DOT__cpu__DOT__CI = 0;
    CData/*7:0*/ spdc1016__DOT__cpu__DOT__regfile;
    spdc1016__DOT__cpu__DOT__regfile = 0;
    CData/*0:0*/ spdc1016__DOT__cpu__DOT__alu_shift_right;
    spdc1016__DOT__cpu__DOT__alu_shift_right = 0;
    CData/*3:0*/ spdc1016__DOT__cpu__DOT__alu_op;
    spdc1016__DOT__cpu__DOT__alu_op = 0;
    SData/*15:0*/ spdc1016__DOT__cpu__DOT____VdfgExtracted_h40a41065__0;
    spdc1016__DOT__cpu__DOT____VdfgExtracted_h40a41065__0 = 0;
    SData/*8:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic;
    spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic = 0;
    CData/*4:0*/ spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l;
    spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l = 0;
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*10:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    SData/*10:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    SData/*12:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.lcd_CP = (0x11U < (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__cpcounter));
    vlSelfRef.lcd_DO = vlSelfRef.spdc1016__DOT__ram_lcd_dat_o;
    vlSelfRef.lcd_FP = (0U == (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__fpcounter));
    vlSelfRef.lcd_LP = ((0x16U > (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__lpcounter)) 
                        & (0xdU < (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__lpcounter)));
    vlSelfRef.spdc1016__DOT__clk = (1U & ((IData)(vlSelfRef.spdc1016__DOT__cpucnt) 
                                          >> 1U));
    __Vtableidx2 = (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__store) 
                     << 6U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state));
    vlSelfRef.spdc1016__DOT__we = Vspdc1016__ConstPool__TABLE_h3046dbb4_0
        [__Vtableidx2];
    __Vtableidx3 = (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__plp) 
                     << 7U) | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__load_reg) 
                                << 6U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)));
    vlSelfRef.spdc1016__DOT__cpu__DOT__write_register 
        = Vspdc1016__ConstPool__TABLE_hf9320a1f_0[__Vtableidx3];
    vlSelfRef.spdc1016__DOT__cpu__DOT__IR = ((((~ (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__I)) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__irqcnter))) 
                                              | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__NMI_edge))
                                              ? 0U : 
                                             ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IRHOLD_valid)
                                               ? (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IRHOLD)
                                               : (IData)(vlSelfRef.spdc1016__DOT__cpu_di)));
    __Vtableidx8 = ((((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__N) 
                      << 6U) | ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__V) 
                                << 5U)) | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__C) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__Z) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__cond_code))));
    vlSelfRef.spdc1016__DOT__cpu__DOT__cond_true = 
        Vspdc1016__ConstPool__TABLE_h2335744c_0[__Vtableidx8];
    __Vtableidx1 = ((((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__backwards) 
                      << 0xaU) | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__CO) 
                                   << 9U) | ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__NMI_edge) 
                                             << 8U))) 
                    | (((0U != (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__irqcnter)) 
                        << 7U) | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__I) 
                                   << 6U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))));
    vlSelfRef.spdc1016__DOT__cpu__DOT__PC_inc = Vspdc1016__ConstPool__TABLE_hfbc9adf5_0
        [__Vtableidx1];
    vlSelfRef.spdc1016__DOT__cpu__DOT____Vcellinp__ALU__BCD 
        = ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__adc_bcd) 
           & (0xdU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)));
    vlSelfRef.spdc1016__DOT__cpu__DOT__P = (0x30U | 
                                            ((((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__N) 
                                               << 7U) 
                                              | ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__V) 
                                                 << 6U)) 
                                             | ((((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__D) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__I) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__Z) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__C)))));
    spdc1016__DOT__cpu__DOT__alu_shift_right = (((0xdU 
                                                  == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
                                                 | ((0x24U 
                                                     == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
                                                    | (0x23U 
                                                       == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) 
                                                & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__shift_right));
    __Vtableidx6 = (((((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__load_only) 
                       << 0xcU) | ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__compare) 
                                   << 0xbU)) | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__CO) 
                                                 << 0xaU) 
                                                | ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__inc) 
                                                   << 9U))) 
                    | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__shift) 
                        << 8U) | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__C) 
                                   << 7U) | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__rotate) 
                                              << 6U) 
                                             | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))));
    spdc1016__DOT__cpu__DOT__CI = Vspdc1016__ConstPool__TABLE_hc377d77d_0
        [__Vtableidx6];
    __Vtableidx4 = (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__dst_reg) 
                     << 9U) | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__index_y) 
                                << 8U) | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__src_reg) 
                                           << 6U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))));
    vlSelfRef.spdc1016__DOT__cpu__DOT__regsel = Vspdc1016__ConstPool__TABLE_h8ffa5a2b_0
        [__Vtableidx4];
    __Vtableidx5 = (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__backwards) 
                     << 0xaU) | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__op) 
                                  << 6U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)));
    spdc1016__DOT__cpu__DOT__alu_op = Vspdc1016__ConstPool__TABLE_h00ffe440_0
        [__Vtableidx5];
    spdc1016__DOT__cpu__DOT____VdfgExtracted_h40a41065__0 
        = (0x100U | vlSelfRef.spdc1016__DOT__cpu__DOT__AXYS
           [vlSelfRef.spdc1016__DOT__cpu__DOT__regsel]);
    spdc1016__DOT__cpu__DOT__regfile = vlSelfRef.spdc1016__DOT__cpu__DOT__AXYS
        [vlSelfRef.spdc1016__DOT__cpu__DOT__regsel];
    if ((0x20U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        if ((0x10U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
            spdc1016__DOT__cpu__DOT__BI = (0xffU & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
            if ((8U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                vlSelfRef.spdc1016__DOT__addr = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                    = (0xffU & 0U);
            } else if ((4U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                vlSelfRef.spdc1016__DOT__addr = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                    = (0xffU & 0U);
            } else if ((2U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                vlSelfRef.spdc1016__DOT__addr = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                    = (0xffU & 0U);
            } else if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                vlSelfRef.spdc1016__DOT__addr = vlSelfRef.spdc1016__DOT__cpu__DOT__ADD;
                vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                    = (0xffU & 0U);
            } else {
                vlSelfRef.spdc1016__DOT__addr = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                    = (0xffU & (IData)(spdc1016__DOT__cpu__DOT__regfile));
            }
            vlSelfRef.spdc1016__DOT__cpu_do = (0xffU 
                                               & (IData)(spdc1016__DOT__cpu__DOT__regfile));
        } else if ((8U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                = ((2U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                    ? (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC)
                    : ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                        ? (((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                            << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD))
                        : (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC)));
            if ((4U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                               & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
                if ((2U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                        vlSelfRef.spdc1016__DOT__addr 
                            = vlSelfRef.spdc1016__DOT__cpu_di;
                        vlSelfRef.spdc1016__DOT__cpu_do 
                            = (0xffU & (IData)(spdc1016__DOT__cpu__DOT__regfile));
                    } else {
                        vlSelfRef.spdc1016__DOT__addr 
                            = (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ABH) 
                                << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ABL));
                        vlSelfRef.spdc1016__DOT__cpu_do 
                            = (0xffU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                    }
                } else {
                    vlSelfRef.spdc1016__DOT__addr = 
                        ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                          ? (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC)
                          : (0x100U | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD)));
                    vlSelfRef.spdc1016__DOT__cpu_do 
                        = (0xffU & (IData)(spdc1016__DOT__cpu__DOT__regfile));
                }
                vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                    = (0xffU & 0U);
            } else {
                if ((2U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                    spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                                   & 0U);
                    if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                        vlSelfRef.spdc1016__DOT__addr 
                            = (0x100U | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                        vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                            = (0xffU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                    } else {
                        vlSelfRef.spdc1016__DOT__addr 
                            = spdc1016__DOT__cpu__DOT____VdfgExtracted_h40a41065__0;
                        vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                            = (0xffU & (IData)(spdc1016__DOT__cpu__DOT__regfile));
                    }
                } else {
                    spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                                   & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
                    vlSelfRef.spdc1016__DOT__addr = 
                        ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                          ? (((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                              << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD))
                          : (0x100U | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD)));
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & 0U);
                }
                vlSelfRef.spdc1016__DOT__cpu_do = (0xffU 
                                                   & (IData)(spdc1016__DOT__cpu__DOT__regfile));
            }
        } else {
            vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
            if ((4U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                               & 0U);
                if ((2U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                    vlSelfRef.spdc1016__DOT__addr = 
                        (0x100U | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                } else {
                    vlSelfRef.spdc1016__DOT__addr = 
                        ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                          ? (IData)(spdc1016__DOT__cpu__DOT____VdfgExtracted_h40a41065__0)
                          : (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ABH) 
                              << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ABL)));
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & (IData)(spdc1016__DOT__cpu__DOT__regfile));
                }
                vlSelfRef.spdc1016__DOT__cpu_do = (0xffU 
                                                   & (IData)(spdc1016__DOT__cpu__DOT__regfile));
            } else if ((2U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                               & 0U);
                if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                    vlSelfRef.spdc1016__DOT__addr = 
                        (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ABH) 
                          << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ABL));
                    vlSelfRef.spdc1016__DOT__cpu_do 
                        = (0xffU & (IData)(spdc1016__DOT__cpu__DOT__regfile));
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
                } else {
                    vlSelfRef.spdc1016__DOT__addr = spdc1016__DOT__cpu__DOT____VdfgExtracted_h40a41065__0;
                    vlSelfRef.spdc1016__DOT__cpu_do 
                        = (0xffU & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__php)
                                     ? (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__P)
                                     : (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD)));
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & (IData)(spdc1016__DOT__cpu__DOT__regfile));
                }
            } else {
                if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                    spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                                   & 0U);
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & (IData)(spdc1016__DOT__cpu__DOT__regfile));
                } else {
                    spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                                   & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & 0U);
                }
                vlSelfRef.spdc1016__DOT__addr = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                vlSelfRef.spdc1016__DOT__cpu_do = (0xffU 
                                                   & (IData)(spdc1016__DOT__cpu__DOT__regfile));
            }
        }
    } else if ((0x10U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        if ((8U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                = ((2U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                    ? (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC)
                    : ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                        ? (((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                            << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD))
                        : (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC)));
            if ((4U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                    spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                                   & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & 0U);
                } else {
                    spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                                   & 0U);
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & (IData)(spdc1016__DOT__cpu__DOT__regfile));
                }
                vlSelfRef.spdc1016__DOT__addr = ((2U 
                                                  & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  (0x100U 
                                                   | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD))
                                                   : (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC))
                                                  : (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC));
                vlSelfRef.spdc1016__DOT__cpu_do = (0xffU 
                                                   & (IData)(spdc1016__DOT__cpu__DOT__regfile));
            } else if ((2U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                               & 0U);
                if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                    vlSelfRef.spdc1016__DOT__addr = 
                        (0x100U | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                    vlSelfRef.spdc1016__DOT__cpu_do 
                        = (0xffU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC));
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                } else {
                    vlSelfRef.spdc1016__DOT__addr = spdc1016__DOT__cpu__DOT____VdfgExtracted_h40a41065__0;
                    vlSelfRef.spdc1016__DOT__cpu_do 
                        = (0xffU & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC) 
                                    >> 8U));
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & (IData)(spdc1016__DOT__cpu__DOT__regfile));
                }
            } else {
                spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                               & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
                vlSelfRef.spdc1016__DOT__addr = ((1U 
                                                  & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                  ? 
                                                 (((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD))
                                                  : (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC));
                vlSelfRef.spdc1016__DOT__cpu_do = (0xffU 
                                                   & (IData)(spdc1016__DOT__cpu__DOT__regfile));
                vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                    = (0xffU & 0U);
            }
        } else {
            if ((4U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                        vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                            = (((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                                << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                        vlSelfRef.spdc1016__DOT__addr 
                            = (((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                                << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                    } else {
                        vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                            = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                        vlSelfRef.spdc1016__DOT__addr 
                            = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                    }
                } else {
                    vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                        = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                    vlSelfRef.spdc1016__DOT__addr = 
                        ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                          ? (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD) 
                              << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ABL))
                          : (((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                              << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD)));
                }
                vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                    = (0xffU & 0U);
            } else {
                vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                    = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                if ((2U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                        vlSelfRef.spdc1016__DOT__addr 
                            = vlSelfRef.spdc1016__DOT__cpu__DOT__ADD;
                        vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                            = (0xffU & (IData)(spdc1016__DOT__cpu__DOT__regfile));
                    } else {
                        vlSelfRef.spdc1016__DOT__addr 
                            = vlSelfRef.spdc1016__DOT__cpu_di;
                        vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                            = (0xffU & 0U);
                    }
                } else {
                    vlSelfRef.spdc1016__DOT__addr = 
                        ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                          ? (((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                              << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD))
                          : (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & 0U);
                }
            }
            spdc1016__DOT__cpu__DOT__BI = (0xffU & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
            vlSelfRef.spdc1016__DOT__cpu_do = (0xffU 
                                               & (IData)(spdc1016__DOT__cpu__DOT__regfile));
        }
    } else if ((8U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                    = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                    spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                                   & 0U);
                    vlSelfRef.spdc1016__DOT__addr = vlSelfRef.spdc1016__DOT__cpu__DOT__ADD;
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                } else {
                    spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                                   & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
                    vlSelfRef.spdc1016__DOT__addr = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & (IData)(spdc1016__DOT__cpu__DOT__regfile));
                }
            } else {
                if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                    vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                        = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                    spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                                   & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__load_only)
                                     ? 0U : (IData)(spdc1016__DOT__cpu__DOT__regfile)));
                } else {
                    vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                        = ((((~ (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__I)) 
                             & (0U != (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__irqcnter))) 
                            | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__NMI_edge))
                            ? (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ABH) 
                                << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ABL))
                            : (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC));
                    spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                                   & 0U);
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & 0U);
                }
                vlSelfRef.spdc1016__DOT__addr = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
            }
            vlSelfRef.spdc1016__DOT__cpu_do = (0xffU 
                                               & (IData)(spdc1016__DOT__cpu__DOT__regfile));
        } else if ((2U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                    = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                               & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
                vlSelfRef.spdc1016__DOT__addr = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                vlSelfRef.spdc1016__DOT__cpu_do = (0xffU 
                                                   & (IData)(spdc1016__DOT__cpu__DOT__regfile));
                vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                    = (0xffU & 0U);
            } else {
                vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                    = ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__res)
                        ? 0xfffcU : ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__NMI_edge)
                                      ? 0xfffaU : 0xfffeU));
                spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                               & 0U);
                vlSelfRef.spdc1016__DOT__addr = (0x100U 
                                                 | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                vlSelfRef.spdc1016__DOT__cpu_do = (0xffU 
                                                   & (((0U 
                                                        != (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__irqcnter)) 
                                                       | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__NMI_edge))
                                                       ? 
                                                      (0xefU 
                                                       & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__P))
                                                       : (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__P)));
                vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                    = (0xffU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
            }
        } else {
            vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
            spdc1016__DOT__cpu__DOT__BI = (0xffU & 0U);
            if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                vlSelfRef.spdc1016__DOT__addr = (0x100U 
                                                 | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                vlSelfRef.spdc1016__DOT__cpu_do = (0xffU 
                                                   & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC));
                vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                    = (0xffU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
            } else {
                vlSelfRef.spdc1016__DOT__addr = spdc1016__DOT__cpu__DOT____VdfgExtracted_h40a41065__0;
                vlSelfRef.spdc1016__DOT__cpu_do = (0xffU 
                                                   & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC) 
                                                      >> 8U));
                vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                    = (0xffU & (IData)(spdc1016__DOT__cpu__DOT__regfile));
            }
        }
    } else {
        if ((4U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                    vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                        = (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD) 
                            << 8U) | (0xffU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC)));
                    spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                                   & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
                    vlSelfRef.spdc1016__DOT__addr = 
                        (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD) 
                          << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ABL));
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & 0U);
                } else {
                    vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                        = (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ABH) 
                            << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                    spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                                   & 0U);
                    vlSelfRef.spdc1016__DOT__addr = 
                        (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ABH) 
                          << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ABH));
                }
            } else {
                vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                    = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                if ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                    spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                                   & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC));
                    vlSelfRef.spdc1016__DOT__addr = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
                } else {
                    spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                                   & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
                    vlSelfRef.spdc1016__DOT__addr = 
                        (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD) 
                          << 8U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ABL));
                    vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                        = (0xffU & 0U);
                }
            }
        } else {
            vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp 
                = vlSelfRef.spdc1016__DOT__cpu__DOT__PC;
            if ((2U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
                spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                               & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
                vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                    = (0xffU & ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                 ? 0U : (IData)(spdc1016__DOT__cpu__DOT__regfile)));
            } else {
                spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                               & ((1U 
                                                   & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.spdc1016__DOT__cpu_di)));
                vlSelfRef.spdc1016__DOT__cpu__DOT__AI 
                    = (0xffU & 0U);
            }
            vlSelfRef.spdc1016__DOT__addr = ((1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                              ? (((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                                                  << 8U) 
                                                 | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD))
                                              : (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC));
        }
        vlSelfRef.spdc1016__DOT__cpu_do = (0xffU & (IData)(spdc1016__DOT__cpu__DOT__regfile));
    }
    spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic = 
        ((2U & (IData)(spdc1016__DOT__cpu__DOT__alu_op))
          ? ((1U & (IData)(spdc1016__DOT__cpu__DOT__alu_op))
              ? (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__AI)
              : ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__AI) 
                 ^ (IData)(spdc1016__DOT__cpu__DOT__BI)))
          : ((1U & (IData)(spdc1016__DOT__cpu__DOT__alu_op))
              ? ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__AI) 
                 & (IData)(spdc1016__DOT__cpu__DOT__BI))
              : ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__AI) 
                 | (IData)(spdc1016__DOT__cpu__DOT__BI))));
    if (spdc1016__DOT__cpu__DOT__alu_shift_right) {
        spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic 
            = ((0x100U & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__AI) 
                          << 8U)) | (((IData)(spdc1016__DOT__cpu__DOT__CI) 
                                      << 7U) | (0x7fU 
                                                & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__AI) 
                                                   >> 1U))));
    }
    vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI 
        = (0xffU & ((8U & (IData)(spdc1016__DOT__cpu__DOT__alu_op))
                     ? ((4U & (IData)(spdc1016__DOT__cpu__DOT__alu_op))
                         ? 0U : (IData)(spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic))
                     : ((4U & (IData)(spdc1016__DOT__cpu__DOT__alu_op))
                         ? (~ (IData)(spdc1016__DOT__cpu__DOT__BI))
                         : (IData)(spdc1016__DOT__cpu__DOT__BI))));
    spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l = (0x1fU 
                                                 & (((0xfU 
                                                      & (IData)(spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic)) 
                                                     + 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI))) 
                                                    + 
                                                    ((~ 
                                                      ((IData)(spdc1016__DOT__cpu__DOT__alu_shift_right) 
                                                       | (3U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(spdc1016__DOT__cpu__DOT__alu_op) 
                                                              >> 2U))))) 
                                                     & (IData)(spdc1016__DOT__cpu__DOT__CI))));
    vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__temp_HC 
        = (1U & (((IData)(spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l) 
                  >> 4U) | ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT____Vcellinp__ALU__BCD) 
                            & (5U <= (7U & ((IData)(spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l) 
                                            >> 1U))))));
    vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__temp_h 
        = (0x1fU & ((((IData)(spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic) 
                      >> 4U) + (0xfU & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI) 
                                        >> 4U))) + (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__temp_HC)));
    vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__temp 
        = (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__temp_h) 
            << 4U) | (0xfU & (IData)(spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l)));
}

VL_ATTR_COLD void Vspdc1016___024root___eval_triggers__stl(Vspdc1016___024root* vlSelf);

VL_ATTR_COLD bool Vspdc1016___024root___eval_phase__stl(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vspdc1016___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vspdc1016___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspdc1016___024root___dump_triggers__act(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk4x)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge spdc1016.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspdc1016___024root___dump_triggers__nba(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk4x)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge spdc1016.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspdc1016___024root___ctor_var_reset(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk4x = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->lcd_CP = VL_RAND_RESET_I(1);
    vlSelf->lcd_DO = VL_RAND_RESET_I(1);
    vlSelf->lcd_FP = VL_RAND_RESET_I(1);
    vlSelf->lcd_LP = VL_RAND_RESET_I(1);
    vlSelf->lcd_FM = VL_RAND_RESET_I(1);
    vlSelf->lcd_CKV = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpucnt = VL_RAND_RESET_I(2);
    vlSelf->spdc1016__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__addr = VL_RAND_RESET_I(16);
    vlSelf->spdc1016__DOT__cpu_di = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__cpu_do = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__nmi = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__ram_lcd_dat_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->spdc1016__DOT__hub__DOT__sram[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 12582912; ++__Vi0) {
        vlSelf->spdc1016__DOT__hub__DOT__brommem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 524288; ++__Vi0) {
        vlSelf->spdc1016__DOT__hub__DOT__normem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->spdc1016__DOT__hub__DOT__irqcnter = VL_RAND_RESET_I(4);
    vlSelf->spdc1016__DOT__hub__DOT__is_4000_nor = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__hub__DOT__offsetzb = VL_RAND_RESET_I(12);
    vlSelf->spdc1016__DOT__hub__DOT__io_bank_switch = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__hub__DOT__io_int_status = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__hub__DOT__io_int_enable = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__hub__DOT__io_timer0_val = VL_RAND_RESET_I(9);
    vlSelf->spdc1016__DOT__hub__DOT__io_timer1_val = VL_RAND_RESET_I(16);
    vlSelf->spdc1016__DOT__hub__DOT__io_general_ctrl = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__hub__DOT__io_bios_bsw = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__hub__DOT__io_port3 = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__hub__DOT__io_lcd_segment = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__hub__DOT__io_zp_bsw = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__hub__DOT__io_timerA_val = VL_RAND_RESET_I(16);
    vlSelf->spdc1016__DOT__hub__DOT__io_timerB_val = VL_RAND_RESET_I(12);
    vlSelf->spdc1016__DOT__hub__DOT__io_port4 = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__hub__DOT__timer0run = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__hub__DOT__timer1run = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__hub__DOT__timerbasecounter = VL_RAND_RESET_I(15);
    vlSelf->spdc1016__DOT__hub__DOT__nmicounter = VL_RAND_RESET_I(22);
    vlSelf->spdc1016__DOT__cpu__DOT__PC = VL_RAND_RESET_I(16);
    vlSelf->spdc1016__DOT__cpu__DOT__ABL = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__cpu__DOT__ABH = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__cpu__DOT__ADD = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__cpu__DOT__IRHOLD = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__cpu__DOT__IRHOLD_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->spdc1016__DOT__cpu__DOT__AXYS[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->spdc1016__DOT__cpu__DOT__C = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__Z = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__I = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__D = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__V = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__N = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__AN = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__HC = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__AI = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__cpu__DOT__IR = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__cpu__DOT__CO = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__NMI_edge = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__regsel = VL_RAND_RESET_I(2);
    vlSelf->spdc1016__DOT__cpu__DOT__P = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__cpu__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->spdc1016__DOT__cpu__DOT__PC_inc = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__PC_temp = VL_RAND_RESET_I(16);
    vlSelf->spdc1016__DOT__cpu__DOT__src_reg = VL_RAND_RESET_I(2);
    vlSelf->spdc1016__DOT__cpu__DOT__dst_reg = VL_RAND_RESET_I(2);
    vlSelf->spdc1016__DOT__cpu__DOT__index_y = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__load_reg = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__inc = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__write_back = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__load_only = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__store = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__adc_sbc = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__compare = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__shift = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__rotate = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__backwards = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__cond_true = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__cond_code = VL_RAND_RESET_I(3);
    vlSelf->spdc1016__DOT__cpu__DOT__shift_right = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__op = VL_RAND_RESET_I(4);
    vlSelf->spdc1016__DOT__cpu__DOT__adc_bcd = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__adj_bcd = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__bit_ins = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__plp = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__php = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__clc = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__sec = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__cld = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__sed = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__cli = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__sei = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__clv = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__res = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__write_register = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT____Vcellinp__ALU__BCD = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__NMI_1 = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__ALU__DOT__AI7 = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__ALU__DOT__BI7 = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI = VL_RAND_RESET_I(8);
    vlSelf->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_h = VL_RAND_RESET_I(5);
    vlSelf->spdc1016__DOT__cpu__DOT__ALU__DOT__temp = VL_RAND_RESET_I(9);
    vlSelf->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_HC = VL_RAND_RESET_I(1);
    vlSelf->spdc1016__DOT__lcd__DOT__cpcounter = VL_RAND_RESET_I(6);
    vlSelf->spdc1016__DOT__lcd__DOT__lpcounter = VL_RAND_RESET_I(13);
    vlSelf->spdc1016__DOT__lcd__DOT__fpcounter = VL_RAND_RESET_I(7);
    vlSelf->spdc1016__DOT__lcd__DOT__ckvcounter = VL_RAND_RESET_I(4);
    vlSelf->spdc1016__DOT__lcd__DOT__pixeladdr = VL_RAND_RESET_I(14);
    vlSelf->__Vdly__spdc1016__DOT__hub__DOT__is_4000_nor = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__spdc1016__DOT__hub__DOT__io_bank_switch = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__spdc1016__DOT__hub__DOT__io_bios_bsw = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__spdc1016__DOT__hub__DOT__io_lcd_segment = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__spdc1016__DOT__hub__DOT__io_zp_bsw = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__spdc1016__DOT__hub__DOT__offsetzb = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__spdc1016__DOT__hub__DOT__io_timer0_val = VL_RAND_RESET_I(9);
    vlSelf->__Vdly__spdc1016__DOT__hub__DOT__io_timer1_val = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__spdc1016__DOT__hub__DOT__io_port4 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__spdc1016__DOT__hub__DOT__io_port3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__spdc1016__DOT__hub__DOT__io_int_status = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val = VL_RAND_RESET_I(12);
    vlSelf->__Vdly__spdc1016__DOT__cpu__DOT__state = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__spdc1016__DOT__lcd__DOT__pixeladdr = VL_RAND_RESET_I(14);
    vlSelf->__VdlySet__spdc1016__DOT__hub__DOT__sram__v0 = 0;
    vlSelf->__VdlySet__spdc1016__DOT__hub__DOT__sram__v1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk4x__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__spdc1016__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
