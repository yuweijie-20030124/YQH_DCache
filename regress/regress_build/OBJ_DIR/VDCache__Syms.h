// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDCACHE__SYMS_H_
#define VERILATED_VDCACHE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VDCache.h"

// INCLUDE MODULE CLASSES
#include "VDCache___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VDCache__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VDCache* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VDCache___024root              TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_DCache;
    VerilatedScope __Vscope_DCache__data;
    VerilatedScope __Vscope_DCache__loads_0;
    VerilatedScope __Vscope_DCache__loads_1;
    VerilatedScope __Vscope_DCache__meta;
    VerilatedScope __Vscope_DCache__miss;
    VerilatedScope __Vscope_DCache__pipe;
    VerilatedScope __Vscope_DCache__probe;
    VerilatedScope __Vscope_DCache__tags__arrays_0;
    VerilatedScope __Vscope_DCache__tags__arrays_1;
    VerilatedScope __Vscope_DCache__tags__arrays_2;
    VerilatedScope __Vscope_DCache__wb;

    // CONSTRUCTORS
    VDCache__Syms(VerilatedContext* contextp, const char* namep, VDCache* modelp);
    ~VDCache__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
