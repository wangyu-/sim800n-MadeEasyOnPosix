// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vspdc1016__pch.h"
#include "Vspdc1016.h"
#include "Vspdc1016___024root.h"

// FUNCTIONS
Vspdc1016__Syms::~Vspdc1016__Syms()
{
}

Vspdc1016__Syms::Vspdc1016__Syms(VerilatedContext* contextp, const char* namep, Vspdc1016* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(166);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
