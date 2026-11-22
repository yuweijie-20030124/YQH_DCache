// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDCache.h for the primary calling header

#include "verilated.h"

#include "VDCache__Syms.h"
#include "VDCache__Syms.h"
#include "VDCache___024root.h"

void VDCache___024root___ctor_var_reset(VDCache___024root* vlSelf);

VDCache___024root::VDCache___024root(VDCache__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VDCache___024root___ctor_var_reset(this);
}

void VDCache___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VDCache___024root::~VDCache___024root() {
}
