// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSPDC1016__SYMS_H_
#define VERILATED_VSPDC1016__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vspdc1016.h"

// INCLUDE MODULE CLASSES
#include "Vspdc1016___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vspdc1016__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vspdc1016* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vspdc1016___024root            TOP;

    // CONSTRUCTORS
    Vspdc1016__Syms(VerilatedContext* contextp, const char* namep, Vspdc1016* modelp);
    ~Vspdc1016__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
