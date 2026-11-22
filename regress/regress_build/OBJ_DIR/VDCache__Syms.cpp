// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VDCache__Syms.h"
#include "VDCache.h"
#include "VDCache___024root.h"

// FUNCTIONS
VDCache__Syms::~VDCache__Syms()
{
}

VDCache__Syms::VDCache__Syms(VerilatedContext* contextp, const char* namep, VDCache* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-6);
    _vm_contextp__->timeprecision(-6);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_DCache.configure(this, name(), "DCache", "DCache", -6, VerilatedScope::SCOPE_OTHER);
    __Vscope_DCache__data.configure(this, name(), "DCache.data", "data", -6, VerilatedScope::SCOPE_OTHER);
    __Vscope_DCache__loads_0.configure(this, name(), "DCache.loads_0", "loads_0", -6, VerilatedScope::SCOPE_OTHER);
    __Vscope_DCache__loads_1.configure(this, name(), "DCache.loads_1", "loads_1", -6, VerilatedScope::SCOPE_OTHER);
    __Vscope_DCache__meta.configure(this, name(), "DCache.meta", "meta", -6, VerilatedScope::SCOPE_OTHER);
    __Vscope_DCache__miss.configure(this, name(), "DCache.miss", "miss", -6, VerilatedScope::SCOPE_OTHER);
    __Vscope_DCache__pipe.configure(this, name(), "DCache.pipe", "pipe", -6, VerilatedScope::SCOPE_OTHER);
    __Vscope_DCache__probe.configure(this, name(), "DCache.probe", "probe", -6, VerilatedScope::SCOPE_OTHER);
    __Vscope_DCache__tags__arrays_0.configure(this, name(), "DCache.tags.arrays_0", "arrays_0", -6, VerilatedScope::SCOPE_OTHER);
    __Vscope_DCache__tags__arrays_1.configure(this, name(), "DCache.tags.arrays_1", "arrays_1", -6, VerilatedScope::SCOPE_OTHER);
    __Vscope_DCache__tags__arrays_2.configure(this, name(), "DCache.tags.arrays_2", "arrays_2", -6, VerilatedScope::SCOPE_OTHER);
    __Vscope_DCache__wb.configure(this, name(), "DCache.wb", "wb", -6, VerilatedScope::SCOPE_OTHER);
}
