// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspdc1016.h for the primary calling header

#include "Vspdc1016__pch.h"
#include "Vspdc1016__Syms.h"
#include "Vspdc1016___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vspdc1016___024root___dump_triggers__stl(Vspdc1016___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vspdc1016___024root___eval_triggers__stl(Vspdc1016___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vspdc1016__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vspdc1016___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vspdc1016___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
