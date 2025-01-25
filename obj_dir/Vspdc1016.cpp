// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspdc1016.h for the primary calling header

#include "Vspdc1016.h"
#include "Vspdc1016__Syms.h"

//==========

VerilatedContext* Vspdc1016::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void Vspdc1016::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vspdc1016::eval\n"); );
    Vspdc1016__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("spdc1016.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vspdc1016::_eval_initial_loop(Vspdc1016__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("spdc1016.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vspdc1016::_sequent__TOP__2(Vspdc1016__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_sequent__TOP__2\n"); );
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdly__spdc1016__DOT__lcd__DOT__cpcounter;
    CData/*3:0*/ __Vdly__spdc1016__DOT__lcd__DOT__ckvcounter;
    CData/*0:0*/ __Vdly__lcd_CKV;
    CData/*6:0*/ __Vdly__spdc1016__DOT__lcd__DOT__fpcounter;
    CData/*0:0*/ __Vdly__lcd_FM;
    SData/*12:0*/ __Vdly__spdc1016__DOT__lcd__DOT__lpcounter;
    // Body
    __Vdly__lcd_CKV = vlTOPp->lcd_CKV;
    vlTOPp->__Vdly__spdc1016__DOT__lcd__DOT__pixeladdr 
        = vlTOPp->spdc1016__DOT__lcd__DOT__pixeladdr;
    __Vdly__spdc1016__DOT__lcd__DOT__ckvcounter = vlTOPp->spdc1016__DOT__lcd__DOT__ckvcounter;
    __Vdly__lcd_FM = vlTOPp->lcd_FM;
    __Vdly__spdc1016__DOT__lcd__DOT__cpcounter = vlTOPp->spdc1016__DOT__lcd__DOT__cpcounter;
    __Vdly__spdc1016__DOT__lcd__DOT__fpcounter = vlTOPp->spdc1016__DOT__lcd__DOT__fpcounter;
    __Vdly__spdc1016__DOT__lcd__DOT__lpcounter = vlTOPp->spdc1016__DOT__lcd__DOT__lpcounter;
    if (vlTOPp->reset) {
        __Vdly__spdc1016__DOT__lcd__DOT__cpcounter = 0x23U;
        __Vdly__spdc1016__DOT__lcd__DOT__ckvcounter = 7U;
        vlTOPp->__Vdly__spdc1016__DOT__lcd__DOT__pixeladdr = 0x31ffU;
        __Vdly__lcd_CKV = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__cpcounter))) {
            if ((4U == (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__ckvcounter))) {
                __Vdly__lcd_CKV = (1U & (~ (IData)(vlTOPp->lcd_CKV)));
            }
            vlTOPp->__Vdly__spdc1016__DOT__lcd__DOT__pixeladdr 
                = ((0U == (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__pixeladdr))
                    ? 0x31ffU : (0x3fffU & ((IData)(vlTOPp->spdc1016__DOT__lcd__DOT__pixeladdr) 
                                            - (IData)(1U))));
            __Vdly__spdc1016__DOT__lcd__DOT__ckvcounter 
                = ((0U == (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__ckvcounter))
                    ? 7U : (0xfU & ((IData)(vlTOPp->spdc1016__DOT__lcd__DOT__ckvcounter) 
                                    - (IData)(1U))));
        }
        __Vdly__spdc1016__DOT__lcd__DOT__cpcounter 
            = ((0U == (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__cpcounter))
                ? 0x23U : (0x3fU & ((IData)(vlTOPp->spdc1016__DOT__lcd__DOT__cpcounter) 
                                    - (IData)(1U))));
    }
    if (vlTOPp->reset) {
        __Vdly__spdc1016__DOT__lcd__DOT__lpcounter = 0x167fU;
        __Vdly__spdc1016__DOT__lcd__DOT__fpcounter = 0x50U;
        __Vdly__lcd_FM = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__lpcounter))) {
            if ((1U == (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__fpcounter))) {
                __Vdly__lcd_FM = (1U & (~ (IData)(vlTOPp->lcd_FM)));
            }
            __Vdly__spdc1016__DOT__lcd__DOT__fpcounter 
                = ((0U == (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__fpcounter))
                    ? 0x4fU : (0x7fU & ((IData)(vlTOPp->spdc1016__DOT__lcd__DOT__fpcounter) 
                                        - (IData)(1U))));
        }
        __Vdly__spdc1016__DOT__lcd__DOT__lpcounter 
            = ((0U == (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__lpcounter))
                ? 0x167fU : (0x1fffU & ((IData)(vlTOPp->spdc1016__DOT__lcd__DOT__lpcounter) 
                                        - (IData)(1U))));
    }
    vlTOPp->spdc1016__DOT__lcd__DOT__ckvcounter = __Vdly__spdc1016__DOT__lcd__DOT__ckvcounter;
    vlTOPp->lcd_CKV = __Vdly__lcd_CKV;
    vlTOPp->spdc1016__DOT__lcd__DOT__cpcounter = __Vdly__spdc1016__DOT__lcd__DOT__cpcounter;
    vlTOPp->lcd_FM = __Vdly__lcd_FM;
    vlTOPp->spdc1016__DOT__lcd__DOT__lpcounter = __Vdly__spdc1016__DOT__lcd__DOT__lpcounter;
    vlTOPp->spdc1016__DOT__lcd__DOT__fpcounter = __Vdly__spdc1016__DOT__lcd__DOT__fpcounter;
    vlTOPp->lcd_CP = (0x11U < (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__cpcounter));
    vlTOPp->lcd_LP = ((0x16U > (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__lpcounter)) 
                      & (0xdU < (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__lpcounter)));
    vlTOPp->lcd_FP = (0U == (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__fpcounter));
}

VL_INLINE_OPT void Vspdc1016::_sequent__TOP__3(Vspdc1016__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_sequent__TOP__3\n"); );
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->spdc1016__DOT__cpucnt = (3U & ((IData)(1U) 
                                           + (IData)(vlTOPp->spdc1016__DOT__cpucnt)));
    vlTOPp->spdc1016__DOT__clk = (1U & ((IData)(vlTOPp->spdc1016__DOT__cpucnt) 
                                        >> 1U));
}

VL_INLINE_OPT void Vspdc1016::_sequent__TOP__5(Vspdc1016__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_sequent__TOP__5\n"); );
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*3:0*/ __Vdly__spdc1016__DOT__hub__DOT__irqcnter;
    CData/*0:0*/ __Vdly__spdc1016__DOT__nmi;
    CData/*1:0*/ __Vdlyvdim0__spdc1016__DOT__cpu__DOT__AXYS__v0;
    CData/*7:0*/ __Vdlyvval__spdc1016__DOT__cpu__DOT__AXYS__v0;
    CData/*0:0*/ __Vdlyvset__spdc1016__DOT__cpu__DOT__AXYS__v0;
    SData/*14:0*/ __Vdly__spdc1016__DOT__hub__DOT__timerbasecounter;
    IData/*21:0*/ __Vdly__spdc1016__DOT__hub__DOT__nmicounter;
    // Body
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__is_4000_nor 
        = vlTOPp->spdc1016__DOT__hub__DOT__is_4000_nor;
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_port3 
        = vlTOPp->spdc1016__DOT__hub__DOT__io_port3;
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_port4 
        = vlTOPp->spdc1016__DOT__hub__DOT__io_port4;
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__offsetzb 
        = vlTOPp->spdc1016__DOT__hub__DOT__offsetzb;
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_zp_bsw 
        = vlTOPp->spdc1016__DOT__hub__DOT__io_zp_bsw;
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_lcd_segment 
        = vlTOPp->spdc1016__DOT__hub__DOT__io_lcd_segment;
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_bios_bsw 
        = vlTOPp->spdc1016__DOT__hub__DOT__io_bios_bsw;
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_bank_switch 
        = vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch;
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val 
        = vlTOPp->spdc1016__DOT__hub__DOT__io_timerB_val;
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val 
        = vlTOPp->spdc1016__DOT__hub__DOT__io_timerA_val;
    __Vdly__spdc1016__DOT__hub__DOT__nmicounter = vlTOPp->spdc1016__DOT__hub__DOT__nmicounter;
    __Vdly__spdc1016__DOT__nmi = vlTOPp->spdc1016__DOT__nmi;
    vlTOPp->__Vdlyvset__spdc1016__DOT__hub__DOT__sram__v0 = 0U;
    vlTOPp->__Vdlyvset__spdc1016__DOT__hub__DOT__sram__v1 = 0U;
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timer1_val 
        = vlTOPp->spdc1016__DOT__hub__DOT__io_timer1_val;
    __Vdly__spdc1016__DOT__hub__DOT__timerbasecounter 
        = vlTOPp->spdc1016__DOT__hub__DOT__timerbasecounter;
    __Vdly__spdc1016__DOT__hub__DOT__irqcnter = vlTOPp->spdc1016__DOT__hub__DOT__irqcnter;
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_int_status 
        = vlTOPp->spdc1016__DOT__hub__DOT__io_int_status;
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timer0_val 
        = vlTOPp->spdc1016__DOT__hub__DOT__io_timer0_val;
    __Vdlyvset__spdc1016__DOT__cpu__DOT__AXYS__v0 = 0U;
    vlTOPp->spdc1016__DOT__ram_lcd_dat_o = (1U & (vlTOPp->spdc1016__DOT__hub__DOT__sram
                                                  [
                                                  (0x3fffU 
                                                   & ((IData)(0x9c0U) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(vlTOPp->spdc1016__DOT__lcd__DOT__pixeladdr) 
                                                          >> 3U))))] 
                                                  >> 
                                                  (7U 
                                                   & (~ (IData)(vlTOPp->spdc1016__DOT__lcd__DOT__pixeladdr)))));
    vlTOPp->spdc1016__DOT__cpu__DOT__cond_code = (7U 
                                                  & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR) 
                                                     >> 5U));
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val 
        = (0xfffU & ((IData)(1U) + (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_timerB_val)));
    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val 
        = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_timerA_val)));
    if ((0U == vlTOPp->spdc1016__DOT__hub__DOT__nmicounter)) {
        if ((1U & (~ ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_int_enable) 
                      >> 4U)))) {
            __Vdly__spdc1016__DOT__nmi = 1U;
        }
        __Vdly__spdc1016__DOT__hub__DOT__nmicounter = 0x1c1fffU;
    } else {
        __Vdly__spdc1016__DOT__hub__DOT__nmicounter 
            = (0x3fffffU & (vlTOPp->spdc1016__DOT__hub__DOT__nmicounter 
                            - (IData)(1U)));
    }
    if (vlTOPp->spdc1016__DOT__nmi) {
        __Vdly__spdc1016__DOT__nmi = 0U;
    }
    vlTOPp->spdc1016__DOT__cpu__DOT__PC = (0xffffU 
                                           & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC_temp) 
                                              + (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC_inc)));
    if (vlTOPp->spdc1016__DOT__hub__DOT__timer1run) {
        vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timer1_val 
            = (0xffffU & ((IData)(1U) + (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_timer1_val)));
    }
    if (vlTOPp->reset) {
        vlTOPp->spdc1016__DOT__cpu__DOT__IRHOLD_valid = 0U;
    } else if (((0x1eU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
                | (0x21U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__IRHOLD_valid = 1U;
    } else if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__IRHOLD_valid = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->spdc1016__DOT__cpu__DOT__res = 1U;
    } else if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__res = 0U;
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__php = (8U 
                                                == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR));
    }
    if ((((((0x21U != (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
            & (0x22U != (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
           & (0x1eU != (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
          & (0x1fU != (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
         & (0x20U != (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__ABL = (0xffU 
                                                & (IData)(vlTOPp->spdc1016__DOT__addr));
    }
    if (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__NMI_edge) 
         & (0xbU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__NMI_edge = 0U;
    } else if (((IData)(vlTOPp->spdc1016__DOT__nmi) 
                & (~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__NMI_1)))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__NMI_edge = 1U;
    }
    if (vlTOPp->spdc1016__DOT__hub__DOT__timer0run) {
        if ((0x1ffU == (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_timer0_val))) {
            vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_int_status 
                = (0x10U | (IData)(vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_int_status));
            __Vdly__spdc1016__DOT__hub__DOT__irqcnter = 0xeU;
        }
        vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timer0_val 
            = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_timer0_val)));
    }
    if (vlTOPp->spdc1016__DOT__hub__DOT__timer1run) {
        if ((0x1ffU == (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_timer0_val))) {
            vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_int_status 
                = (0x20U | (IData)(vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_int_status));
            __Vdly__spdc1016__DOT__hub__DOT__irqcnter = 0xeU;
        }
    }
    if ((0U != (0xfU & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_general_ctrl)))) {
        if ((0U == (IData)(vlTOPp->spdc1016__DOT__hub__DOT__timerbasecounter))) {
            if ((1U & (~ ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_int_enable) 
                          >> 3U)))) {
                vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_int_status 
                    = (8U | (IData)(vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_int_status));
                __Vdly__spdc1016__DOT__hub__DOT__irqcnter = 0xeU;
            }
            __Vdly__spdc1016__DOT__hub__DOT__timerbasecounter = 0x3998U;
        } else {
            __Vdly__spdc1016__DOT__hub__DOT__timerbasecounter 
                = (0x7fffU & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__timerbasecounter) 
                              - (IData)(1U)));
        }
    }
    if ((0U != (IData)(vlTOPp->spdc1016__DOT__hub__DOT__irqcnter))) {
        __Vdly__spdc1016__DOT__hub__DOT__irqcnter = 
            (0xfU & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__irqcnter) 
                     - (IData)(1U)));
    }
    if ((((((0x21U != (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
            & (0x22U != (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
           & (0x1eU != (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
          & (0x1fU != (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
         & (0x20U != (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__ABH = (0xffU 
                                                & ((IData)(vlTOPp->spdc1016__DOT__addr) 
                                                   >> 8U));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__shift_right 
            = (0x42U == (0xc3U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__rotate = (
                                                   (0x2aU 
                                                    == 
                                                    (0xafU 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                                                   | (0x26U 
                                                      == 
                                                      (0xa7U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__inc = ((0xe6U 
                                                 == 
                                                 (0xe7U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                                                | (0xc8U 
                                                   == 
                                                   (0xdfU 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__op = ((0x80U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                ? (
                                                   (0x40U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                       ? 3U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                        ? 7U
                                                        : 3U))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                         ? 3U
                                                         : 7U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                         ? 3U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                          ? 7U
                                                          : 3U)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                        ? 3U
                                                        : 7U)))
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                         ? 3U
                                                         : 7U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                         ? 7U
                                                         : 3U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                        ? 3U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                         ? 7U
                                                         : 3U)))
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                          ? 3U
                                                          : 7U)
                                                         : 7U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                          ? 3U
                                                          : 7U)
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                          ? 7U
                                                          : 3U)))
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                        ? 
                                                       ((2U 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                          ? 3U
                                                          : 7U)
                                                         : 7U)
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                         ? 3U
                                                         : 7U)))))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                     ? 3U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                      ? 3U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                       ? 
                                                      ((4U 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                        ? 3U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                         ? 3U
                                                         : 
                                                        ((1U 
                                                          & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                          ? 3U
                                                          : 7U)))
                                                       : 3U))))
                                                : (
                                                   (0x40U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                    ? 
                                                   ((0x20U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                       ? 3U
                                                       : 0xfU)
                                                      : 3U)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                       ? 3U
                                                       : 0xfU)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                       ? 
                                                      (0xcU 
                                                       | (3U 
                                                          & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR) 
                                                             >> 5U)))
                                                       : 3U)))
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                     ? 
                                                    ((0x10U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                        ? 3U
                                                        : 0xbU)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                        ? 
                                                       (0xcU 
                                                        | (3U 
                                                           & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR) 
                                                              >> 5U)))
                                                        : 3U))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                         ? 3U
                                                         : 0xbU)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                         ? 
                                                        (0xcU 
                                                         | (3U 
                                                            & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR) 
                                                               >> 5U)))
                                                         : 0xdU))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                         ? 3U
                                                         : 0xbU)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                         ? 
                                                        (0xcU 
                                                         | (3U 
                                                            & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR) 
                                                               >> 5U)))
                                                         : 3U))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                       ? 3U
                                                       : 0xbU)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                       ? 
                                                      (0xcU 
                                                       | (3U 
                                                          & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR) 
                                                             >> 5U)))
                                                       : 3U)))));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__load_only 
            = (0xa0U == (0xe0U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)));
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((0x1eU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
             | (0x21U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
            vlTOPp->spdc1016__DOT__cpu__DOT__IRHOLD 
                = vlTOPp->spdc1016__DOT__cpu_di;
        }
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__index_y = 
            (((0x11U == (0x1fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
              | (0x96U == (0xd7U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
             | (9U == (0xfU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__src_reg = 
            ((0xbaU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
              ? 1U : (((((0x86U == (0xe7U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                         | (0x8aU == (0xebU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                        | (0xe0U == (0xf3U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                       | (0xcaU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                       ? 2U : (((((0x84U == (0xe7U 
                                             & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                                  | (0x98U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                                 | (0xc0U == (0xf3U 
                                              & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                                | (0x88U == (0xbfU 
                                             & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))))
                                ? 3U : 0U)));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__dst_reg = 
            ((((0xe8U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)) 
               | (0xcaU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
              | (0xa2U == (0xe3U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))))
              ? 2U : (((8U == (0xbfU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                       | (0x9aU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                       ? 1U : ((((0x88U == (0xbfU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                                 | (0xa4U == (0xe7U 
                                              & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                                | (0xa0U == (0xf7U 
                                             & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))))
                                ? 3U : 0U)));
    }
    if ((0xbU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__I = 1U;
    } else if ((0x27U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__I = (1U & 
                                              ((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                               >> 2U));
    } else if ((0x24U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        if (vlTOPp->spdc1016__DOT__cpu__DOT__sei) {
            vlTOPp->spdc1016__DOT__cpu__DOT__I = 1U;
        }
        if (vlTOPp->spdc1016__DOT__cpu__DOT__cli) {
            vlTOPp->spdc1016__DOT__cpu__DOT__I = 0U;
        }
    } else if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        if (vlTOPp->spdc1016__DOT__cpu__DOT__plp) {
            vlTOPp->spdc1016__DOT__cpu__DOT__I = (1U 
                                                  & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                                                     >> 2U));
        }
    }
    if ((0x27U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__V = (1U & 
                                              ((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                               >> 6U));
    } else if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        if (vlTOPp->spdc1016__DOT__cpu__DOT__adc_sbc) {
            vlTOPp->spdc1016__DOT__cpu__DOT__V = ((
                                                   ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__AI7) 
                                                    ^ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__BI7)) 
                                                   ^ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CO)) 
                                                  ^ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__AN));
        }
        if (vlTOPp->spdc1016__DOT__cpu__DOT__clv) {
            vlTOPp->spdc1016__DOT__cpu__DOT__V = 0U;
        }
        if (vlTOPp->spdc1016__DOT__cpu__DOT__plp) {
            vlTOPp->spdc1016__DOT__cpu__DOT__V = (1U 
                                                  & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                                                     >> 6U));
        }
    } else if (((0xdU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__bit_ins))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__V = (1U & 
                                              ((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                               >> 6U));
    }
    if ((0x2eU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__Z = (1U & 
                                              (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)))));
    } else if ((0x27U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__Z = (1U & 
                                              ((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                               >> 1U));
    } else if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        if (vlTOPp->spdc1016__DOT__cpu__DOT__plp) {
            vlTOPp->spdc1016__DOT__cpu__DOT__Z = (1U 
                                                  & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                                                     >> 1U));
        } else if (((((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__load_reg) 
                      & (1U != (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regsel))) 
                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__compare)) 
                    | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__bit_ins))) {
            vlTOPp->spdc1016__DOT__cpu__DOT__Z = (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)))));
        }
    }
    if ((0x2eU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__N = vlTOPp->spdc1016__DOT__cpu__DOT__AN;
    } else if ((0x27U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__N = (1U & 
                                              ((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                               >> 7U));
    } else if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        if (vlTOPp->spdc1016__DOT__cpu__DOT__plp) {
            vlTOPp->spdc1016__DOT__cpu__DOT__N = (1U 
                                                  & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                                                     >> 7U));
        } else if ((((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__load_reg) 
                     & (1U != (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regsel))) 
                    | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__compare))) {
            vlTOPp->spdc1016__DOT__cpu__DOT__N = vlTOPp->spdc1016__DOT__cpu__DOT__AN;
        }
    } else if (((0xdU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__bit_ins))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__N = (1U & 
                                              ((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                               >> 7U));
    }
    if (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__shift) 
         & (0x2eU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__C = vlTOPp->spdc1016__DOT__cpu__DOT__CO;
    } else if ((0x27U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__C = (1U & (IData)(vlTOPp->spdc1016__DOT__cpu_di));
    } else if (((~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__write_back)) 
                & (0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
        if ((((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__adc_sbc) 
              | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__shift)) 
             | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__compare))) {
            vlTOPp->spdc1016__DOT__cpu__DOT__C = vlTOPp->spdc1016__DOT__cpu__DOT__CO;
        } else if (vlTOPp->spdc1016__DOT__cpu__DOT__plp) {
            vlTOPp->spdc1016__DOT__cpu__DOT__C = (1U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD));
        } else {
            if (vlTOPp->spdc1016__DOT__cpu__DOT__sec) {
                vlTOPp->spdc1016__DOT__cpu__DOT__C = 1U;
            }
            if (vlTOPp->spdc1016__DOT__cpu__DOT__clc) {
                vlTOPp->spdc1016__DOT__cpu__DOT__C = 0U;
            }
        }
    }
    if (vlTOPp->spdc1016__DOT__cpu__DOT__write_register) {
        __Vdlyvval__spdc1016__DOT__cpu__DOT__AXYS__v0 
            = ((0x1aU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                : ((0xf0U & ((((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                               >> 4U) + ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__adj_bcd)
                                          ? ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__adc_bcd)
                                              ? ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CO)
                                                  ? 6U
                                                  : 0U)
                                              : ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CO)
                                                  ? 0U
                                                  : 0xaU))
                                          : 0U)) << 4U)) 
                   | (0xfU & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                              + ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__adj_bcd)
                                  ? ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__adc_bcd)
                                      ? ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__HC)
                                          ? 6U : 0U)
                                      : ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__HC)
                                          ? 0U : 0xaU))
                                  : 0U)))));
        __Vdlyvset__spdc1016__DOT__cpu__DOT__AXYS__v0 = 1U;
        __Vdlyvdim0__spdc1016__DOT__cpu__DOT__AXYS__v0 
            = vlTOPp->spdc1016__DOT__cpu__DOT__regsel;
    }
    vlTOPp->spdc1016__DOT__hub__DOT__nmicounter = __Vdly__spdc1016__DOT__hub__DOT__nmicounter;
    vlTOPp->spdc1016__DOT__hub__DOT__timerbasecounter 
        = __Vdly__spdc1016__DOT__hub__DOT__timerbasecounter;
    vlTOPp->spdc1016__DOT__hub__DOT__irqcnter = __Vdly__spdc1016__DOT__hub__DOT__irqcnter;
    if (__Vdlyvset__spdc1016__DOT__cpu__DOT__AXYS__v0) {
        vlTOPp->spdc1016__DOT__cpu__DOT__AXYS[__Vdlyvdim0__spdc1016__DOT__cpu__DOT__AXYS__v0] 
            = __Vdlyvval__spdc1016__DOT__cpu__DOT__AXYS__v0;
    }
    vlTOPp->lcd_DO = vlTOPp->spdc1016__DOT__ram_lcd_dat_o;
    vlTOPp->spdc1016__DOT__cpu__DOT__NMI_1 = vlTOPp->spdc1016__DOT__nmi;
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__sei = (0x78U 
                                                == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__cli = (0x58U 
                                                == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR));
    }
    vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__BI7 
        = (1U & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI) 
                 >> 7U));
    vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__AI7 
        = (1U & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__AI) 
                 >> 7U));
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__clv = (0xb8U 
                                                == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR));
    }
    vlTOPp->spdc1016__DOT__cpu__DOT__AN = (1U & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp) 
                                                 >> 7U));
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__bit_ins = 
            (0x24U == (0xf7U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__load_reg = 
            (((((((((0xaU == (0x9fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                    | (1U == (0x83U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                   | (0x88U == (0xedU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                  | (0xa0U == (0xf1U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                 | (0xbaU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                | (0xb4U == (0xf5U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
               | (0xcaU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
              | (0xa1U == (0xa3U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
             | (8U == (0x1fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__sec = (0x38U 
                                                == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__clc = (0x18U 
                                                == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__shift = ((6U 
                                                   == 
                                                   (0x87U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                                                  | (0xaU 
                                                     == 
                                                     (0x8fU 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__compare = 
            (((0xc0U == (0xdbU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
              | (0xccU == (0xdfU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
             | (0xc1U == (0xe3U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))));
    }
    vlTOPp->spdc1016__DOT__cpu__DOT__HC = vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_HC;
    vlTOPp->spdc1016__DOT__cpu__DOT__adj_bcd = ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__adc_sbc) 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__D));
    if (((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
         | (8U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__adc_bcd = 
            ((0x61U == (0xe3U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
             & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__D));
    }
    vlTOPp->spdc1016__DOT__nmi = __Vdly__spdc1016__DOT__nmi;
    if (((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
         | (8U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__adc_sbc = 
            (0x61U == (0x63U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)));
    }
    if ((0x27U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__D = (1U & 
                                              ((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                               >> 3U));
    } else if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        if (vlTOPp->spdc1016__DOT__cpu__DOT__sed) {
            vlTOPp->spdc1016__DOT__cpu__DOT__D = 1U;
        }
        if (vlTOPp->spdc1016__DOT__cpu__DOT__cld) {
            vlTOPp->spdc1016__DOT__cpu__DOT__D = 0U;
        }
        if (vlTOPp->spdc1016__DOT__cpu__DOT__plp) {
            vlTOPp->spdc1016__DOT__cpu__DOT__D = (1U 
                                                  & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                                                     >> 3U));
        }
    }
    vlTOPp->spdc1016__DOT__cpu__DOT__P = (0x30U | (
                                                   ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__N) 
                                                    << 7U) 
                                                   | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__V) 
                                                       << 6U) 
                                                      | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__D) 
                                                          << 3U) 
                                                         | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__I) 
                                                             << 2U) 
                                                            | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__Z) 
                                                                << 1U) 
                                                               | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__C)))))));
    vlTOPp->spdc1016__DOT__cpu__DOT__ADD = (0xffU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp));
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__sed = (0xf8U 
                                                == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__cld = (0xd8U 
                                                == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__plp = (0x28U 
                                                == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR));
    }
}

VL_INLINE_OPT void Vspdc1016::_sequent__TOP__6(Vspdc1016__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_sequent__TOP__6\n"); );
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__spdc1016__DOT__cpu__DOT__state 
        = vlTOPp->spdc1016__DOT__cpu__DOT__state;
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__spdc1016__DOT__cpu__DOT__state = 8U;
    } else if (((((((((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
                      | (0x2fU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                     | (0x30U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                    | (0x31U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                   | (0U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                  | (1U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                 | (2U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                | (3U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
        if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
            if (((((((((0U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)) 
                       | (0x20U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                      | (0x2cU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                     | (0x40U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                    | (0x4cU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                   | (0x60U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                  | (0x6cU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                 | (8U == (0xbfU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))))) {
                vlTOPp->__Vdly__spdc1016__DOT__cpu__DOT__state 
                    = ((0U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                        ? 8U : ((0x20U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                 ? 0x1aU : ((0x2cU 
                                             == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                             ? 0U : 
                                            ((0x40U 
                                              == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                              ? 0x25U
                                              : ((0x4cU 
                                                  == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                  ? 0x16U
                                                  : 
                                                 ((0x60U 
                                                   == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                   ? 0x2aU
                                                   : 
                                                  ((0x6cU 
                                                    == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))
                                                    ? 0x18U
                                                    : 0x21U)))))));
            } else if (((((((((0x28U == (0xbfU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                              | (0x18U == (0x9fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                             | (0x80U == (0x9dU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                            | (0x8cU == (0x9fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                           | (0x88U == (0x8fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                          | (1U == (0x1fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                         | (4U == (0x1cU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                        | (9U == (0x1fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))))) {
                vlTOPp->__Vdly__spdc1016__DOT__cpu__DOT__state 
                    = ((0x28U == (0xbfU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                        ? 0x1eU : ((0x18U == (0x9fU 
                                              & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                                    ? 0x24U : ((0x80U 
                                                == 
                                                (0x9dU 
                                                 & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                                                ? 0xdU
                                                : (
                                                   (0x8cU 
                                                    == 
                                                    (0x9fU 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                                                    ? 0U
                                                    : 
                                                   ((0x88U 
                                                     == 
                                                     (0x8fU 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                                                     ? 0x24U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                                                      ? 0xeU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0x1cU 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                                                       ? 0x2fU
                                                       : 0xdU)))))));
            } else if (((((((((0xdU == (0x1fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                              | (0xeU == (0x1fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                             | (0x10U == (0x1fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                            | (0x11U == (0x1fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                           | (0x14U == (0x1cU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                          | (0x19U == (0x1fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                         | (0x1cU == (0x1cU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))) 
                        | (0xaU == (0xfU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))))) {
                vlTOPp->__Vdly__spdc1016__DOT__cpu__DOT__state 
                    = ((0xdU == (0x1fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                        ? 0U : ((0xeU == (0x1fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                                 ? 0U : ((0x10U == 
                                          (0x1fU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                                          ? 5U : ((0x11U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                                                   ? 0x12U
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x1cU 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                                                    ? 0x30U
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                                                     ? 2U
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0x1cU 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR)))
                                                      ? 2U
                                                      : 0x24U)))))));
            }
        } else {
            vlTOPp->__Vdly__spdc1016__DOT__cpu__DOT__state 
                = ((0x2fU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                    ? ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__write_back)
                        ? 0x23U : 0xdU) : ((0x30U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                            ? 0x31U
                                            : ((0x31U 
                                                == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__write_back)
                                                    ? 0x23U
                                                    : 0xdU)
                                                : (
                                                   (0U 
                                                    == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__write_back)
                                                      ? 0x23U
                                                      : 0xdU)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 3U
                                                      : 
                                                     ((((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CO) 
                                                        | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__store)) 
                                                       | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__write_back))
                                                       ? 4U
                                                       : 0xdU)))))));
        }
    } else if (((((((((4U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
                      | (0xeU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                     | (0xfU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                    | (0x10U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                   | (0x11U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                  | (0x12U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                 | (0x13U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                | (0x14U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
        vlTOPp->__Vdly__spdc1016__DOT__cpu__DOT__state 
            = ((4U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                ? ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__write_back)
                    ? 0x23U : 0xdU) : ((0xeU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                        ? 0xfU : ((0xfU 
                                                   == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 0x10U
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 0x11U
                                                    : 
                                                   ((0x11U 
                                                     == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0xdU
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 0x13U
                                                      : 
                                                     ((0x13U 
                                                       == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 0x14U
                                                       : 
                                                      (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CO) 
                                                        | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__store))
                                                        ? 0x15U
                                                        : 0xdU))))))));
    } else if (((((((((0x15U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
                      | (0x23U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                     | (0x2eU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                    | (0xdU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                   | (0x24U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                  | (0x21U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                 | (0x22U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                | (0x1eU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
        vlTOPp->__Vdly__spdc1016__DOT__cpu__DOT__state 
            = ((0x15U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                ? 0xdU : ((0x23U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                           ? 0x2eU : ((0x2eU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                       ? 0xdU : ((0xdU 
                                                  == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                  ? 0xcU
                                                  : 
                                                 ((0x24U 
                                                   == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 0xcU
                                                   : 
                                                  ((0x21U 
                                                    == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 0x22U
                                                    : 
                                                   ((0x22U 
                                                     == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0xcU
                                                     : 0x1fU)))))));
    } else if (((((((((0x1fU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
                      | (0x20U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                     | (0x1aU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                    | (0x1bU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                   | (0x1cU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                  | (0x1dU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                 | (0x25U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                | (0x26U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
        vlTOPp->__Vdly__spdc1016__DOT__cpu__DOT__state 
            = ((0x1fU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                ? 0x20U : ((0x20U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                            ? 0xcU : ((0x1aU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                       ? 0x1bU : ((0x1bU 
                                                   == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 0x1cU
                                                   : 
                                                  ((0x1cU 
                                                    == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 0x1dU
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0xdU
                                                     : 
                                                    ((0x25U 
                                                      == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 0x26U
                                                      : 0x27U)))))));
    } else if (((((((((0x27U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
                      | (0x28U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                     | (0x29U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                    | (0x2aU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                   | (0x2bU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                  | (0x2cU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                 | (0x2dU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                | (5U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
        vlTOPp->__Vdly__spdc1016__DOT__cpu__DOT__state 
            = ((0x27U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                ? 0x28U : ((0x28U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                            ? 0x29U : ((0x29U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                        ? 0xcU : ((0x2aU 
                                                   == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 0x2bU
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 0x2cU
                                                    : 
                                                   ((0x2cU 
                                                     == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0x2dU
                                                     : 
                                                    ((0x2dU 
                                                      == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 0xdU
                                                      : 
                                                     ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__cond_true)
                                                       ? 6U
                                                       : 0xcU))))))));
    } else if (((((((((6U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
                      | (7U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                     | (0x16U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                    | (0x17U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                   | (0x18U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                  | (0x19U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                 | (8U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
                | (9U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))) {
        vlTOPp->__Vdly__spdc1016__DOT__cpu__DOT__state 
            = ((6U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                ? (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CO) 
                    ^ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__backwards))
                    ? 7U : 0xcU) : ((7U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                     ? 0xcU : ((0x16U 
                                                == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? 0x17U
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 0xcU
                                                    : 
                                                   ((0x18U 
                                                     == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0x19U
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 0x16U
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 9U
                                                       : 0xaU)))))));
    } else if ((0xaU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->__Vdly__spdc1016__DOT__cpu__DOT__state = 0xbU;
    } else if ((0xbU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->__Vdly__spdc1016__DOT__cpu__DOT__state = 0x16U;
    }
}

VL_INLINE_OPT void Vspdc1016::_sequent__TOP__7(Vspdc1016__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_sequent__TOP__7\n"); );
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->spdc1016__DOT__lcd__DOT__pixeladdr = vlTOPp->__Vdly__spdc1016__DOT__lcd__DOT__pixeladdr;
}

VL_INLINE_OPT void Vspdc1016::_sequent__TOP__8(Vspdc1016__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_sequent__TOP__8\n"); );
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvval__spdc1016__DOT__hub__DOT__sram__v0;
    CData/*7:0*/ __Vdlyvval__spdc1016__DOT__hub__DOT__sram__v1;
    SData/*13:0*/ __Vdlyvdim0__spdc1016__DOT__hub__DOT__sram__v0;
    SData/*13:0*/ __Vdlyvdim0__spdc1016__DOT__hub__DOT__sram__v1;
    // Body
    vlTOPp->__Vtableidx5 = (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__N) 
                             << 6U) | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__V) 
                                        << 5U) | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__C) 
                                                   << 4U) 
                                                  | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__Z) 
                                                      << 3U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__cond_code)))));
    vlTOPp->spdc1016__DOT__cpu__DOT__cond_true = vlTOPp->__Vtable5_spdc1016__DOT__cpu__DOT__cond_true
        [vlTOPp->__Vtableidx5];
    vlTOPp->spdc1016__DOT__cpu__DOT__CO = (1U & (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp) 
                                                  >> 8U) 
                                                 | ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT____Vcellinp__ALU__BCD) 
                                                    & (5U 
                                                       <= 
                                                       (7U 
                                                        & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_h) 
                                                           >> 1U))))));
    vlTOPp->spdc1016__DOT__cpu__DOT__backwards = (1U 
                                                  & ((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                     >> 7U));
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__write_back 
            = ((6U == (0x87U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
               | (0xc6U == (0xc7U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))));
    }
    if ((0xcU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__store = ((0x84U 
                                                   == 
                                                   (0xe5U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))) 
                                                  | (0x81U 
                                                     == 
                                                     (0xe3U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IR))));
    }
    if ((0U == (0x3ffU & ((IData)(vlTOPp->spdc1016__DOT__addr) 
                          >> 6U)))) {
        if (vlTOPp->spdc1016__DOT__we) {
            if (((((((((0U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr))) 
                       | (0xaU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                      | (0xdU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                     | (0xfU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                    | (1U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                   | (2U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                  | (3U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                 | (5U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr))))) {
                if ((0U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__is_4000_nor 
                        = ((~ ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bios_bsw) 
                               >> 7U)) & (0U == (IData)(vlTOPp->spdc1016__DOT__cpu_do)));
                    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_bank_switch 
                        = vlTOPp->spdc1016__DOT__cpu_do;
                } else if ((0xaU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__is_4000_nor 
                        = ((~ ((IData)(vlTOPp->spdc1016__DOT__cpu_do) 
                               >> 7U)) & (0U == (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch)));
                    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_bios_bsw 
                        = vlTOPp->spdc1016__DOT__cpu_do;
                } else if ((0xdU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_lcd_segment 
                        = vlTOPp->spdc1016__DOT__cpu_do;
                } else if ((0xfU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_zp_bsw 
                        = vlTOPp->spdc1016__DOT__cpu_do;
                    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__offsetzb 
                        = (0xfffU & ((4U & (IData)(vlTOPp->spdc1016__DOT__cpu_do))
                                      ? ((IData)(0x200U) 
                                         + (0xc0U & 
                                            ((IData)(vlTOPp->spdc1016__DOT__cpu_do) 
                                             << 6U)))
                                      : ((0U == (7U 
                                                 & (IData)(vlTOPp->spdc1016__DOT__cpu_do)))
                                          ? 0x40U : 0U)));
                } else if ((1U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                    vlTOPp->spdc1016__DOT__hub__DOT__io_int_enable 
                        = vlTOPp->spdc1016__DOT__cpu_do;
                } else if ((2U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timer0_val 
                        = ((IData)(vlTOPp->spdc1016__DOT__cpu_do) 
                           << 1U);
                } else if ((3U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timer1_val 
                        = ((IData)(vlTOPp->spdc1016__DOT__cpu_do) 
                           << 8U);
                }
            } else if (((((((((0x18U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr))) 
                              | (0x19U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                             | (7U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                            | (8U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                           | (9U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                          | (4U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                         | (0x15U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                        | (6U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr))))) {
                if ((0x18U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                    vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_port4 
                        = vlTOPp->spdc1016__DOT__cpu_do;
                } else if ((0x19U != (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                    if ((7U != (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                        if ((8U != (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                            if ((9U != (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                                if ((4U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                                    vlTOPp->spdc1016__DOT__hub__DOT__io_general_ctrl 
                                        = vlTOPp->spdc1016__DOT__cpu_do;
                                }
                            }
                        }
                    }
                }
            } else if ((0xbU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_port3 
                    = ((1U & (IData)(vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_port3)) 
                       | (0xfeU & (IData)(vlTOPp->spdc1016__DOT__cpu_do)));
            } else if (VL_UNLIKELY((0xcU != (0x3fU 
                                             & (IData)(vlTOPp->spdc1016__DOT__addr))))) {
                VL_WRITEF("write io: %02x <= %02x\n",
                          6,(0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)),
                          8,(IData)(vlTOPp->spdc1016__DOT__cpu_do));
            }
        } else if (((((((((0U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr))) 
                          | (0xaU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                         | (0xdU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                        | (0xfU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                       | (2U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                      | (3U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                     | (1U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                    | ((4U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr))) 
                       | (5U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))))) {
            if ((0U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                vlTOPp->spdc1016__DOT__cpu_di = vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch;
            } else if ((0xaU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                vlTOPp->spdc1016__DOT__cpu_di = vlTOPp->spdc1016__DOT__hub__DOT__io_bios_bsw;
            } else if ((0xdU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                vlTOPp->spdc1016__DOT__cpu_di = vlTOPp->spdc1016__DOT__hub__DOT__io_lcd_segment;
            } else if ((0xfU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                vlTOPp->spdc1016__DOT__cpu_di = vlTOPp->spdc1016__DOT__hub__DOT__io_zp_bsw;
            } else if ((2U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                vlTOPp->spdc1016__DOT__cpu_di = (0xffU 
                                                 & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_timer0_val) 
                                                    >> 1U));
            } else if ((3U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                vlTOPp->spdc1016__DOT__cpu_di = (0xffU 
                                                 & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_timer1_val) 
                                                    >> 8U));
            } else if ((1U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                vlTOPp->spdc1016__DOT__cpu_di = vlTOPp->spdc1016__DOT__hub__DOT__io_int_status;
                vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_int_status 
                    = (0xc0U & (IData)(vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_int_status));
            } else {
                vlTOPp->spdc1016__DOT__hub__DOT__timer0run 
                    = (1U & (IData)(vlTOPp->spdc1016__DOT__addr));
                vlTOPp->spdc1016__DOT__cpu_di = (0xffU 
                                                 & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_timer0_val) 
                                                    >> 1U));
            }
        } else if ((((((((((6U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr))) 
                           | (7U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                          | (8U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                         | (9U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                        | (0x10U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                       | (0x11U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                      | (0x12U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                     | (0x13U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) 
                    | (0x18U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr))))) {
            if (((6U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr))) 
                 | (7U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr))))) {
                vlTOPp->spdc1016__DOT__hub__DOT__timer1run 
                    = (1U & (IData)(vlTOPp->spdc1016__DOT__addr));
                vlTOPp->spdc1016__DOT__cpu_di = (0xffU 
                                                 & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_timer1_val) 
                                                    >> 8U));
            } else if ((8U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                vlTOPp->spdc1016__DOT__cpu_di = 0U;
            } else if ((9U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                vlTOPp->spdc1016__DOT__cpu_di = 0U;
            } else if ((0x10U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                vlTOPp->spdc1016__DOT__cpu_di = (0xffU 
                                                 & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_timerA_val));
                vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val 
                    = (0xff00U & (IData)(vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val));
            } else if ((0x11U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                vlTOPp->spdc1016__DOT__cpu_di = (0xffU 
                                                 & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_timerA_val) 
                                                    >> 8U));
                vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val 
                    = (0xffU & (IData)(vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val));
            } else if ((0x12U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                vlTOPp->spdc1016__DOT__cpu_di = (0xffU 
                                                 & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_timerB_val));
                vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val 
                    = (0xf00U & (IData)(vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val));
            } else if ((0x13U == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
                vlTOPp->spdc1016__DOT__cpu_di = (0xfU 
                                                 & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_timerB_val) 
                                                    >> 8U));
                vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val 
                    = (0xffU & (IData)(vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val));
            } else {
                vlTOPp->spdc1016__DOT__cpu_di = vlTOPp->spdc1016__DOT__hub__DOT__io_port4;
            }
        } else if ((0xbU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)))) {
            vlTOPp->spdc1016__DOT__cpu_di = (1U | (0xfeU 
                                                   & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_port3)));
        } else if (VL_LIKELY((0xcU == (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr))))) {
            vlTOPp->spdc1016__DOT__cpu_di = 8U;
        } else {
            VL_WRITEF("read io: %02x\n",6,(0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr)));
            vlTOPp->spdc1016__DOT__cpu_di = 0U;
        }
    } else if ((1U == (0x3ffU & ((IData)(vlTOPp->spdc1016__DOT__addr) 
                                 >> 6U)))) {
        if (vlTOPp->spdc1016__DOT__we) {
            __Vdlyvval__spdc1016__DOT__hub__DOT__sram__v0 
                = vlTOPp->spdc1016__DOT__cpu_do;
            vlTOPp->__Vdlyvset__spdc1016__DOT__hub__DOT__sram__v0 = 1U;
            __Vdlyvdim0__spdc1016__DOT__hub__DOT__sram__v0 
                = (0xfffU & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__offsetzb) 
                             + (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr))));
        } else {
            vlTOPp->spdc1016__DOT__cpu_di = vlTOPp->spdc1016__DOT__hub__DOT__sram
                [(0xfffU & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__offsetzb) 
                            + (0x3fU & (IData)(vlTOPp->spdc1016__DOT__addr))))];
        }
    } else if (((0U == (3U & ((IData)(vlTOPp->spdc1016__DOT__addr) 
                              >> 0xeU))) & (0U != (0x7fU 
                                                   & ((IData)(vlTOPp->spdc1016__DOT__addr) 
                                                      >> 7U))))) {
        if (vlTOPp->spdc1016__DOT__we) {
            __Vdlyvval__spdc1016__DOT__hub__DOT__sram__v1 
                = vlTOPp->spdc1016__DOT__cpu_do;
            vlTOPp->__Vdlyvset__spdc1016__DOT__hub__DOT__sram__v1 = 1U;
            __Vdlyvdim0__spdc1016__DOT__hub__DOT__sram__v1 
                = (0x3fffU & (IData)(vlTOPp->spdc1016__DOT__addr));
        } else {
            vlTOPp->spdc1016__DOT__cpu_di = vlTOPp->spdc1016__DOT__hub__DOT__sram
                [(0x3fffU & (IData)(vlTOPp->spdc1016__DOT__addr))];
        }
    } else if (((1U == (3U & ((IData)(vlTOPp->spdc1016__DOT__addr) 
                              >> 0xeU))) | (2U == (3U 
                                                   & ((IData)(vlTOPp->spdc1016__DOT__addr) 
                                                      >> 0xeU))))) {
        if ((1U & (~ (IData)(vlTOPp->spdc1016__DOT__we)))) {
            vlTOPp->spdc1016__DOT__cpu_di = ((IData)(
                                                     ((0x4000U 
                                                       == 
                                                       (0xc000U 
                                                        & (IData)(vlTOPp->spdc1016__DOT__addr))) 
                                                      & (0U 
                                                         == 
                                                         (0x80U 
                                                          & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bios_bsw)))))
                                              ? ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__is_4000_nor)
                                                  ? 
                                                 vlTOPp->spdc1016__DOT__hub__DOT__normem
                                                 [(
                                                   (0x78000U 
                                                    & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch) 
                                                       << 0xfU)) 
                                                   | (0x7fffU 
                                                      & (IData)(vlTOPp->spdc1016__DOT__addr)))]
                                                  : 
                                                 ((0xbfffffU 
                                                   >= 
                                                   ((((0x80U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch))
                                                       ? 
                                                      (3U 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (1U 
                                                           & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_lcd_segment))))
                                                       : 0U) 
                                                     << 0x16U) 
                                                    | ((0x3f8000U 
                                                        & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch) 
                                                           << 0xfU)) 
                                                       | (0x7fffU 
                                                          & (IData)(vlTOPp->spdc1016__DOT__addr)))))
                                                   ? 
                                                  vlTOPp->spdc1016__DOT__hub__DOT__brommem
                                                  [
                                                  ((((0x80U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch))
                                                      ? 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (1U 
                                                          & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_lcd_segment))))
                                                      : 0U) 
                                                    << 0x16U) 
                                                   | ((0x3f8000U 
                                                       & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch) 
                                                          << 0xfU)) 
                                                      | (0x7fffU 
                                                         & (IData)(vlTOPp->spdc1016__DOT__addr))))]
                                                   : 0U))
                                              : ((0x80U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bios_bsw))
                                                  ? 
                                                 vlTOPp->spdc1016__DOT__hub__DOT__normem
                                                 [(
                                                   (0x78000U 
                                                    & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch) 
                                                       << 0xfU)) 
                                                   | (0x7fffU 
                                                      & (IData)(vlTOPp->spdc1016__DOT__addr)))]
                                                  : 
                                                 ((0xbfffffU 
                                                   >= 
                                                   ((((0x80U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch))
                                                       ? 
                                                      (3U 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (1U 
                                                           & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_lcd_segment))))
                                                       : 0U) 
                                                     << 0x16U) 
                                                    | ((0x3f8000U 
                                                        & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch) 
                                                           << 0xfU)) 
                                                       | (0x7fffU 
                                                          & (IData)(vlTOPp->spdc1016__DOT__addr)))))
                                                   ? 
                                                  vlTOPp->spdc1016__DOT__hub__DOT__brommem
                                                  [
                                                  ((((0x80U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch))
                                                      ? 
                                                     (3U 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (1U 
                                                          & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_lcd_segment))))
                                                      : 0U) 
                                                    << 0x16U) 
                                                   | ((0x3f8000U 
                                                       & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch) 
                                                          << 0xfU)) 
                                                      | (0x7fffU 
                                                         & (IData)(vlTOPp->spdc1016__DOT__addr))))]
                                                   : 0U)));
        }
    } else if ((6U == (7U & ((IData)(vlTOPp->spdc1016__DOT__addr) 
                             >> 0xdU)))) {
        if ((1U == (0xfU & (IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bios_bsw)))) {
            if ((1U & (~ (IData)(vlTOPp->spdc1016__DOT__we)))) {
                vlTOPp->spdc1016__DOT__cpu_di = vlTOPp->spdc1016__DOT__hub__DOT__normem
                    [(0x6000U | (0x1fffU & (IData)(vlTOPp->spdc1016__DOT__addr)))];
            }
        } else if ((1U & (~ (IData)(vlTOPp->spdc1016__DOT__we)))) {
            vlTOPp->spdc1016__DOT__cpu_di = ((0xbfffffU 
                                              >= ((0xffe000U 
                                                   & (0x4000U 
                                                      ^ 
                                                      (0x1e000U 
                                                       & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bios_bsw) 
                                                          << 0xdU)))) 
                                                  | (0x1fffU 
                                                     & (IData)(vlTOPp->spdc1016__DOT__addr))))
                                              ? vlTOPp->spdc1016__DOT__hub__DOT__brommem
                                             [((0xffe000U 
                                                & (0x4000U 
                                                   ^ 
                                                   (0x1e000U 
                                                    & ((IData)(vlTOPp->spdc1016__DOT__hub__DOT__io_bios_bsw) 
                                                       << 0xdU)))) 
                                               | (0x1fffU 
                                                  & (IData)(vlTOPp->spdc1016__DOT__addr)))]
                                              : 0U);
        }
    } else if ((7U == (7U & ((IData)(vlTOPp->spdc1016__DOT__addr) 
                             >> 0xdU)))) {
        if ((1U & (~ (IData)(vlTOPp->spdc1016__DOT__we)))) {
            vlTOPp->spdc1016__DOT__cpu_di = ((0xbfffffU 
                                              >= (0x6000U 
                                                  | (0x1fffU 
                                                     & (IData)(vlTOPp->spdc1016__DOT__addr))))
                                              ? vlTOPp->spdc1016__DOT__hub__DOT__brommem
                                             [(0x6000U 
                                               | (0x1fffU 
                                                  & (IData)(vlTOPp->spdc1016__DOT__addr)))]
                                              : 0U);
        }
    }
    vlTOPp->spdc1016__DOT__hub__DOT__is_4000_nor = vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__is_4000_nor;
    vlTOPp->spdc1016__DOT__hub__DOT__io_bios_bsw = vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_bios_bsw;
    vlTOPp->spdc1016__DOT__hub__DOT__io_bank_switch 
        = vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_bank_switch;
    vlTOPp->spdc1016__DOT__hub__DOT__io_lcd_segment 
        = vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_lcd_segment;
    vlTOPp->spdc1016__DOT__hub__DOT__io_zp_bsw = vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_zp_bsw;
    vlTOPp->spdc1016__DOT__hub__DOT__io_int_status 
        = vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_int_status;
    vlTOPp->spdc1016__DOT__hub__DOT__io_port4 = vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_port4;
    vlTOPp->spdc1016__DOT__hub__DOT__io_port3 = vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_port3;
    vlTOPp->spdc1016__DOT__hub__DOT__offsetzb = vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__offsetzb;
    vlTOPp->spdc1016__DOT__hub__DOT__io_timer0_val 
        = vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timer0_val;
    vlTOPp->spdc1016__DOT__hub__DOT__io_timer1_val 
        = vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timer1_val;
    vlTOPp->spdc1016__DOT__hub__DOT__io_timerA_val 
        = vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timerA_val;
    vlTOPp->spdc1016__DOT__hub__DOT__io_timerB_val 
        = vlTOPp->__Vdly__spdc1016__DOT__hub__DOT__io_timerB_val;
    if (vlTOPp->__Vdlyvset__spdc1016__DOT__hub__DOT__sram__v0) {
        vlTOPp->spdc1016__DOT__hub__DOT__sram[__Vdlyvdim0__spdc1016__DOT__hub__DOT__sram__v0] 
            = __Vdlyvval__spdc1016__DOT__hub__DOT__sram__v0;
    }
    if (vlTOPp->__Vdlyvset__spdc1016__DOT__hub__DOT__sram__v1) {
        vlTOPp->spdc1016__DOT__hub__DOT__sram[__Vdlyvdim0__spdc1016__DOT__hub__DOT__sram__v1] 
            = __Vdlyvval__spdc1016__DOT__hub__DOT__sram__v1;
    }
    vlTOPp->spdc1016__DOT__cpu__DOT__IR = ((((0U != (IData)(vlTOPp->spdc1016__DOT__hub__DOT__irqcnter)) 
                                             & (~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__I))) 
                                            | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__NMI_edge))
                                            ? 0U : 
                                           ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IRHOLD_valid)
                                             ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__IRHOLD)
                                             : (IData)(vlTOPp->spdc1016__DOT__cpu_di)));
}

VL_INLINE_OPT void Vspdc1016::_sequent__TOP__9(Vspdc1016__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_sequent__TOP__9\n"); );
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->spdc1016__DOT__cpu__DOT__state = vlTOPp->__Vdly__spdc1016__DOT__cpu__DOT__state;
    vlTOPp->spdc1016__DOT__cpu__DOT__PC_inc = (1U & 
                                               ((0x20U 
                                                 & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                 ? (IData)(
                                                           (9U 
                                                            == 
                                                            (0x1bU 
                                                             & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? (IData)(
                                                             (1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))))
                                                   : (IData)(
                                                             (7U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((~ 
                                                     ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                      >> 1U)) 
                                                    & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                       | (~ 
                                                          (((~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__I)) 
                                                            & (0U 
                                                               != (IData)(vlTOPp->spdc1016__DOT__hub__DOT__irqcnter))) 
                                                           | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__NMI_edge)))))
                                                    : 
                                                   (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                     >> 1U) 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                     | (~ 
                                                        ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CO) 
                                                         ^ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__backwards))))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    : 
                                                   (~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)))))));
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__store) 
                             << 6U) | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state));
    vlTOPp->spdc1016__DOT__we = vlTOPp->__Vtable1_spdc1016__DOT__we
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__plp) 
                             << 7U) | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__load_reg) 
                                        << 6U) | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)));
    vlTOPp->spdc1016__DOT__cpu__DOT__write_register 
        = vlTOPp->__Vtable2_spdc1016__DOT__cpu__DOT__write_register
        [vlTOPp->__Vtableidx2];
    vlTOPp->spdc1016__DOT__cpu__DOT__PC_temp = ((0x20U 
                                                 & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                  ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))
                                                   : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                       << 8U) 
                                                      | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                      : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                      : 
                                                     ((((~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__I)) 
                                                        & (0U 
                                                           != (IData)(vlTOPp->spdc1016__DOT__hub__DOT__irqcnter))) 
                                                       | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__NMI_edge))
                                                       ? 
                                                      (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABH) 
                                                        << 8U) 
                                                       | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABL))
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                      : 
                                                     ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__res)
                                                       ? 0xfffcU
                                                       : 
                                                      ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__NMI_edge)
                                                        ? 0xfffaU
                                                        : 0xfffeU)))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                                                       << 8U) 
                                                      | (0xffU 
                                                         & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))
                                                      : 
                                                     (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABH) 
                                                       << 8U) 
                                                      | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))));
    vlTOPp->spdc1016__DOT__cpu__DOT____Vcellinp__ALU__BCD 
        = ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__adc_bcd) 
           & (0xdU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)));
    vlTOPp->spdc1016__DOT__cpu__DOT__alu_shift_right 
        = ((((0xdU == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
             | (0x24U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
            | (0x23U == (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) 
           & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__shift_right));
    if ((0x20U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__cpu__DOT__CI = (1U & 
                                               ((~ 
                                                 ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                  >> 4U)) 
                                                & ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? (IData)(
                                                              (2U 
                                                               == 
                                                               (6U 
                                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                      >> 1U) 
                                                     | ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                        | ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__rotate)
                                                            ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__C)
                                                            : 
                                                           ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__shift)
                                                             ? 0U
                                                             : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__inc)))))
                                                     : 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                      >> 1U) 
                                                     & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                        & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__rotate)
                                                            ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__C)
                                                            : 
                                                           ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__shift)
                                                             ? 0U
                                                             : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__inc)))))))));
        vlTOPp->spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                               & ((0x10U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 0U
                                                      : (IData)(vlTOPp->spdc1016__DOT__cpu_di)))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu_di)))))));
    } else {
        vlTOPp->spdc1016__DOT__cpu__DOT__CI = (1U & 
                                               ((0x10U 
                                                 & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                 ? 
                                                ((8U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                  ? (IData)(
                                                            (6U 
                                                             == 
                                                             (7U 
                                                              & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((~ 
                                                    ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                     >> 1U)) 
                                                   & ((~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CO)))
                                                   : (IData)(
                                                             (2U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))))))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                  ? 
                                                 (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                   >> 2U) 
                                                  & ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)
                                                      : 
                                                     ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                      & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__rotate)
                                                          ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__C)
                                                          : 
                                                         ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__compare)
                                                           ? 1U
                                                           : 
                                                          (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__shift) 
                                                            | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__load_only))
                                                            ? 0U
                                                            : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__C)))))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                    >> 1U) 
                                                   & ((~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)) 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CO)))
                                                   : 
                                                  (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                    >> 1U) 
                                                   & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state) 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CO)))))));
        vlTOPp->spdc1016__DOT__cpu__DOT__BI = (0xffU 
                                               & ((0x10U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 0U
                                                      : (IData)(vlTOPp->spdc1016__DOT__cpu_di)))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu_di))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu_di))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                       : 0U)
                                                      : 0U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                       : 0U)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu_di)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu_di)))))));
    }
    vlTOPp->__Vtableidx4 = (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__backwards) 
                             << 0xaU) | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__op) 
                                          << 6U) | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state)));
    vlTOPp->spdc1016__DOT__cpu__DOT__alu_op = vlTOPp->__Vtable4_spdc1016__DOT__cpu__DOT__alu_op
        [vlTOPp->__Vtableidx4];
    vlTOPp->__Vtableidx3 = (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__dst_reg) 
                             << 9U) | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__index_y) 
                                        << 8U) | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__src_reg) 
                                                   << 6U) 
                                                  | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))));
    vlTOPp->spdc1016__DOT__cpu__DOT__regsel = vlTOPp->__Vtable3_spdc1016__DOT__cpu__DOT__regsel
        [vlTOPp->__Vtableidx3];
    vlTOPp->spdc1016__DOT__cpu__DOT__regfile = vlTOPp->spdc1016__DOT__cpu__DOT__AXYS
        [vlTOPp->spdc1016__DOT__cpu__DOT__regsel];
    if ((0x20U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))) {
        vlTOPp->spdc1016__DOT__addr = ((0x10U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                        ? ((8U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                            ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                            : ((4U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))))
                                        : ((8U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                            ? ((4U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                     : 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABH) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABL)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                     : 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)))))
                                            : ((4U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   (0x100U 
                                                    | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                     : 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABH) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABL))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABH) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABL))
                                                     : 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))));
        vlTOPp->spdc1016__DOT__cpu_do = (0xffU & ((0x10U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                      : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                       : 
                                                      ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__php)
                                                        ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__P)
                                                        : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)))
                                                      : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))))));
        vlTOPp->spdc1016__DOT__cpu__DOT__AI = (0xffU 
                                               & ((0x10U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                      : 0U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                      : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                       : 0U))))));
    } else {
        vlTOPp->spdc1016__DOT__addr = ((0x10U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                        ? ((8U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                            ? ((4U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))))
                                            : ((4U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABL))
                                                     : 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu_di))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)))))
                                        : ((8U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                            ? ((4U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                     : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC))
                                                : (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                     : 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                     : 
                                                    (0x100U 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)))))
                                            : ((4U 
                                                & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABL))
                                                     : 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABH) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                     : 
                                                    (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD) 
                                                      << 8U) 
                                                     | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABL))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   (((IData)(vlTOPp->spdc1016__DOT__cpu_di) 
                                                     << 8U) 
                                                    | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)))));
        vlTOPp->spdc1016__DOT__cpu_do = (0xffU & ((0x10U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                       : 
                                                      ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC) 
                                                       >> 8U))
                                                      : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                       : 
                                                      (((0U 
                                                         != (IData)(vlTOPp->spdc1016__DOT__hub__DOT__irqcnter)) 
                                                        | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__NMI_edge))
                                                        ? 
                                                       (0xefU 
                                                        & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__P))
                                                        : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__P)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC)
                                                       : 
                                                      ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__PC) 
                                                       >> 8U))))
                                                    : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))));
        vlTOPp->spdc1016__DOT__cpu__DOT__AI = (0xffU 
                                               & ((0x10U 
                                                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 0U
                                                      : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                      : 0U))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile)
                                                       : 0U)
                                                      : 0U)))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 
                                                      ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__load_only)
                                                        ? 0U
                                                        : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ADD)
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ABH))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? (IData)(vlTOPp->spdc1016__DOT__cpu_di)
                                                       : 0U))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__state))
                                                       ? 0U
                                                       : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__regfile))
                                                      : 0U)))));
    }
    vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic 
        = ((2U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_op))
            ? ((1U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_op))
                ? (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__AI)
                : ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__AI) 
                   ^ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__BI)))
            : ((1U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_op))
                ? ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__AI) 
                   & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__BI))
                : ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__AI) 
                   | (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__BI))));
    if (vlTOPp->spdc1016__DOT__cpu__DOT__alu_shift_right) {
        vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic 
            = ((0x100U & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__AI) 
                          << 8U)) | (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CI) 
                                      << 7U) | (0x7fU 
                                                & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__AI) 
                                                   >> 1U))));
    }
    vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI 
        = (0xffU & ((8U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_op))
                     ? ((4U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_op))
                         ? 0U : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic))
                     : ((4U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_op))
                         ? (~ (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__BI))
                         : (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__BI))));
    vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l 
        = (0x1fU & (((0xfU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic)) 
                     + (0xfU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI))) 
                    + (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_shift_right) 
                        | (3U == (3U & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__alu_op) 
                                        >> 2U)))) ? 0U
                        : (1U & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__CI)))));
    vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_HC 
        = (1U & (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l) 
                  >> 4U) | ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT____Vcellinp__ALU__BCD) 
                            & (5U <= (7U & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l) 
                                            >> 1U))))));
    vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_h 
        = (0x1fU & ((((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_logic) 
                      >> 4U) + (0xfU & ((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_BI) 
                                        >> 4U))) + (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_HC)));
    vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp 
        = (((IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_h) 
            << 4U) | (0xfU & (IData)(vlTOPp->spdc1016__DOT__cpu__DOT__ALU__DOT__temp_l)));
}

void Vspdc1016::_eval(Vspdc1016__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_eval\n"); );
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk4x) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk4x))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if (((IData)(vlTOPp->clk4x) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk4x)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlTOPp->spdc1016__DOT__clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__spdc1016__DOT__clk)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if ((((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))) 
         | ((IData)(vlTOPp->spdc1016__DOT__clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__spdc1016__DOT__clk))))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk4x) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk4x))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if (((IData)(vlTOPp->spdc1016__DOT__clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__spdc1016__DOT__clk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    if ((((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))) 
         | ((IData)(vlTOPp->spdc1016__DOT__clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__spdc1016__DOT__clk))))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk4x = vlTOPp->clk4x;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP__spdc1016__DOT__clk = vlTOPp->spdc1016__DOT__clk;
}

VL_INLINE_OPT QData Vspdc1016::_change_request(Vspdc1016__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_change_request\n"); );
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vspdc1016::_change_request_1(Vspdc1016__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_change_request_1\n"); );
    Vspdc1016* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vspdc1016::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk4x & 0xfeU))) {
        Verilated::overWidthError("clk4x");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
