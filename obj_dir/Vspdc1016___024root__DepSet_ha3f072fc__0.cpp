// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspdc1016.h for the primary calling header

#include "Vspdc1016__pch.h"
#include "Vspdc1016__Syms.h"
#include "Vspdc1016___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspdc1016___024root___dump_triggers__act(Vspdc1016___024root* vlSelf);
#endif  // VL_DEBUG

void Vspdc1016___024root___eval_triggers__act(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk4x) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk4x__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.spdc1016__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__spdc1016__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.reset) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk4x__0 = vlSelfRef.clk4x;
    vlSelfRef.__Vtrigprevexpr___TOP__spdc1016__DOT__clk__0 
        = vlSelfRef.spdc1016__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspdc1016___024root___dump_triggers__act(vlSelf);
    }
#endif
}
