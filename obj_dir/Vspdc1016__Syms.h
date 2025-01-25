// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSPDC1016__SYMS_H_
#define VERILATED_VSPDC1016__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vspdc1016.h"

// SYMS CLASS
class Vspdc1016__Syms : public VerilatedSyms {
  public:

    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;

    // SUBCELL STATE
    Vspdc1016*                     TOPp;

    // CREATORS
    Vspdc1016__Syms(VerilatedContext* contextp, Vspdc1016* topp, const char* namep);
    ~Vspdc1016__Syms();

    // METHODS
    inline const char* name() { return __Vm_namep; }

} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
