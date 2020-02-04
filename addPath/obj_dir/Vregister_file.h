// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vregister_file_H_
#define _Vregister_file_H_

#include "verilated.h"

class Vregister_file__Syms;

//----------

VL_MODULE(Vregister_file) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(register_file__02Eclk,0,0);
    VL_IN8(ram__02Eclk,0,0);
    VL_IN8(readAdr1,5,0);
    VL_IN8(readAdr2,5,0);
    VL_IN8(writeAdr,5,0);
    VL_IN8(writeEnable,0,0);
    VL_IN8(writeEn,0,0);
    VL_IN16(adr,13,0);
    VL_IN64(register_file__02EwriteData,63,0);
    VL_OUT64(readData1,63,0);
    VL_OUT64(readData2,63,0);
    VL_IN64(ram__02EwriteData,63,0);
    VL_OUT64(readData,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    QData/*63:0*/ register_file__DOT__register[64];
    QData/*63:0*/ ram__DOT__mem[10485];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__ram__02Eclk;
    CData/*0:0*/ __Vclklast__TOP__register_file__02Eclk;
    QData/*63:0*/ ram__DOT____Vlvbound1;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vregister_file__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vregister_file);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vregister_file(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vregister_file();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vregister_file__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vregister_file__Syms* symsp, bool first);
  private:
    static QData _change_request(Vregister_file__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vregister_file__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vregister_file__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(Vregister_file__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vregister_file__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(Vregister_file__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(Vregister_file__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vregister_file__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
