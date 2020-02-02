// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VaddPath__Syms_H_
#define _VaddPath__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VaddPath.h"

// SYMS CLASS
class VaddPath__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VaddPath*                      TOPp;
    
    // CREATORS
    VaddPath__Syms(VaddPath* topp, const char* namep);
    ~VaddPath__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
