// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VaddPath_H_
#define _VaddPath_H_

#include "verilated.h"

class VaddPath__Syms;

//----------

VL_MODULE(VaddPath) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_OUT8(op_s,2,0);
    VL_OUT8(rd_s,5,0);
    VL_OUT8(rs1_s,5,0);
    VL_OUT8(rs2_s,5,0);
    VL_OUT16(pc_s,13,0);
    VL_OUT64(instruct_s,63,0);
    VL_OUT64(rdData_s,63,0);
    VL_OUT64(rs1Data_s,63,0);
    VL_OUT64(rs2Data_s,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    SData/*13:0*/ addPath__DOT__pc;
    QData/*63:0*/ addPath__DOT__instruct;
    QData/*63:0*/ addPath__DOT__rdData;
    QData/*63:0*/ addPath__DOT__rs1Data;
    QData/*63:0*/ addPath__DOT__rs2Data;
    QData/*63:0*/ addPath__DOT__INST_MEM__DOT__mem[10485];
    QData/*63:0*/ addPath__DOT__REG_FILE__DOT__register[64];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VaddPath__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VaddPath);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VaddPath(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VaddPath();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VaddPath__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VaddPath__Syms* symsp, bool first);
  private:
    static QData _change_request(VaddPath__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VaddPath__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(VaddPath__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VaddPath__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VaddPath__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VaddPath__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VaddPath__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(128);

#endif // guard
