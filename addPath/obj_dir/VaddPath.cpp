// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VaddPath.h for the primary calling header

#include "VaddPath.h"
#include "VaddPath__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VaddPath) {
    VaddPath__Syms* __restrict vlSymsp = __VlSymsp = new VaddPath__Syms(this, name());
    VaddPath* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VaddPath::__Vconfigure(VaddPath__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VaddPath::~VaddPath() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VaddPath::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VaddPath::eval\n"); );
    VaddPath__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VaddPath* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("addPath.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VaddPath::_eval_initial_loop(VaddPath__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("addPath.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

void VaddPath::_initial__TOP__1(VaddPath__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPath::_initial__TOP__1\n"); );
    VaddPath* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->addPath__DOT__REG_FILE__DOT__register[0U] = VL_ULL(0);
    vlTOPp->addPath__DOT__REG_FILE__DOT__register[1U] = VL_ULL(3);
    vlTOPp->addPath__DOT__REG_FILE__DOT__register[2U] = VL_ULL(5);
    vlTOPp->addPath__DOT__INST_MEM__DOT__mem[0U] = 
        (VL_ULL(0xffffffffffffffc0) & vlTOPp->addPath__DOT__INST_MEM__DOT__mem
         [0U]);
    vlTOPp->addPath__DOT__INST_MEM__DOT__mem[0U] = 
        (VL_ULL(0xfffffffffffff03f) & vlTOPp->addPath__DOT__INST_MEM__DOT__mem
         [0U]);
    vlTOPp->addPath__DOT__INST_MEM__DOT__mem[0U] = 
        (VL_ULL(0x1000) | (VL_ULL(0xfffffffffffc0fff) 
                           & vlTOPp->addPath__DOT__INST_MEM__DOT__mem
                           [0U]));
    vlTOPp->addPath__DOT__INST_MEM__DOT__mem[0U] = 
        (VL_ULL(0x80000) | (VL_ULL(0xfffffffffe03ffff) 
                            & vlTOPp->addPath__DOT__INST_MEM__DOT__mem
                            [0U]));
    vlTOPp->addPath__DOT__INST_MEM__DOT__mem[1U] = 
        (VL_ULL(0xffffffffffffffc0) & vlTOPp->addPath__DOT__INST_MEM__DOT__mem
         [1U]);
    vlTOPp->addPath__DOT__INST_MEM__DOT__mem[1U] = 
        (VL_ULL(0x40) | (VL_ULL(0xfffffffffffff03f) 
                         & vlTOPp->addPath__DOT__INST_MEM__DOT__mem
                         [1U]));
    vlTOPp->addPath__DOT__INST_MEM__DOT__mem[1U] = 
        (VL_ULL(0x2000) | (VL_ULL(0xfffffffffffc0fff) 
                           & vlTOPp->addPath__DOT__INST_MEM__DOT__mem
                           [1U]));
    vlTOPp->addPath__DOT__INST_MEM__DOT__mem[1U] = 
        (VL_ULL(0xfffffffffe03ffff) & vlTOPp->addPath__DOT__INST_MEM__DOT__mem
         [1U]);
    vlTOPp->pc = 0U;
}

VL_INLINE_OPT void VaddPath::_sequent__TOP__2(VaddPath__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPath::_sequent__TOP__2\n"); );
    VaddPath* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdlyvdim0__addPath__DOT__REG_FILE__DOT__register__v0;
    QData/*63:0*/ __Vdlyvval__addPath__DOT__REG_FILE__DOT__register__v0;
    // Body
    vlTOPp->pc = (0xffffU & ((IData)(4U) + (IData)(vlTOPp->pc)));
    __Vdlyvval__addPath__DOT__REG_FILE__DOT__register__v0 
        = vlTOPp->addPath__DOT__rdData;
    __Vdlyvdim0__addPath__DOT__REG_FILE__DOT__register__v0 
        = (0x3fU & (IData)((vlTOPp->addPath__DOT__instruct 
                            >> 6U)));
    vlTOPp->addPath__DOT__REG_FILE__DOT__register[__Vdlyvdim0__addPath__DOT__REG_FILE__DOT__register__v0] 
        = __Vdlyvval__addPath__DOT__REG_FILE__DOT__register__v0;
    vlTOPp->addPath__DOT__instruct = ((0x28f4U >= (0x3fffU 
                                                   & (IData)(vlTOPp->pc)))
                                       ? vlTOPp->addPath__DOT__INST_MEM__DOT__mem
                                      [(0x3fffU & (IData)(vlTOPp->pc))]
                                       : VL_ULL(0));
    vlTOPp->op_s = (7U & (IData)(vlTOPp->addPath__DOT__instruct));
    vlTOPp->instruct_s = vlTOPp->addPath__DOT__instruct;
    vlTOPp->rd_s = (0x3fU & (IData)((vlTOPp->addPath__DOT__instruct 
                                     >> 6U)));
    vlTOPp->rs1_s = (0x3fU & (IData)((vlTOPp->addPath__DOT__instruct 
                                      >> 0xcU)));
    vlTOPp->rs2_s = (0x3fU & (IData)((vlTOPp->addPath__DOT__instruct 
                                      >> 0x12U)));
    vlTOPp->addPath__DOT__rs1Data = vlTOPp->addPath__DOT__REG_FILE__DOT__register
        [(0x3fU & (IData)((vlTOPp->addPath__DOT__instruct 
                           >> 0xcU)))];
    vlTOPp->addPath__DOT__rs2Data = vlTOPp->addPath__DOT__REG_FILE__DOT__register
        [(0x3fU & (IData)((vlTOPp->addPath__DOT__instruct 
                           >> 0x12U)))];
    vlTOPp->rs1Data_s = vlTOPp->addPath__DOT__rs1Data;
    vlTOPp->rs2Data_s = vlTOPp->addPath__DOT__rs2Data;
    vlTOPp->addPath__DOT__rdData = ((1U & (IData)((vlTOPp->addPath__DOT__instruct 
                                                   >> 2U)))
                                     ? ((1U & (IData)(
                                                      (vlTOPp->addPath__DOT__instruct 
                                                       >> 1U)))
                                         ? (vlTOPp->addPath__DOT__rs1Data 
                                            + vlTOPp->addPath__DOT__rs2Data)
                                         : ((1U & (IData)(vlTOPp->addPath__DOT__instruct))
                                             ? (vlTOPp->addPath__DOT__rs1Data 
                                                >> 1U)
                                             : (vlTOPp->addPath__DOT__rs1Data 
                                                << 1U)))
                                     : ((1U & (IData)(
                                                      (vlTOPp->addPath__DOT__instruct 
                                                       >> 1U)))
                                         ? ((1U & (IData)(vlTOPp->addPath__DOT__instruct))
                                             ? (vlTOPp->addPath__DOT__rs1Data 
                                                | vlTOPp->addPath__DOT__rs2Data)
                                             : (vlTOPp->addPath__DOT__rs1Data 
                                                & vlTOPp->addPath__DOT__rs2Data))
                                         : ((1U & (IData)(vlTOPp->addPath__DOT__instruct))
                                             ? (vlTOPp->addPath__DOT__rs1Data 
                                                - vlTOPp->addPath__DOT__rs2Data)
                                             : (vlTOPp->addPath__DOT__rs1Data 
                                                + vlTOPp->addPath__DOT__rs2Data))));
    vlTOPp->rdData_s = vlTOPp->addPath__DOT__rdData;
}

void VaddPath::_settle__TOP__3(VaddPath__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPath::_settle__TOP__3\n"); );
    VaddPath* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->addPath__DOT__instruct = ((0x28f4U >= (0x3fffU 
                                                   & (IData)(vlTOPp->pc)))
                                       ? vlTOPp->addPath__DOT__INST_MEM__DOT__mem
                                      [(0x3fffU & (IData)(vlTOPp->pc))]
                                       : VL_ULL(0));
    vlTOPp->op_s = (7U & (IData)(vlTOPp->addPath__DOT__instruct));
    vlTOPp->instruct_s = vlTOPp->addPath__DOT__instruct;
    vlTOPp->rd_s = (0x3fU & (IData)((vlTOPp->addPath__DOT__instruct 
                                     >> 6U)));
    vlTOPp->rs1_s = (0x3fU & (IData)((vlTOPp->addPath__DOT__instruct 
                                      >> 0xcU)));
    vlTOPp->rs2_s = (0x3fU & (IData)((vlTOPp->addPath__DOT__instruct 
                                      >> 0x12U)));
    vlTOPp->addPath__DOT__rs1Data = vlTOPp->addPath__DOT__REG_FILE__DOT__register
        [(0x3fU & (IData)((vlTOPp->addPath__DOT__instruct 
                           >> 0xcU)))];
    vlTOPp->addPath__DOT__rs2Data = vlTOPp->addPath__DOT__REG_FILE__DOT__register
        [(0x3fU & (IData)((vlTOPp->addPath__DOT__instruct 
                           >> 0x12U)))];
    vlTOPp->rs1Data_s = vlTOPp->addPath__DOT__rs1Data;
    vlTOPp->rs2Data_s = vlTOPp->addPath__DOT__rs2Data;
    vlTOPp->addPath__DOT__rdData = ((1U & (IData)((vlTOPp->addPath__DOT__instruct 
                                                   >> 2U)))
                                     ? ((1U & (IData)(
                                                      (vlTOPp->addPath__DOT__instruct 
                                                       >> 1U)))
                                         ? (vlTOPp->addPath__DOT__rs1Data 
                                            + vlTOPp->addPath__DOT__rs2Data)
                                         : ((1U & (IData)(vlTOPp->addPath__DOT__instruct))
                                             ? (vlTOPp->addPath__DOT__rs1Data 
                                                >> 1U)
                                             : (vlTOPp->addPath__DOT__rs1Data 
                                                << 1U)))
                                     : ((1U & (IData)(
                                                      (vlTOPp->addPath__DOT__instruct 
                                                       >> 1U)))
                                         ? ((1U & (IData)(vlTOPp->addPath__DOT__instruct))
                                             ? (vlTOPp->addPath__DOT__rs1Data 
                                                | vlTOPp->addPath__DOT__rs2Data)
                                             : (vlTOPp->addPath__DOT__rs1Data 
                                                & vlTOPp->addPath__DOT__rs2Data))
                                         : ((1U & (IData)(vlTOPp->addPath__DOT__instruct))
                                             ? (vlTOPp->addPath__DOT__rs1Data 
                                                - vlTOPp->addPath__DOT__rs2Data)
                                             : (vlTOPp->addPath__DOT__rs1Data 
                                                + vlTOPp->addPath__DOT__rs2Data))));
    vlTOPp->rdData_s = vlTOPp->addPath__DOT__rdData;
}

void VaddPath::_eval(VaddPath__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPath::_eval\n"); );
    VaddPath* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VaddPath::_eval_initial(VaddPath__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPath::_eval_initial\n"); );
    VaddPath* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VaddPath::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPath::final\n"); );
    // Variables
    VaddPath__Syms* __restrict vlSymsp = this->__VlSymsp;
    VaddPath* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VaddPath::_eval_settle(VaddPath__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPath::_eval_settle\n"); );
    VaddPath* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

VL_INLINE_OPT QData VaddPath::_change_request(VaddPath__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPath::_change_request\n"); );
    VaddPath* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VaddPath::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPath::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif // VL_DEBUG

void VaddPath::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPath::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    pc = VL_RAND_RESET_I(16);
    op_s = VL_RAND_RESET_I(3);
    instruct_s = VL_RAND_RESET_Q(64);
    rdData_s = VL_RAND_RESET_Q(64);
    rs1Data_s = VL_RAND_RESET_Q(64);
    rs2Data_s = VL_RAND_RESET_Q(64);
    rd_s = VL_RAND_RESET_I(6);
    rs1_s = VL_RAND_RESET_I(6);
    rs2_s = VL_RAND_RESET_I(6);
    addPath__DOT__instruct = VL_RAND_RESET_Q(64);
    addPath__DOT__rdData = VL_RAND_RESET_Q(64);
    addPath__DOT__rs1Data = VL_RAND_RESET_Q(64);
    addPath__DOT__rs2Data = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<10485; ++__Vi0) {
            addPath__DOT__INST_MEM__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            addPath__DOT__REG_FILE__DOT__register[__Vi0] = VL_RAND_RESET_Q(64);
    }}
}
