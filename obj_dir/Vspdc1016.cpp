// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vspdc1016__pch.h"

//============================================================
// Constructors

Vspdc1016::Vspdc1016(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vspdc1016__Syms(contextp(), _vcname__, this)}
    , clk4x{vlSymsp->TOP.clk4x}
    , reset{vlSymsp->TOP.reset}
    , lcd_CP{vlSymsp->TOP.lcd_CP}
    , lcd_DO{vlSymsp->TOP.lcd_DO}
    , lcd_FP{vlSymsp->TOP.lcd_FP}
    , lcd_LP{vlSymsp->TOP.lcd_LP}
    , lcd_FM{vlSymsp->TOP.lcd_FM}
    , lcd_CKV{vlSymsp->TOP.lcd_CKV}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vspdc1016::Vspdc1016(const char* _vcname__)
    : Vspdc1016(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vspdc1016::~Vspdc1016() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vspdc1016___024root___eval_debug_assertions(Vspdc1016___024root* vlSelf);
#endif  // VL_DEBUG
void Vspdc1016___024root___eval_static(Vspdc1016___024root* vlSelf);
void Vspdc1016___024root___eval_initial(Vspdc1016___024root* vlSelf);
void Vspdc1016___024root___eval_settle(Vspdc1016___024root* vlSelf);
void Vspdc1016___024root___eval(Vspdc1016___024root* vlSelf);

void Vspdc1016::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vspdc1016::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vspdc1016___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vspdc1016___024root___eval_static(&(vlSymsp->TOP));
        Vspdc1016___024root___eval_initial(&(vlSymsp->TOP));
        Vspdc1016___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vspdc1016___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vspdc1016::eventsPending() { return false; }

uint64_t Vspdc1016::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vspdc1016::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vspdc1016___024root___eval_final(Vspdc1016___024root* vlSelf);

VL_ATTR_COLD void Vspdc1016::final() {
    Vspdc1016___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vspdc1016::hierName() const { return vlSymsp->name(); }
const char* Vspdc1016::modelName() const { return "Vspdc1016"; }
unsigned Vspdc1016::threads() const { return 1; }
void Vspdc1016::prepareClone() const { contextp()->prepareClone(); }
void Vspdc1016::atClone() const {
    contextp()->threadPoolpOnClone();
}
