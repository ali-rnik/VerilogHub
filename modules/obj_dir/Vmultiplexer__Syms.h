// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vmultiplexer__Syms_H_
#define _Vmultiplexer__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vmultiplexer.h"

// SYMS CLASS
class Vmultiplexer__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vmultiplexer*                  TOPp;
    
    // CREATORS
    Vmultiplexer__Syms(Vmultiplexer* topp, const char* namep);
    ~Vmultiplexer__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif  // guard
