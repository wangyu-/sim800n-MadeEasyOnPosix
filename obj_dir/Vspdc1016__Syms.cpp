// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vspdc1016__Syms.h"
#include "Vspdc1016.h"



// FUNCTIONS
Vspdc1016__Syms::~Vspdc1016__Syms()
{
}

Vspdc1016__Syms::Vspdc1016__Syms(VerilatedContext* contextp, Vspdc1016* topp, const char* namep)
    // Setup locals
    : VerilatedSyms{contextp}
    , __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
