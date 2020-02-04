// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file.h for the primary calling header

#include "Vregister_file.h"
#include "Vregister_file__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vregister_file) {
    Vregister_file__Syms* __restrict vlSymsp = __VlSymsp = new Vregister_file__Syms(this, name());
    Vregister_file* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vregister_file::__Vconfigure(Vregister_file__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vregister_file::~Vregister_file() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vregister_file::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vregister_file::eval\n"); );
    Vregister_file__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vregister_file* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("register_file.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vregister_file::_eval_initial_loop(Vregister_file__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("register_file.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vregister_file::_sequent__TOP__1(Vregister_file__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file::_sequent__TOP__1\n"); );
    Vregister_file* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v0;
    SData/*13:0*/ __Vdlyvdim0__ram__DOT__mem__v0;
    QData/*63:0*/ __Vdlyvval__ram__DOT__mem__v0;
    // Body
    __Vdlyvset__ram__DOT__mem__v0 = 0U;
    if (vlTOPp->writeEn) {
        vlTOPp->ram__DOT____Vlvbound1 = vlTOPp->ram__02EwriteData;
        if ((0x28f4U >= (IData)(vlTOPp->adr))) {
            __Vdlyvval__ram__DOT__mem__v0 = vlTOPp->ram__DOT____Vlvbound1;
            __Vdlyvset__ram__DOT__mem__v0 = 1U;
            __Vdlyvdim0__ram__DOT__mem__v0 = vlTOPp->adr;
        }
    }
    if (__Vdlyvset__ram__DOT__mem__v0) {
        vlTOPp->ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v0] 
            = __Vdlyvval__ram__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vregister_file::_sequent__TOP__2(Vregister_file__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file::_sequent__TOP__2\n"); );
    Vregister_file* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdlyvdim0__register_file__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__register_file__DOT__register__v0;
    QData/*63:0*/ __Vdlyvval__register_file__DOT__register__v0;
    // Body
    __Vdlyvset__register_file__DOT__register__v0 = 0U;
    if (vlTOPp->writeEnable) {
        __Vdlyvval__register_file__DOT__register__v0 
            = vlTOPp->register_file__02EwriteData;
        __Vdlyvset__register_file__DOT__register__v0 = 1U;
        __Vdlyvdim0__register_file__DOT__register__v0 
            = vlTOPp->writeAdr;
    }
    if (__Vdlyvset__register_file__DOT__register__v0) {
        vlTOPp->register_file__DOT__register[__Vdlyvdim0__register_file__DOT__register__v0] 
            = __Vdlyvval__register_file__DOT__register__v0;
    }
}

void Vregister_file::_settle__TOP__3(Vregister_file__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file::_settle__TOP__3\n"); );
    Vregister_file* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->readData1 = vlTOPp->register_file__DOT__register
        [vlTOPp->readAdr1];
    vlTOPp->readData2 = vlTOPp->register_file__DOT__register
        [vlTOPp->readAdr2];
    vlTOPp->readData = ((0x28f4U >= (IData)(vlTOPp->adr))
                         ? vlTOPp->ram__DOT__mem[vlTOPp->adr]
                         : VL_ULL(0));
}

VL_INLINE_OPT void Vregister_file::_combo__TOP__4(Vregister_file__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file::_combo__TOP__4\n"); );
    Vregister_file* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->readData = ((0x28f4U >= (IData)(vlTOPp->adr))
                         ? vlTOPp->ram__DOT__mem[vlTOPp->adr]
                         : VL_ULL(0));
    vlTOPp->readData1 = vlTOPp->register_file__DOT__register
        [vlTOPp->readAdr1];
    vlTOPp->readData2 = vlTOPp->register_file__DOT__register
        [vlTOPp->readAdr2];
}

void Vregister_file::_eval(Vregister_file__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file::_eval\n"); );
    Vregister_file* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->ram__02Eclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__ram__02Eclk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if (((IData)(vlTOPp->register_file__02Eclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__register_file__02Eclk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__ram__02Eclk = vlTOPp->ram__02Eclk;
    vlTOPp->__Vclklast__TOP__register_file__02Eclk 
        = vlTOPp->register_file__02Eclk;
}

void Vregister_file::_eval_initial(Vregister_file__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file::_eval_initial\n"); );
    Vregister_file* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__ram__02Eclk = vlTOPp->ram__02Eclk;
    vlTOPp->__Vclklast__TOP__register_file__02Eclk 
        = vlTOPp->register_file__02Eclk;
}

void Vregister_file::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file::final\n"); );
    // Variables
    Vregister_file__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vregister_file* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vregister_file::_eval_settle(Vregister_file__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file::_eval_settle\n"); );
    Vregister_file* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

VL_INLINE_OPT QData Vregister_file::_change_request(Vregister_file__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file::_change_request\n"); );
    Vregister_file* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vregister_file::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((readAdr1 & 0xc0U))) {
        Verilated::overWidthError("readAdr1");}
    if (VL_UNLIKELY((readAdr2 & 0xc0U))) {
        Verilated::overWidthError("readAdr2");}
    if (VL_UNLIKELY((writeAdr & 0xc0U))) {
        Verilated::overWidthError("writeAdr");}
    if (VL_UNLIKELY((writeEnable & 0xfeU))) {
        Verilated::overWidthError("writeEnable");}
    if (VL_UNLIKELY((register_file__02Eclk & 0xfeU))) {
        Verilated::overWidthError("register_file.clk");}
    if (VL_UNLIKELY((adr & 0xc000U))) {
        Verilated::overWidthError("adr");}
    if (VL_UNLIKELY((writeEn & 0xfeU))) {
        Verilated::overWidthError("writeEn");}
    if (VL_UNLIKELY((ram__02Eclk & 0xfeU))) {
        Verilated::overWidthError("ram.clk");}
}
#endif // VL_DEBUG

void Vregister_file::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file::_ctor_var_reset\n"); );
    // Body
    readAdr1 = VL_RAND_RESET_I(6);
    readAdr2 = VL_RAND_RESET_I(6);
    writeAdr = VL_RAND_RESET_I(6);
    register_file__02EwriteData = VL_RAND_RESET_Q(64);
    writeEnable = VL_RAND_RESET_I(1);
    register_file__02Eclk = VL_RAND_RESET_I(1);
    readData1 = VL_RAND_RESET_Q(64);
    readData2 = VL_RAND_RESET_Q(64);
    adr = VL_RAND_RESET_I(14);
    ram__02EwriteData = VL_RAND_RESET_Q(64);
    writeEn = VL_RAND_RESET_I(1);
    ram__02Eclk = VL_RAND_RESET_I(1);
    readData = VL_RAND_RESET_Q(64);
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            register_file__DOT__register[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    { int __Vi0=0; for (; __Vi0<10485; ++__Vi0) {
            ram__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }}
    ram__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
}
