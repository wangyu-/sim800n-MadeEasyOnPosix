// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspdc1016.h for the primary calling header

#include "Vspdc1016__pch.h"
#include "Vspdc1016___024root.h"

void Vspdc1016___024root___eval_act(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vspdc1016___024root___nba_sequent__TOP__0(Vspdc1016___024root* vlSelf);
void Vspdc1016___024root___nba_sequent__TOP__1(Vspdc1016___024root* vlSelf);
void Vspdc1016___024root___nba_sequent__TOP__2(Vspdc1016___024root* vlSelf);
void Vspdc1016___024root___nba_sequent__TOP__3(Vspdc1016___024root* vlSelf);
void Vspdc1016___024root___nba_sequent__TOP__4(Vspdc1016___024root* vlSelf);
void Vspdc1016___024root___nba_sequent__TOP__5(Vspdc1016___024root* vlSelf);
void Vspdc1016___024root___nba_sequent__TOP__6(Vspdc1016___024root* vlSelf);
void Vspdc1016___024root___nba_comb__TOP__0(Vspdc1016___024root* vlSelf);

void Vspdc1016___024root___eval_nba(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vspdc1016___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vspdc1016___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vspdc1016___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vspdc1016___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vspdc1016___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vspdc1016___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vspdc1016___024root___nba_sequent__TOP__6(vlSelf);
        Vspdc1016___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vspdc1016___024root___nba_sequent__TOP__0(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.spdc1016__DOT__cpucnt = (3U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.spdc1016__DOT__cpucnt)));
    vlSelfRef.spdc1016__DOT__clk = (1U & ((IData)(vlSelfRef.spdc1016__DOT__cpucnt) 
                                          >> 1U));
}

VL_INLINE_OPT void Vspdc1016___024root___nba_sequent__TOP__1(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vdly__spdc1016__DOT__lcd__DOT__cpcounter;
    __Vdly__spdc1016__DOT__lcd__DOT__cpcounter = 0;
    CData/*3:0*/ __Vdly__spdc1016__DOT__lcd__DOT__ckvcounter;
    __Vdly__spdc1016__DOT__lcd__DOT__ckvcounter = 0;
    CData/*0:0*/ __Vdly__lcd_CKV;
    __Vdly__lcd_CKV = 0;
    SData/*12:0*/ __Vdly__spdc1016__DOT__lcd__DOT__lpcounter;
    __Vdly__spdc1016__DOT__lcd__DOT__lpcounter = 0;
    CData/*6:0*/ __Vdly__spdc1016__DOT__lcd__DOT__fpcounter;
    __Vdly__spdc1016__DOT__lcd__DOT__fpcounter = 0;
    CData/*0:0*/ __Vdly__lcd_FM;
    __Vdly__lcd_FM = 0;
    // Body
    __Vdly__lcd_FM = vlSelfRef.lcd_FM;
    __Vdly__spdc1016__DOT__lcd__DOT__lpcounter = vlSelfRef.spdc1016__DOT__lcd__DOT__lpcounter;
    __Vdly__spdc1016__DOT__lcd__DOT__fpcounter = vlSelfRef.spdc1016__DOT__lcd__DOT__fpcounter;
    __Vdly__spdc1016__DOT__lcd__DOT__ckvcounter = vlSelfRef.spdc1016__DOT__lcd__DOT__ckvcounter;
    vlSelfRef.__Vdly__spdc1016__DOT__lcd__DOT__pixeladdr 
        = vlSelfRef.spdc1016__DOT__lcd__DOT__pixeladdr;
    __Vdly__lcd_CKV = vlSelfRef.lcd_CKV;
    __Vdly__spdc1016__DOT__lcd__DOT__cpcounter = vlSelfRef.spdc1016__DOT__lcd__DOT__cpcounter;
    if (vlSelfRef.reset) {
        __Vdly__spdc1016__DOT__lcd__DOT__lpcounter = 0x167fU;
        __Vdly__spdc1016__DOT__lcd__DOT__fpcounter = 0x50U;
        __Vdly__lcd_FM = 0U;
        __Vdly__spdc1016__DOT__lcd__DOT__cpcounter = 0x23U;
        __Vdly__spdc1016__DOT__lcd__DOT__ckvcounter = 7U;
        vlSelfRef.__Vdly__spdc1016__DOT__lcd__DOT__pixeladdr = 0x31ffU;
        __Vdly__lcd_CKV = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__lpcounter))) {
            if ((1U == (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__fpcounter))) {
                __Vdly__lcd_FM = (1U & (~ (IData)(vlSelfRef.lcd_FM)));
            }
            __Vdly__spdc1016__DOT__lcd__DOT__fpcounter 
                = ((0U == (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__fpcounter))
                    ? 0x4fU : (0x7fU & ((IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__fpcounter) 
                                        - (IData)(1U))));
            __Vdly__spdc1016__DOT__lcd__DOT__lpcounter = 0x167fU;
        } else {
            __Vdly__spdc1016__DOT__lcd__DOT__lpcounter 
                = (0x1fffU & ((IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__lpcounter) 
                              - (IData)(1U)));
        }
        if ((0U == (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__cpcounter))) {
            if ((4U == (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__ckvcounter))) {
                __Vdly__lcd_CKV = (1U & (~ (IData)(vlSelfRef.lcd_CKV)));
            }
            vlSelfRef.__Vdly__spdc1016__DOT__lcd__DOT__pixeladdr 
                = ((0U == (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__pixeladdr))
                    ? 0x31ffU : (0x3fffU & ((IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__pixeladdr) 
                                            - (IData)(1U))));
            __Vdly__spdc1016__DOT__lcd__DOT__ckvcounter 
                = ((0U == (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__ckvcounter))
                    ? 7U : (0xfU & ((IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__ckvcounter) 
                                    - (IData)(1U))));
            __Vdly__spdc1016__DOT__lcd__DOT__cpcounter = 0x23U;
        } else {
            __Vdly__spdc1016__DOT__lcd__DOT__cpcounter 
                = (0x3fU & ((IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__cpcounter) 
                            - (IData)(1U)));
        }
    }
    vlSelfRef.lcd_FM = __Vdly__lcd_FM;
    vlSelfRef.spdc1016__DOT__lcd__DOT__lpcounter = __Vdly__spdc1016__DOT__lcd__DOT__lpcounter;
    vlSelfRef.spdc1016__DOT__lcd__DOT__fpcounter = __Vdly__spdc1016__DOT__lcd__DOT__fpcounter;
    vlSelfRef.spdc1016__DOT__lcd__DOT__ckvcounter = __Vdly__spdc1016__DOT__lcd__DOT__ckvcounter;
    vlSelfRef.lcd_CKV = __Vdly__lcd_CKV;
    vlSelfRef.spdc1016__DOT__lcd__DOT__cpcounter = __Vdly__spdc1016__DOT__lcd__DOT__cpcounter;
    vlSelfRef.lcd_LP = ((0x16U > (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__lpcounter)) 
                        & (0xdU < (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__lpcounter)));
    vlSelfRef.lcd_FP = (0U == (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__fpcounter));
    vlSelfRef.lcd_CP = (0x11U < (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__cpcounter));
}

extern const VlUnpacked<CData/*0:0*/, 16384> Vspdc1016__ConstPool__TABLE_h5eb454e9_0;
extern const VlUnpacked<CData/*3:0*/, 16384> Vspdc1016__ConstPool__TABLE_hc29132ea_0;

VL_INLINE_OPT void Vspdc1016___024root___nba_sequent__TOP__2(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*13:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vdly__spdc1016__DOT__hub__DOT__irqcnter;
    __Vdly__spdc1016__DOT__hub__DOT__irqcnter = 0;
    SData/*14:0*/ __Vdly__spdc1016__DOT__hub__DOT__timerbasecounter;
    __Vdly__spdc1016__DOT__hub__DOT__timerbasecounter = 0;
    CData/*0:0*/ __Vdly__spdc1016__DOT__nmi;
    __Vdly__spdc1016__DOT__nmi = 0;
    IData/*21:0*/ __Vdly__spdc1016__DOT__hub__DOT__nmicounter;
    __Vdly__spdc1016__DOT__hub__DOT__nmicounter = 0;
    CData/*7:0*/ __VdlyVal__spdc1016__DOT__cpu__DOT__AXYS__v0;
    __VdlyVal__spdc1016__DOT__cpu__DOT__AXYS__v0 = 0;
    CData/*1:0*/ __VdlyDim0__spdc1016__DOT__cpu__DOT__AXYS__v0;
    __VdlyDim0__spdc1016__DOT__cpu__DOT__AXYS__v0 = 0;
    CData/*0:0*/ __VdlySet__spdc1016__DOT__cpu__DOT__AXYS__v0;
    __VdlySet__spdc1016__DOT__cpu__DOT__AXYS__v0 = 0;
    // Body
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__is_4000_nor 
        = vlSelfRef.spdc1016__DOT__hub__DOT__is_4000_nor;
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_bank_switch 
        = vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch;
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_bios_bsw 
        = vlSelfRef.spdc1016__DOT__hub__DOT__io_bios_bsw;
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_lcd_segment 
        = vlSelfRef.spdc1016__DOT__hub__DOT__io_lcd_segment;
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_zp_bsw 
        = vlSelfRef.spdc1016__DOT__hub__DOT__io_zp_bsw;
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__offsetzb 
        = vlSelfRef.spdc1016__DOT__hub__DOT__offsetzb;
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_port4 
        = vlSelfRef.spdc1016__DOT__hub__DOT__io_port4;
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_port3 
        = vlSelfRef.spdc1016__DOT__hub__DOT__io_port3;
    vlSelfRef.__VdlySet__spdc1016__DOT__hub__DOT__sram__v0 = 0U;
    vlSelfRef.__VdlySet__spdc1016__DOT__hub__DOT__sram__v1 = 0U;
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val 
        = vlSelfRef.spdc1016__DOT__hub__DOT__io_timerA_val;
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val 
        = vlSelfRef.spdc1016__DOT__hub__DOT__io_timerB_val;
    __Vdly__spdc1016__DOT__nmi = vlSelfRef.spdc1016__DOT__nmi;
    __Vdly__spdc1016__DOT__hub__DOT__nmicounter = vlSelfRef.spdc1016__DOT__hub__DOT__nmicounter;
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timer1_val 
        = vlSelfRef.spdc1016__DOT__hub__DOT__io_timer1_val;
    __Vdly__spdc1016__DOT__hub__DOT__timerbasecounter 
        = vlSelfRef.spdc1016__DOT__hub__DOT__timerbasecounter;
    __Vdly__spdc1016__DOT__hub__DOT__irqcnter = vlSelfRef.spdc1016__DOT__hub__DOT__irqcnter;
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timer0_val 
        = vlSelfRef.spdc1016__DOT__hub__DOT__io_timer0_val;
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_int_status 
        = vlSelfRef.spdc1016__DOT__hub__DOT__io_int_status;
    __VdlySet__spdc1016__DOT__cpu__DOT__AXYS__v0 = 0U;
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val 
        = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_timerA_val)));
    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val 
        = (0xfffU & ((IData)(1U) + (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_timerB_val)));
    if ((0U == vlSelfRef.spdc1016__DOT__hub__DOT__nmicounter)) {
        if ((1U & (~ ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_int_enable) 
                      >> 4U)))) {
            __Vdly__spdc1016__DOT__nmi = 1U;
        }
        __Vdly__spdc1016__DOT__hub__DOT__nmicounter = 0x1c1fffU;
    } else {
        __Vdly__spdc1016__DOT__hub__DOT__nmicounter 
            = (0x3fffffU & (vlSelfRef.spdc1016__DOT__hub__DOT__nmicounter 
                            - (IData)(1U)));
    }
    if (vlSelfRef.spdc1016__DOT__nmi) {
        __Vdly__spdc1016__DOT__nmi = 0U;
    }
    if (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__NMI_edge) 
         & (0xbU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__NMI_edge = 0U;
    } else if (((IData)(vlSelfRef.spdc1016__DOT__nmi) 
                & (~ (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__NMI_1)))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__NMI_edge = 1U;
    }
    if (vlSelfRef.spdc1016__DOT__hub__DOT__timer0run) {
        if ((0x1ffU == (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_timer0_val))) {
            vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_int_status 
                = (0x10U | (IData)(vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_int_status));
            __Vdly__spdc1016__DOT__hub__DOT__irqcnter = 0xeU;
        }
        vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timer0_val 
            = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_timer0_val)));
    }
    if (vlSelfRef.spdc1016__DOT__hub__DOT__timer1run) {
        vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timer1_val 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_timer1_val)));
        if ((0x1ffU == (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_timer0_val))) {
            vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_int_status 
                = (0x20U | (IData)(vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_int_status));
            __Vdly__spdc1016__DOT__hub__DOT__irqcnter = 0xeU;
        }
    }
    if ((0U != (0xfU & (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_general_ctrl)))) {
        if ((0U == (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__timerbasecounter))) {
            if ((1U & (~ ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_int_enable) 
                          >> 3U)))) {
                vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_int_status 
                    = (8U | (IData)(vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_int_status));
                __Vdly__spdc1016__DOT__hub__DOT__irqcnter = 0xeU;
            }
            __Vdly__spdc1016__DOT__hub__DOT__timerbasecounter = 0x3998U;
        } else {
            __Vdly__spdc1016__DOT__hub__DOT__timerbasecounter 
                = (0x7fffU & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__timerbasecounter) 
                              - (IData)(1U)));
        }
    }
    if ((0U != (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__irqcnter))) {
        __Vdly__spdc1016__DOT__hub__DOT__irqcnter = 
            (0xfU & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__irqcnter) 
                     - (IData)(1U)));
    }
    if (vlSelfRef.spdc1016__DOT__cpu__DOT__write_register) {
        __VdlyVal__spdc1016__DOT__cpu__DOT__AXYS__v0 
            = ((0x1aU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                ? (IData)(vlSelfRef.spdc1016__DOT__cpu_di)
                : ((0xf0U & ((((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD) 
                               >> 4U) + ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__adj_bcd)
                                          ? ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__adc_bcd)
                                              ? ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__CO)
                                                  ? 6U
                                                  : 0U)
                                              : ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__CO)
                                                  ? 0U
                                                  : 0xaU))
                                          : 0U)) << 4U)) 
                   | (0xfU & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD) 
                              + ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__adj_bcd)
                                  ? ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__adc_bcd)
                                      ? ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__HC)
                                          ? 6U : 0U)
                                      : ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__HC)
                                          ? 0U : 0xaU))
                                  : 0U)))));
        __VdlyDim0__spdc1016__DOT__cpu__DOT__AXYS__v0 
            = vlSelfRef.spdc1016__DOT__cpu__DOT__regsel;
        __VdlySet__spdc1016__DOT__cpu__DOT__AXYS__v0 = 1U;
    }
    vlSelfRef.spdc1016__DOT__ram_lcd_dat_o = (1U & 
                                              (vlSelfRef.spdc1016__DOT__hub__DOT__sram
                                               [(0x3fffU 
                                                 & ((IData)(0x9c0U) 
                                                    + 
                                                    (0x7ffU 
                                                     & ((IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__pixeladdr) 
                                                        >> 3U))))] 
                                               >> (7U 
                                                   & (~ (IData)(vlSelfRef.spdc1016__DOT__lcd__DOT__pixeladdr)))));
    vlSelfRef.spdc1016__DOT__cpu__DOT__cond_code = 
        (7U & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR) 
               >> 5U));
    vlSelfRef.spdc1016__DOT__cpu__DOT__PC = (0xffffU 
                                             & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC_temp) 
                                                + (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__PC_inc)));
    if (vlSelfRef.reset) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__IRHOLD_valid = 0U;
        vlSelfRef.spdc1016__DOT__cpu__DOT__res = 1U;
    } else {
        if (((0x1eU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
             | (0x21U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__IRHOLD_valid = 1U;
        } else if ((0xcU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__IRHOLD_valid = 0U;
        }
        if ((0xcU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__res = 0U;
        }
    }
    if ((((((0x21U != (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
            & (0x22U != (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
           & (0x1eU != (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
          & (0x1fU != (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
         & (0x20U != (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__ABL = (0xffU 
                                                  & (IData)(vlSelfRef.spdc1016__DOT__addr));
        vlSelfRef.spdc1016__DOT__cpu__DOT__ABH = (0xffU 
                                                  & ((IData)(vlSelfRef.spdc1016__DOT__addr) 
                                                     >> 8U));
    }
    __Vtableidx7 = (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR) 
                     << 6U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state));
    if (Vspdc1016__ConstPool__TABLE_h5eb454e9_0[__Vtableidx7]) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__op = Vspdc1016__ConstPool__TABLE_hc29132ea_0
            [__Vtableidx7];
    }
    if ((1U & (~ (IData)(vlSelfRef.reset)))) {
        if (((0x1eU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
             | (0x21U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__IRHOLD 
                = vlSelfRef.spdc1016__DOT__cpu_di;
        }
    }
    if ((0xbU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__I = 1U;
    } else if ((0x27U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__I = (1U 
                                                & ((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                                                   >> 2U));
    } else if ((0x24U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        if (vlSelfRef.spdc1016__DOT__cpu__DOT__sei) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__I = 1U;
        }
        if (vlSelfRef.spdc1016__DOT__cpu__DOT__cli) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__I = 0U;
        }
    } else if ((0xcU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        if (vlSelfRef.spdc1016__DOT__cpu__DOT__plp) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__I = 
                (1U & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD) 
                       >> 2U));
        }
    }
    if ((0x2eU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__Z = (1U 
                                                & (~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD)))));
        vlSelfRef.spdc1016__DOT__cpu__DOT__N = vlSelfRef.spdc1016__DOT__cpu__DOT__AN;
    } else if ((0x27U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__Z = (1U 
                                                & ((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                                                   >> 1U));
        vlSelfRef.spdc1016__DOT__cpu__DOT__N = (1U 
                                                & ((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                                                   >> 7U));
    } else if ((0xcU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        if (vlSelfRef.spdc1016__DOT__cpu__DOT__plp) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__Z = 
                (1U & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD) 
                       >> 1U));
            vlSelfRef.spdc1016__DOT__cpu__DOT__N = 
                (1U & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD) 
                       >> 7U));
        } else {
            if (((((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__load_reg) 
                   & (1U != (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__regsel))) 
                  | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__compare)) 
                 | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__bit_ins))) {
                vlSelfRef.spdc1016__DOT__cpu__DOT__Z 
                    = (1U & (~ (IData)((0U != (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD)))));
            }
            if ((((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__load_reg) 
                  & (1U != (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__regsel))) 
                 | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__compare))) {
                vlSelfRef.spdc1016__DOT__cpu__DOT__N 
                    = vlSelfRef.spdc1016__DOT__cpu__DOT__AN;
            }
        }
    } else if (((0xdU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
                & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__bit_ins))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__N = (1U 
                                                & ((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                                                   >> 7U));
    }
    if (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__shift) 
         & (0x2eU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__C = vlSelfRef.spdc1016__DOT__cpu__DOT__CO;
    } else if ((0x27U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__C = (1U 
                                                & (IData)(vlSelfRef.spdc1016__DOT__cpu_di));
    } else if (((~ (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__write_back)) 
                & (0xcU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) {
        if ((((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__adc_sbc) 
              | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__shift)) 
             | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__compare))) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__C = vlSelfRef.spdc1016__DOT__cpu__DOT__CO;
        } else if (vlSelfRef.spdc1016__DOT__cpu__DOT__plp) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__C = 
                (1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD));
        } else {
            if (vlSelfRef.spdc1016__DOT__cpu__DOT__sec) {
                vlSelfRef.spdc1016__DOT__cpu__DOT__C = 1U;
            }
            if (vlSelfRef.spdc1016__DOT__cpu__DOT__clc) {
                vlSelfRef.spdc1016__DOT__cpu__DOT__C = 0U;
            }
        }
    }
    if ((0x27U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__V = (1U 
                                                & ((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                                                   >> 6U));
    } else if ((0xcU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        if (vlSelfRef.spdc1016__DOT__cpu__DOT__adc_sbc) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__V = 
                ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__AI7) 
                 ^ ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__BI7) 
                    ^ ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__AN) 
                       ^ (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__CO))));
        }
        if (vlSelfRef.spdc1016__DOT__cpu__DOT__clv) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__V = 0U;
        }
        if (vlSelfRef.spdc1016__DOT__cpu__DOT__plp) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__V = 
                (1U & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD) 
                       >> 6U));
        }
    } else if (((0xdU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
                & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__bit_ins))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__V = (1U 
                                                & ((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                                                   >> 6U));
    }
    vlSelfRef.spdc1016__DOT__hub__DOT__nmicounter = __Vdly__spdc1016__DOT__hub__DOT__nmicounter;
    vlSelfRef.spdc1016__DOT__hub__DOT__timerbasecounter 
        = __Vdly__spdc1016__DOT__hub__DOT__timerbasecounter;
    vlSelfRef.spdc1016__DOT__hub__DOT__irqcnter = __Vdly__spdc1016__DOT__hub__DOT__irqcnter;
    if (__VdlySet__spdc1016__DOT__cpu__DOT__AXYS__v0) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__AXYS[__VdlyDim0__spdc1016__DOT__cpu__DOT__AXYS__v0] 
            = __VdlyVal__spdc1016__DOT__cpu__DOT__AXYS__v0;
    }
    vlSelfRef.spdc1016__DOT__cpu__DOT__NMI_1 = vlSelfRef.spdc1016__DOT__nmi;
    vlSelfRef.spdc1016__DOT__cpu__DOT__HC = vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__temp_HC;
    vlSelfRef.spdc1016__DOT__cpu__DOT__adj_bcd = ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__adc_sbc) 
                                                  & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__D));
    if (((0xcU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
         | (8U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__adc_bcd 
            = ((0x61U == (0xe3U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
               && (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__D));
    }
    if ((0x27U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__D = (1U 
                                                & ((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
                                                   >> 3U));
    } else if ((0xcU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        if (vlSelfRef.spdc1016__DOT__cpu__DOT__sed) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__D = 1U;
        }
        if (vlSelfRef.spdc1016__DOT__cpu__DOT__cld) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__D = 0U;
        }
        if (vlSelfRef.spdc1016__DOT__cpu__DOT__plp) {
            vlSelfRef.spdc1016__DOT__cpu__DOT__D = 
                (1U & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ADD) 
                       >> 3U));
        }
    }
    if ((0xcU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__php = (8U 
                                                  == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR));
        vlSelfRef.spdc1016__DOT__cpu__DOT__shift_right 
            = (0x42U == (0xc3U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)));
        vlSelfRef.spdc1016__DOT__cpu__DOT__inc = ((0xe6U 
                                                   == 
                                                   (0xe7U 
                                                    & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                                                  || (0xc8U 
                                                      == 
                                                      (0xdfU 
                                                       & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))));
        vlSelfRef.spdc1016__DOT__cpu__DOT__rotate = 
            ((0x2aU == (0xafU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
             || (0x26U == (0xa7U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))));
        vlSelfRef.spdc1016__DOT__cpu__DOT__dst_reg 
            = ((((0xe8U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)) 
                 || (0xcaU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                || (0xa2U == (0xe3U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))))
                ? 2U : (((8U == (0xbfU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                         || (0x9aU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                         ? 1U : ((((0x88U == (0xbfU 
                                              & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                                   || (0xa4U == (0xe7U 
                                                 & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                                  || (0xa0U == (0xf7U 
                                                & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))))
                                  ? 3U : 0U)));
        vlSelfRef.spdc1016__DOT__cpu__DOT__src_reg 
            = ((0xbaU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))
                ? 1U : (((((0x86U == (0xe7U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                           || (0x8aU == (0xebU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                          || (0xe0U == (0xf3U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                         || (0xcaU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                         ? 2U : (((((0x84U == (0xe7U 
                                               & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                                    || (0x98U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                                   || (0xc0U == (0xf3U 
                                                 & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                                  || (0x88U == (0xbfU 
                                                & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))))
                                  ? 3U : 0U)));
        vlSelfRef.spdc1016__DOT__cpu__DOT__index_y 
            = (((0x11U == (0x1fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                || (0x96U == (0xd7U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
               || (9U == (0xfU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))));
        vlSelfRef.spdc1016__DOT__cpu__DOT__load_only 
            = (0xa0U == (0xe0U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)));
        vlSelfRef.spdc1016__DOT__cpu__DOT__sei = (0x78U 
                                                  == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR));
        vlSelfRef.spdc1016__DOT__cpu__DOT__cli = (0x58U 
                                                  == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR));
        vlSelfRef.spdc1016__DOT__cpu__DOT__load_reg 
            = (((((((((0xaU == (0x9fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                      || (1U == (0x83U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                     || (0x88U == (0xedU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                    || (0xa0U == (0xf1U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                   || (0xbaU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                  || (0xb4U == (0xf5U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                 || (0xcaU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                || (0xa1U == (0xa3U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
               || (8U == (0x1fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))));
        vlSelfRef.spdc1016__DOT__cpu__DOT__clv = (0xb8U 
                                                  == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR));
        vlSelfRef.spdc1016__DOT__cpu__DOT__bit_ins 
            = (0x24U == (0xf7U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)));
        vlSelfRef.spdc1016__DOT__cpu__DOT__sec = (0x38U 
                                                  == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR));
        vlSelfRef.spdc1016__DOT__cpu__DOT__clc = (0x18U 
                                                  == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR));
        vlSelfRef.spdc1016__DOT__cpu__DOT__shift = 
            ((6U == (0x87U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
             || (0xaU == (0x8fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))));
        vlSelfRef.spdc1016__DOT__cpu__DOT__compare 
            = (((0xc0U == (0xdbU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                || (0xccU == (0xdfU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
               || (0xc1U == (0xe3U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))));
        vlSelfRef.spdc1016__DOT__cpu__DOT__sed = (0xf8U 
                                                  == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR));
        vlSelfRef.spdc1016__DOT__cpu__DOT__cld = (0xd8U 
                                                  == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR));
        vlSelfRef.spdc1016__DOT__cpu__DOT__plp = (0x28U 
                                                  == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR));
    }
    if (((0xcU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
         | (8U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__adc_sbc 
            = (0x61U == (0x63U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)));
    }
    vlSelfRef.lcd_DO = vlSelfRef.spdc1016__DOT__ram_lcd_dat_o;
    vlSelfRef.spdc1016__DOT__cpu__DOT__AN = (1U & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__temp) 
                                                   >> 7U));
    vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__BI7 
        = (1U & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI) 
                 >> 7U));
    vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__AI7 
        = (1U & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__AI) 
                 >> 7U));
    vlSelfRef.spdc1016__DOT__nmi = __Vdly__spdc1016__DOT__nmi;
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
    vlSelfRef.spdc1016__DOT__cpu__DOT__ADD = (0xffU 
                                              & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__temp));
}

VL_INLINE_OPT void Vspdc1016___024root___nba_sequent__TOP__3(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___nba_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__spdc1016__DOT__cpu__DOT__state 
        = vlSelfRef.spdc1016__DOT__cpu__DOT__state;
    if (vlSelfRef.reset) {
        vlSelfRef.__Vdly__spdc1016__DOT__cpu__DOT__state = 8U;
    } else if (((((((((0xcU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
                      | (0x2fU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                     | (0x30U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                    | (0x31U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                   | (0U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                  | (1U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                 | (2U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                | (3U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) {
        if ((0xcU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
            if (((((((((0U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)) 
                       | (0x20U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                      | (0x2cU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                     | (0x40U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                    | (0x4cU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                   | (0x60U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                  | (0x6cU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                 | (8U == (0xbfU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))))) {
                vlSelfRef.__Vdly__spdc1016__DOT__cpu__DOT__state 
                    = ((0U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))
                        ? 8U : ((0x20U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))
                                 ? 0x1aU : ((0x2cU 
                                             == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))
                                             ? 0U : 
                                            ((0x40U 
                                              == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))
                                              ? 0x25U
                                              : ((0x4cU 
                                                  == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))
                                                  ? 0x16U
                                                  : 
                                                 ((0x60U 
                                                   == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))
                                                   ? 0x2aU
                                                   : 
                                                  ((0x6cU 
                                                    == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))
                                                    ? 0x18U
                                                    : 0x21U)))))));
            } else if (((((((((0x28U == (0xbfU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                              | (0x18U == (0x9fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                             | (0x80U == (0x9dU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                            | (0x8cU == (0x9fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                           | (0x88U == (0x8fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                          | (1U == (0x1fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                         | (4U == (0x1cU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                        | (9U == (0x1fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))))) {
                vlSelfRef.__Vdly__spdc1016__DOT__cpu__DOT__state 
                    = ((0x28U == (0xbfU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                        ? 0x1eU : ((0x18U == (0x9fU 
                                              & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                                    ? 0x24U : ((0x80U 
                                                == 
                                                (0x9dU 
                                                 & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                                                ? 0xdU
                                                : (
                                                   (0x8cU 
                                                    == 
                                                    (0x9fU 
                                                     & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                                                    ? 0U
                                                    : 
                                                   ((0x88U 
                                                     == 
                                                     (0x8fU 
                                                      & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                                                     ? 0x24U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                                                      ? 0xeU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0x1cU 
                                                        & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                                                       ? 0x2fU
                                                       : 0xdU)))))));
            } else if (((((((((0xdU == (0x1fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
                              | (0xeU == (0x1fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                             | (0x10U == (0x1fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                            | (0x11U == (0x1fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                           | (0x14U == (0x1cU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                          | (0x19U == (0x1fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                         | (0x1cU == (0x1cU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))) 
                        | (0xaU == (0xfU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))))) {
                vlSelfRef.__Vdly__spdc1016__DOT__cpu__DOT__state 
                    = ((0xdU == (0x1fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                        ? 0U : ((0xeU == (0x1fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                                 ? 0U : ((0x10U == 
                                          (0x1fU & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                                          ? 5U : ((0x11U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                                                   ? 0x12U
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x1cU 
                                                     & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                                                    ? 0x30U
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                                                     ? 2U
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0x1cU 
                                                       & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR)))
                                                      ? 2U
                                                      : 0x24U)))))));
            }
        } else {
            vlSelfRef.__Vdly__spdc1016__DOT__cpu__DOT__state 
                = ((0x2fU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                    ? ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__write_back)
                        ? 0x23U : 0xdU) : ((0x30U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                            ? 0x31U
                                            : ((0x31U 
                                                == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                ? ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__write_back)
                                                    ? 0x23U
                                                    : 0xdU)
                                                : (
                                                   (0U 
                                                    == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__write_back)
                                                      ? 0x23U
                                                      : 0xdU)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                      ? 3U
                                                      : 
                                                     ((((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__CO) 
                                                        | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__store)) 
                                                       | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__write_back))
                                                       ? 4U
                                                       : 0xdU)))))));
        }
    } else if (((((((((4U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
                      | (0xeU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                     | (0xfU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                    | (0x10U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                   | (0x11U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                  | (0x12U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                 | (0x13U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                | (0x14U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) {
        vlSelfRef.__Vdly__spdc1016__DOT__cpu__DOT__state 
            = ((4U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                ? ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__write_back)
                    ? 0x23U : 0xdU) : ((0xeU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                        ? 0xfU : ((0xfU 
                                                   == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                   ? 0x10U
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                    ? 0x11U
                                                    : 
                                                   ((0x11U 
                                                     == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                     ? 0xdU
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                      ? 0x13U
                                                      : 
                                                     ((0x13U 
                                                       == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                       ? 0x14U
                                                       : 
                                                      (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__CO) 
                                                        | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__store))
                                                        ? 0x15U
                                                        : 0xdU))))))));
    } else if (((((((((0x15U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
                      | (0x23U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                     | (0x2eU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                    | (0xdU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                   | (0x24U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                  | (0x21U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                 | (0x22U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                | (0x1eU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) {
        vlSelfRef.__Vdly__spdc1016__DOT__cpu__DOT__state 
            = ((0x15U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                ? 0xdU : ((0x23U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                           ? 0x2eU : ((0x2eU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                       ? 0xdU : ((0xdU 
                                                  == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                  ? 0xcU
                                                  : 
                                                 ((0x24U 
                                                   == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                   ? 0xcU
                                                   : 
                                                  ((0x21U 
                                                    == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                    ? 0x22U
                                                    : 
                                                   ((0x22U 
                                                     == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                     ? 0xcU
                                                     : 0x1fU)))))));
    } else if (((((((((0x1fU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
                      | (0x20U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                     | (0x1aU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                    | (0x1bU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                   | (0x1cU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                  | (0x1dU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                 | (0x25U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                | (0x26U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) {
        vlSelfRef.__Vdly__spdc1016__DOT__cpu__DOT__state 
            = ((0x1fU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                ? 0x20U : ((0x20U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                            ? 0xcU : ((0x1aU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                       ? 0x1bU : ((0x1bU 
                                                   == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                   ? 0x1cU
                                                   : 
                                                  ((0x1cU 
                                                    == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                    ? 0x1dU
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                     ? 0xdU
                                                     : 
                                                    ((0x25U 
                                                      == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                      ? 0x26U
                                                      : 0x27U)))))));
    } else if (((((((((0x27U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
                      | (0x28U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                     | (0x29U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                    | (0x2aU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                   | (0x2bU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                  | (0x2cU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                 | (0x2dU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                | (5U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) {
        vlSelfRef.__Vdly__spdc1016__DOT__cpu__DOT__state 
            = ((0x27U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                ? 0x28U : ((0x28U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                            ? 0x29U : ((0x29U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                        ? 0xcU : ((0x2aU 
                                                   == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                   ? 0x2bU
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                    ? 0x2cU
                                                    : 
                                                   ((0x2cU 
                                                     == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                     ? 0x2dU
                                                     : 
                                                    ((0x2dU 
                                                      == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                      ? 0xdU
                                                      : 
                                                     ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__cond_true)
                                                       ? 6U
                                                       : 0xcU))))))));
    } else if (((((((((6U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)) 
                      | (7U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                     | (0x16U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                    | (0x17U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                   | (0x18U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                  | (0x19U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                 | (8U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) 
                | (9U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)))) {
        vlSelfRef.__Vdly__spdc1016__DOT__cpu__DOT__state 
            = ((6U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                ? (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__CO) 
                    ^ (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__backwards))
                    ? 7U : 0xcU) : ((7U == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                     ? 0xcU : ((0x16U 
                                                == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                ? 0x17U
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                    ? 0xcU
                                                    : 
                                                   ((0x18U 
                                                     == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                     ? 0x19U
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                      ? 0x16U
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))
                                                       ? 9U
                                                       : 0xaU)))))));
    } else if ((0xaU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        vlSelfRef.__Vdly__spdc1016__DOT__cpu__DOT__state = 0xbU;
    } else if ((0xbU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        vlSelfRef.__Vdly__spdc1016__DOT__cpu__DOT__state = 0x16U;
    }
}

VL_INLINE_OPT void Vspdc1016___024root___nba_sequent__TOP__4(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___nba_sequent__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.spdc1016__DOT__lcd__DOT__pixeladdr = vlSelfRef.__Vdly__spdc1016__DOT__lcd__DOT__pixeladdr;
}

extern const VlUnpacked<CData/*0:0*/, 128> Vspdc1016__ConstPool__TABLE_h2335744c_0;

VL_INLINE_OPT void Vspdc1016___024root___nba_sequent__TOP__5(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___nba_sequent__TOP__5\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*7:0*/ __VdlyVal__spdc1016__DOT__hub__DOT__sram__v0;
    __VdlyVal__spdc1016__DOT__hub__DOT__sram__v0 = 0;
    SData/*13:0*/ __VdlyDim0__spdc1016__DOT__hub__DOT__sram__v0;
    __VdlyDim0__spdc1016__DOT__hub__DOT__sram__v0 = 0;
    CData/*7:0*/ __VdlyVal__spdc1016__DOT__hub__DOT__sram__v1;
    __VdlyVal__spdc1016__DOT__hub__DOT__sram__v1 = 0;
    SData/*13:0*/ __VdlyDim0__spdc1016__DOT__hub__DOT__sram__v1;
    __VdlyDim0__spdc1016__DOT__hub__DOT__sram__v1 = 0;
    // Body
    __Vtableidx8 = ((((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__N) 
                      << 6U) | ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__V) 
                                << 5U)) | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__C) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__Z) 
                                               << 3U) 
                                              | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__cond_code))));
    vlSelfRef.spdc1016__DOT__cpu__DOT__cond_true = 
        Vspdc1016__ConstPool__TABLE_h2335744c_0[__Vtableidx8];
    if ((0xcU == (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state))) {
        vlSelfRef.spdc1016__DOT__cpu__DOT__store = 
            ((0x84U == (0xe5U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
             || (0x81U == (0xe3U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))));
        vlSelfRef.spdc1016__DOT__cpu__DOT__write_back 
            = ((6U == (0x87U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))) 
               || (0xc6U == (0xc7U & (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IR))));
    }
    vlSelfRef.spdc1016__DOT__cpu__DOT__backwards = 
        (1U & ((IData)(vlSelfRef.spdc1016__DOT__cpu_di) 
               >> 7U));
    vlSelfRef.spdc1016__DOT__cpu__DOT__CO = (1U & (
                                                   ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__temp) 
                                                    >> 8U) 
                                                   | ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT____Vcellinp__ALU__BCD) 
                                                      & (5U 
                                                         <= 
                                                         (7U 
                                                          & ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__ALU__DOT__temp_h) 
                                                             >> 1U))))));
    if ((0U == (0x3ffU & ((IData)(vlSelfRef.spdc1016__DOT__addr) 
                          >> 6U)))) {
        if (vlSelfRef.spdc1016__DOT__we) {
            if (((((((((0U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr))) 
                       | (0xaU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                      | (0xdU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                     | (0xfU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                    | (1U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                   | (2U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                  | (3U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                 | (5U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr))))) {
                if ((0U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__is_4000_nor 
                        = ((~ ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bios_bsw) 
                               >> 7U)) & (0U == (IData)(vlSelfRef.spdc1016__DOT__cpu_do)));
                    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_bank_switch 
                        = vlSelfRef.spdc1016__DOT__cpu_do;
                } else if ((0xaU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__is_4000_nor 
                        = ((~ ((IData)(vlSelfRef.spdc1016__DOT__cpu_do) 
                               >> 7U)) & (0U == (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch)));
                    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_bios_bsw 
                        = vlSelfRef.spdc1016__DOT__cpu_do;
                } else if ((0xdU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_lcd_segment 
                        = vlSelfRef.spdc1016__DOT__cpu_do;
                } else if ((0xfU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_zp_bsw 
                        = vlSelfRef.spdc1016__DOT__cpu_do;
                    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__offsetzb 
                        = (0xfffU & ((4U & (IData)(vlSelfRef.spdc1016__DOT__cpu_do))
                                      ? ((IData)(0x200U) 
                                         + VL_SHIFTL_III(12,32,32, 
                                                         (3U 
                                                          & (IData)(vlSelfRef.spdc1016__DOT__cpu_do)), 6U))
                                      : ((0U == (7U 
                                                 & (IData)(vlSelfRef.spdc1016__DOT__cpu_do)))
                                          ? 0x40U : 0U)));
                } else if ((1U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                    vlSelfRef.spdc1016__DOT__hub__DOT__io_int_enable 
                        = vlSelfRef.spdc1016__DOT__cpu_do;
                } else if ((2U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timer0_val 
                        = ((IData)(vlSelfRef.spdc1016__DOT__cpu_do) 
                           << 1U);
                } else if ((3U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timer1_val 
                        = ((IData)(vlSelfRef.spdc1016__DOT__cpu_do) 
                           << 8U);
                }
            } else if (((((((((0x18U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr))) 
                              | (0x19U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                             | (7U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                            | (8U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                           | (9U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                          | (4U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                         | (0x15U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                        | (6U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr))))) {
                if ((0x18U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                    vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_port4 
                        = vlSelfRef.spdc1016__DOT__cpu_do;
                } else if ((0x19U != (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                    if ((7U != (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                        if ((8U != (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                            if ((9U != (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                                if ((4U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                                    vlSelfRef.spdc1016__DOT__hub__DOT__io_general_ctrl 
                                        = vlSelfRef.spdc1016__DOT__cpu_do;
                                }
                            }
                        }
                    }
                }
            } else if ((0xbU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_port3 
                    = ((1U & (IData)(vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_port3)) 
                       | (0xfeU & (IData)(vlSelfRef.spdc1016__DOT__cpu_do)));
            } else if (VL_UNLIKELY((0xcU != (0x3fU 
                                             & (IData)(vlSelfRef.spdc1016__DOT__addr))))) {
                VL_WRITEF_NX("write io: %02x <= %02x\n",0,
                             6,(0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)),
                             8,(IData)(vlSelfRef.spdc1016__DOT__cpu_do));
            }
        } else if (((((((((0U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr))) 
                          | (0xaU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                         | (0xdU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                        | (0xfU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                       | (2U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                      | (3U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                     | (1U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                    | ((4U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr))) 
                       || (5U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))))) {
            if ((0U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                vlSelfRef.spdc1016__DOT__cpu_di = vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch;
            } else if ((0xaU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                vlSelfRef.spdc1016__DOT__cpu_di = vlSelfRef.spdc1016__DOT__hub__DOT__io_bios_bsw;
            } else if ((0xdU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                vlSelfRef.spdc1016__DOT__cpu_di = vlSelfRef.spdc1016__DOT__hub__DOT__io_lcd_segment;
            } else if ((0xfU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                vlSelfRef.spdc1016__DOT__cpu_di = vlSelfRef.spdc1016__DOT__hub__DOT__io_zp_bsw;
            } else if ((2U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                vlSelfRef.spdc1016__DOT__cpu_di = (0xffU 
                                                   & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_timer0_val) 
                                                      >> 1U));
            } else if ((3U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                vlSelfRef.spdc1016__DOT__cpu_di = (0xffU 
                                                   & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_timer1_val) 
                                                      >> 8U));
            } else if ((1U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                vlSelfRef.spdc1016__DOT__cpu_di = vlSelfRef.spdc1016__DOT__hub__DOT__io_int_status;
                vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_int_status 
                    = (0xc0U & (IData)(vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_int_status));
            } else {
                vlSelfRef.spdc1016__DOT__hub__DOT__timer0run 
                    = (1U & (IData)(vlSelfRef.spdc1016__DOT__addr));
                vlSelfRef.spdc1016__DOT__cpu_di = (0xffU 
                                                   & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_timer0_val) 
                                                      >> 1U));
            }
        } else if ((((((((((6U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr))) 
                           || (7U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                          | (8U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                         | (9U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                        | (0x10U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                       | (0x11U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                      | (0x12U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                     | (0x13U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) 
                    | (0x18U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr))))) {
            if (((6U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr))) 
                 || (7U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr))))) {
                vlSelfRef.spdc1016__DOT__hub__DOT__timer1run 
                    = (1U & (IData)(vlSelfRef.spdc1016__DOT__addr));
                vlSelfRef.spdc1016__DOT__cpu_di = (0xffU 
                                                   & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_timer1_val) 
                                                      >> 8U));
            } else if ((8U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                vlSelfRef.spdc1016__DOT__cpu_di = 0U;
            } else if ((9U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                vlSelfRef.spdc1016__DOT__cpu_di = 0U;
            } else if ((0x10U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                vlSelfRef.spdc1016__DOT__cpu_di = (0xffU 
                                                   & (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_timerA_val));
                vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val 
                    = (0xff00U & (IData)(vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val));
            } else if ((0x11U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                vlSelfRef.spdc1016__DOT__cpu_di = (0xffU 
                                                   & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_timerA_val) 
                                                      >> 8U));
                vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val 
                    = (0xffU & (IData)(vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val));
            } else if ((0x12U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                vlSelfRef.spdc1016__DOT__cpu_di = (0xffU 
                                                   & (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_timerB_val));
                vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val 
                    = (0xf00U & (IData)(vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val));
            } else if ((0x13U == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
                vlSelfRef.spdc1016__DOT__cpu_di = (0xfU 
                                                   & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_timerB_val) 
                                                      >> 8U));
                vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val 
                    = (0xffU & (IData)(vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val));
            } else {
                vlSelfRef.spdc1016__DOT__cpu_di = vlSelfRef.spdc1016__DOT__hub__DOT__io_port4;
            }
        } else if ((0xbU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr)))) {
            vlSelfRef.spdc1016__DOT__cpu_di = (1U | 
                                               (0xfeU 
                                                & (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_port3)));
        } else if (VL_LIKELY((0xcU == (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr))))) {
            vlSelfRef.spdc1016__DOT__cpu_di = 8U;
        } else {
            VL_WRITEF_NX("read io: %02x\n",0,6,(0x3fU 
                                                & (IData)(vlSelfRef.spdc1016__DOT__addr)));
            vlSelfRef.spdc1016__DOT__cpu_di = 0U;
        }
    } else if ((1U == (0x3ffU & ((IData)(vlSelfRef.spdc1016__DOT__addr) 
                                 >> 6U)))) {
        if (vlSelfRef.spdc1016__DOT__we) {
            __VdlyVal__spdc1016__DOT__hub__DOT__sram__v0 
                = vlSelfRef.spdc1016__DOT__cpu_do;
            __VdlyDim0__spdc1016__DOT__hub__DOT__sram__v0 
                = (0xfffU & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__offsetzb) 
                             + (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr))));
            vlSelfRef.__VdlySet__spdc1016__DOT__hub__DOT__sram__v0 = 1U;
        } else {
            vlSelfRef.spdc1016__DOT__cpu_di = vlSelfRef.spdc1016__DOT__hub__DOT__sram
                [(0xfffU & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__offsetzb) 
                            + (0x3fU & (IData)(vlSelfRef.spdc1016__DOT__addr))))];
        }
    } else if ((IData)(((0U == (0xc000U & (IData)(vlSelfRef.spdc1016__DOT__addr))) 
                        & (0U != (0x7fU & ((IData)(vlSelfRef.spdc1016__DOT__addr) 
                                           >> 7U)))))) {
        if (vlSelfRef.spdc1016__DOT__we) {
            __VdlyVal__spdc1016__DOT__hub__DOT__sram__v1 
                = vlSelfRef.spdc1016__DOT__cpu_do;
            __VdlyDim0__spdc1016__DOT__hub__DOT__sram__v1 
                = (0x3fffU & (IData)(vlSelfRef.spdc1016__DOT__addr));
            vlSelfRef.__VdlySet__spdc1016__DOT__hub__DOT__sram__v1 = 1U;
        } else {
            vlSelfRef.spdc1016__DOT__cpu_di = vlSelfRef.spdc1016__DOT__hub__DOT__sram
                [(0x3fffU & (IData)(vlSelfRef.spdc1016__DOT__addr))];
        }
    } else if (((1U == (3U & ((IData)(vlSelfRef.spdc1016__DOT__addr) 
                              >> 0xeU))) | (2U == (3U 
                                                   & ((IData)(vlSelfRef.spdc1016__DOT__addr) 
                                                      >> 0xeU))))) {
        if ((1U & (~ (IData)(vlSelfRef.spdc1016__DOT__we)))) {
            vlSelfRef.spdc1016__DOT__cpu_di = ((IData)(
                                                       ((0x4000U 
                                                         == 
                                                         (0xc000U 
                                                          & (IData)(vlSelfRef.spdc1016__DOT__addr))) 
                                                        & (~ 
                                                           ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bios_bsw) 
                                                            >> 7U))))
                                                ? ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__is_4000_nor)
                                                    ? 
                                                   vlSelfRef.spdc1016__DOT__hub__DOT__normem
                                                   [
                                                   ((0x78000U 
                                                     & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch) 
                                                        << 0xfU)) 
                                                    | (0x7fffU 
                                                       & (IData)(vlSelfRef.spdc1016__DOT__addr)))]
                                                    : 
                                                   ((0xbfffffU 
                                                     >= 
                                                     ((((0x80U 
                                                         & (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch))
                                                         ? 
                                                        (3U 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (1U 
                                                             & (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_lcd_segment))))
                                                         : 0U) 
                                                       << 0x16U) 
                                                      | ((0x3f8000U 
                                                          & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch) 
                                                             << 0xfU)) 
                                                         | (0x7fffU 
                                                            & (IData)(vlSelfRef.spdc1016__DOT__addr)))))
                                                     ? 
                                                    vlSelfRef.spdc1016__DOT__hub__DOT__brommem
                                                    [
                                                    ((((0x80U 
                                                        & (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch))
                                                        ? 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (1U 
                                                            & (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_lcd_segment))))
                                                        : 0U) 
                                                      << 0x16U) 
                                                     | ((0x3f8000U 
                                                         & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch) 
                                                            << 0xfU)) 
                                                        | (0x7fffU 
                                                           & (IData)(vlSelfRef.spdc1016__DOT__addr))))]
                                                     : 0U))
                                                : (
                                                   (0x80U 
                                                    & (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bios_bsw))
                                                    ? 
                                                   vlSelfRef.spdc1016__DOT__hub__DOT__normem
                                                   [
                                                   ((0x78000U 
                                                     & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch) 
                                                        << 0xfU)) 
                                                    | (0x7fffU 
                                                       & (IData)(vlSelfRef.spdc1016__DOT__addr)))]
                                                    : 
                                                   ((0xbfffffU 
                                                     >= 
                                                     ((((0x80U 
                                                         & (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch))
                                                         ? 
                                                        (3U 
                                                         & ((IData)(1U) 
                                                            + 
                                                            (1U 
                                                             & (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_lcd_segment))))
                                                         : 0U) 
                                                       << 0x16U) 
                                                      | ((0x3f8000U 
                                                          & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch) 
                                                             << 0xfU)) 
                                                         | (0x7fffU 
                                                            & (IData)(vlSelfRef.spdc1016__DOT__addr)))))
                                                     ? 
                                                    vlSelfRef.spdc1016__DOT__hub__DOT__brommem
                                                    [
                                                    ((((0x80U 
                                                        & (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch))
                                                        ? 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           (1U 
                                                            & (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_lcd_segment))))
                                                        : 0U) 
                                                      << 0x16U) 
                                                     | ((0x3f8000U 
                                                         & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch) 
                                                            << 0xfU)) 
                                                        | (0x7fffU 
                                                           & (IData)(vlSelfRef.spdc1016__DOT__addr))))]
                                                     : 0U)));
        }
    } else if ((6U == (7U & ((IData)(vlSelfRef.spdc1016__DOT__addr) 
                             >> 0xdU)))) {
        if ((1U == (0xfU & (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bios_bsw)))) {
            if ((1U & (~ (IData)(vlSelfRef.spdc1016__DOT__we)))) {
                vlSelfRef.spdc1016__DOT__cpu_di = vlSelfRef.spdc1016__DOT__hub__DOT__normem
                    [(0x6000U | (0x1fffU & (IData)(vlSelfRef.spdc1016__DOT__addr)))];
            }
        } else if ((1U & (~ (IData)(vlSelfRef.spdc1016__DOT__we)))) {
            vlSelfRef.spdc1016__DOT__cpu_di = ((0xbfffffU 
                                                >= 
                                                ((0xffe000U 
                                                  & (0x4000U 
                                                     ^ 
                                                     (0x1e000U 
                                                      & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bios_bsw) 
                                                         << 0xdU)))) 
                                                 | (0x1fffU 
                                                    & (IData)(vlSelfRef.spdc1016__DOT__addr))))
                                                ? vlSelfRef.spdc1016__DOT__hub__DOT__brommem
                                               [((0xffe000U 
                                                  & (0x4000U 
                                                     ^ 
                                                     (0x1e000U 
                                                      & ((IData)(vlSelfRef.spdc1016__DOT__hub__DOT__io_bios_bsw) 
                                                         << 0xdU)))) 
                                                 | (0x1fffU 
                                                    & (IData)(vlSelfRef.spdc1016__DOT__addr)))]
                                                : 0U);
        }
    } else if ((7U == (7U & ((IData)(vlSelfRef.spdc1016__DOT__addr) 
                             >> 0xdU)))) {
        if ((1U & (~ (IData)(vlSelfRef.spdc1016__DOT__we)))) {
            vlSelfRef.spdc1016__DOT__cpu_di = ((0xbfffffU 
                                                >= 
                                                (0x6000U 
                                                 | (0x1fffU 
                                                    & (IData)(vlSelfRef.spdc1016__DOT__addr))))
                                                ? vlSelfRef.spdc1016__DOT__hub__DOT__brommem
                                               [(0x6000U 
                                                 | (0x1fffU 
                                                    & (IData)(vlSelfRef.spdc1016__DOT__addr)))]
                                                : 0U);
        }
    }
    vlSelfRef.spdc1016__DOT__hub__DOT__is_4000_nor 
        = vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__is_4000_nor;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_bank_switch 
        = vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_bank_switch;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_bios_bsw 
        = vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_bios_bsw;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_lcd_segment 
        = vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_lcd_segment;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_zp_bsw = vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_zp_bsw;
    vlSelfRef.spdc1016__DOT__hub__DOT__offsetzb = vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__offsetzb;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_port4 = vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_port4;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_port3 = vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_port3;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_timer0_val 
        = vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timer0_val;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_timer1_val 
        = vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timer1_val;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_int_status 
        = vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_int_status;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_timerA_val 
        = vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val;
    vlSelfRef.spdc1016__DOT__hub__DOT__io_timerB_val 
        = vlSelfRef.__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val;
    if (vlSelfRef.__VdlySet__spdc1016__DOT__hub__DOT__sram__v0) {
        vlSelfRef.spdc1016__DOT__hub__DOT__sram[__VdlyDim0__spdc1016__DOT__hub__DOT__sram__v0] 
            = __VdlyVal__spdc1016__DOT__hub__DOT__sram__v0;
    }
    if (vlSelfRef.__VdlySet__spdc1016__DOT__hub__DOT__sram__v1) {
        vlSelfRef.spdc1016__DOT__hub__DOT__sram[__VdlyDim0__spdc1016__DOT__hub__DOT__sram__v1] 
            = __VdlyVal__spdc1016__DOT__hub__DOT__sram__v1;
    }
    vlSelfRef.spdc1016__DOT__cpu__DOT__IR = ((((~ (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__I)) 
                                               & (0U 
                                                  != (IData)(vlSelfRef.spdc1016__DOT__hub__DOT__irqcnter))) 
                                              | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__NMI_edge))
                                              ? 0U : 
                                             ((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IRHOLD_valid)
                                               ? (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__IRHOLD)
                                               : (IData)(vlSelfRef.spdc1016__DOT__cpu_di)));
}

VL_INLINE_OPT void Vspdc1016___024root___nba_sequent__TOP__6(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___nba_sequent__TOP__6\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.spdc1016__DOT__cpu__DOT__state = vlSelfRef.__Vdly__spdc1016__DOT__cpu__DOT__state;
}

extern const VlUnpacked<CData/*0:0*/, 128> Vspdc1016__ConstPool__TABLE_h3046dbb4_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vspdc1016__ConstPool__TABLE_hf9320a1f_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vspdc1016__ConstPool__TABLE_hfbc9adf5_0;
extern const VlUnpacked<CData/*0:0*/, 8192> Vspdc1016__ConstPool__TABLE_hc377d77d_0;
extern const VlUnpacked<CData/*1:0*/, 2048> Vspdc1016__ConstPool__TABLE_h8ffa5a2b_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vspdc1016__ConstPool__TABLE_h00ffe440_0;

VL_INLINE_OPT void Vspdc1016___024root___nba_comb__TOP__0(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___nba_comb__TOP__0\n"); );
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
    // Body
    __Vtableidx2 = (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__store) 
                     << 6U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state));
    vlSelfRef.spdc1016__DOT__we = Vspdc1016__ConstPool__TABLE_h3046dbb4_0
        [__Vtableidx2];
    __Vtableidx3 = (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__plp) 
                     << 7U) | (((IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__load_reg) 
                                << 6U) | (IData)(vlSelfRef.spdc1016__DOT__cpu__DOT__state)));
    vlSelfRef.spdc1016__DOT__cpu__DOT__write_register 
        = Vspdc1016__ConstPool__TABLE_hf9320a1f_0[__Vtableidx3];
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

void Vspdc1016___024root___eval_triggers__act(Vspdc1016___024root* vlSelf);

bool Vspdc1016___024root___eval_phase__act(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vspdc1016___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vspdc1016___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vspdc1016___024root___eval_phase__nba(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vspdc1016___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspdc1016___024root___dump_triggers__nba(Vspdc1016___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vspdc1016___024root___dump_triggers__act(Vspdc1016___024root* vlSelf);
#endif  // VL_DEBUG

void Vspdc1016___024root___eval(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vspdc1016___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("spdc1016.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vspdc1016___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("spdc1016.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vspdc1016___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vspdc1016___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vspdc1016___024root___eval_debug_assertions(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk4x & 0xfeU))) {
        Verilated::overWidthError("clk4x");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
