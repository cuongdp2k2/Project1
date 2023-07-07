// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__input_peri 
        = vlSelf->io_sw_i;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__regfile1__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__regfile1__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__regfile1__DOT__mem__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3;
    // Body
    __Vdlyvset__top__DOT__singleCycle__DOT__regfile1__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3 = 0U;
    if (vlSelf->top__DOT__singleCycle__DOT__rd_wren) {
        __Vdlyvval__top__DOT__singleCycle__DOT__regfile1__DOT__mem__v0 
            = ((0U == (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                >> 7U))) ? 0U : ((2U 
                                                  & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                                                   ? vlSelf->top__DOT__singleCycle__DOT__imm
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__singleCycle__DOT__pc))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                                                   ? 
                                                  ((1U 
                                                    & ((~ 
                                                        ((IData)(vlSelf->top__DOT__singleCycle__DOT__ls_op) 
                                                         >> 2U)) 
                                                       & (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren))))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__singleCycle__DOT__ls_op))
                                                     ? 
                                                    ((((0x80U 
                                                        & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                                        ? 0xffffffU
                                                        : 0U) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->top__DOT__singleCycle__DOT__ls_op))
                                                      ? 
                                                     ((((0x8000U 
                                                         & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                                         ? 0xffffU
                                                         : 0U) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                                      : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                                    : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                                   : vlSelf->top__DOT__singleCycle__DOT__alu_data)));
        __Vdlyvset__top__DOT__singleCycle__DOT__regfile1__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__singleCycle__DOT__regfile1__DOT__mem__v0 
            = (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                        >> 7U));
    }
    if ((((((0U == (7U & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                          >> 8U))) | (1U == (7U & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                                   >> 8U)))) 
           | (2U == (7U & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                           >> 8U)))) | (3U == (7U & 
                                               (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                                >> 8U)))) 
         & (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren))) {
        if ((1U == (1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0 
                = (0xffU & vlSelf->top__DOT__singleCycle__DOT__rs2_data);
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0 = 0U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
        if ((2U == (2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                            >> 8U));
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1 = 8U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
        if ((4U == (4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                            >> 0x10U));
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2 = 0x10U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
        if ((8U == (8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3 
                = (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                   >> 0x18U);
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3 = 0x18U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
    }
    if ((IData)(((0x400U == (0x700U & vlSelf->top__DOT__singleCycle__DOT__alu_data)) 
                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren)))) {
        if ((1U == (1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0 
                = (0xffU & vlSelf->top__DOT__singleCycle__DOT__rs2_data);
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0 = 0U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0 
                = (0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
        if ((2U == (2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                            >> 8U));
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1 = 8U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1 
                = (0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
        if ((4U == (4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                            >> 0x10U));
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2 = 0x10U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2 
                = (0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
        if ((8U == (8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3 
                = (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                   >> 0x18U);
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3 = 0x18U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3 
                = (0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0) {
        vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v0))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1) {
        vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v1))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2) {
        vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v2))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3) {
        vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__memory__v3))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0) {
        vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v0))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1) {
        vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v1))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2) {
        vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v2))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3) {
        vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu1__DOT__output_peri__v3))));
    }
    vlSelf->top__DOT__singleCycle__DOT__pc = vlSelf->top__DOT__singleCycle__DOT__nxt_pc;
    vlSelf->io_lcd_o = vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
        [0x28U];
    vlSelf->io_ledg_o = vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
        [0x24U];
    vlSelf->io_ledr_o = vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
        [0x20U];
    vlSelf->io_hex7_o = vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
        [0x1cU];
    vlSelf->io_hex6_o = vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
        [0x18U];
    vlSelf->io_hex5_o = vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
        [0x14U];
    vlSelf->io_hex4_o = vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
        [0x10U];
    vlSelf->io_hex3_o = vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
        [0xcU];
    vlSelf->io_hex2_o = vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
        [8U];
    vlSelf->io_hex1_o = vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
        [4U];
    vlSelf->io_hex0_o = vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
        [0U];
    vlSelf->top__DOT__singleCycle__DOT__rs1_data = 
        vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                   >> 0xfU))];
    vlSelf->top__DOT__singleCycle__DOT__rs2_data = 
        vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                   >> 0x14U))];
    if (__Vdlyvset__top__DOT__singleCycle__DOT__regfile1__DOT__mem__v0) {
        vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__mem[__Vdlyvdim0__top__DOT__singleCycle__DOT__regfile1__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__singleCycle__DOT__regfile1__DOT__mem__v0;
    }
    vlSelf->pc_debug_o = vlSelf->top__DOT__singleCycle__DOT__pc;
    vlSelf->top__DOT__singleCycle__DOT__instr = vlSelf->top__DOT__singleCycle__DOT__IMEM__DOT__imem
        [(0x7ffU & (vlSelf->top__DOT__singleCycle__DOT__pc 
                    >> 2U))];
    vlSelf->top__DOT__singleCycle__DOT__br_equal = 
        (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
         == vlSelf->top__DOT__singleCycle__DOT__rs2_data);
    vlSelf->instr_debug_o = vlSelf->top__DOT__singleCycle__DOT__instr;
    vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
    vlSelf->top__DOT__singleCycle__DOT__rd_wren = 0U;
    vlSelf->top__DOT__singleCycle__DOT__br_unsigned 
        = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__0;
    vlSelf->top__DOT__singleCycle__DOT__mem_wren = 0U;
    vlSelf->top__DOT__singleCycle__DOT__ls_op = 2U;
    vlSelf->top__DOT__singleCycle__DOT__alu_op = 0U;
    if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                  >> 6U)))) {
        if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                  >> 2U)))) {
                        vlSelf->top__DOT__singleCycle__DOT__ls_op 
                            = (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                     >> 0xcU));
                    }
                }
            }
            if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                  >> 2U)))) {
                        vlSelf->top__DOT__singleCycle__DOT__alu_op 
                            = ((8U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                      >> 0x1bU)) | 
                               (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                      >> 0xcU)));
                    }
                }
            }
        } else {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                  >> 2U)))) {
                        vlSelf->top__DOT__singleCycle__DOT__ls_op 
                            = (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                     >> 0xcU));
                    }
                }
            }
            if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                  >> 2U)))) {
                        vlSelf->top__DOT__singleCycle__DOT__alu_op 
                            = ((5U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                             >> 0xcU)))
                                ? ((8U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                          >> 0x1bU)) 
                                   | (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                            >> 0xcU)))
                                : (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                         >> 0xcU)));
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__singleCycle__DOT__op_b_sel = 0U;
    vlSelf->top__DOT__singleCycle__DOT__op_a_sel = 0U;
    if ((0x40U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        vlSelf->top__DOT__singleCycle__DOT__wb_sel = 2U;
                    }
                } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    vlSelf->top__DOT__singleCycle__DOT__wb_sel = 2U;
                }
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                  >> 2U)))) {
                        vlSelf->top__DOT__singleCycle__DOT__br_unsigned 
                            = ((6U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                             >> 0xcU))) 
                               | (7U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                               >> 0xcU))));
                    }
                }
            }
            if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                    = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2;
            } else if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                    = (1U & ((vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 2U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2)));
            } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__rd_wren = 1U;
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2;
        }
    } else if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    vlSelf->top__DOT__singleCycle__DOT__wb_sel = 3U;
                }
            }
            vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                = (1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                             >> 3U)) | (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2)));
        } else if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2;
        } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2;
        }
    } else {
        if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                      >> 4U)))) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 2U)))) {
                    vlSelf->top__DOT__singleCycle__DOT__wb_sel = 1U;
                }
            }
        }
        vlSelf->top__DOT__singleCycle__DOT__rd_wren 
            = (1U & ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)
                      ? ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                             >> 3U)) | (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2))
                      : ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                          ? (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2)
                          : ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                 >> 2U)) | (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__2)))));
    }
    vlSelf->top__DOT__singleCycle__DOT__br_less = ((IData)(vlSelf->top__DOT__singleCycle__DOT__br_unsigned)
                                                    ? 
                                                   (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                                    < vlSelf->top__DOT__singleCycle__DOT__rs2_data)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->top__DOT__singleCycle__DOT__rs1_data, vlSelf->top__DOT__singleCycle__DOT__rs2_data));
    if ((0x40U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                    = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
            } else if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 2U)))) {
                    vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                        = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
                }
            }
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        vlSelf->top__DOT__singleCycle__DOT__op_b_sel = 1U;
                        vlSelf->top__DOT__singleCycle__DOT__op_a_sel = 1U;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__op_b_sel = 1U;
                    if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                  >> 2U)))) {
                        vlSelf->top__DOT__singleCycle__DOT__op_a_sel = 1U;
                    }
                }
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
        }
    } else {
        if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                        = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
                }
            } else {
                vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                    = (1U & ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                              ? (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3)
                              : ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                     >> 2U)) | (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3))));
            }
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                  >> 2U)))) {
                        vlSelf->top__DOT__singleCycle__DOT__op_b_sel = 1U;
                    }
                }
            }
        } else if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                    = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
            }
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 3U)))) {
                vlSelf->top__DOT__singleCycle__DOT__op_b_sel = 1U;
            }
        } else {
            if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                    = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
            } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__mem_wren 
                    = vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__3;
            }
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 2U)))) {
                    vlSelf->top__DOT__singleCycle__DOT__op_b_sel = 1U;
                }
            }
        }
        if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                      >> 5U)))) {
            if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        vlSelf->top__DOT__singleCycle__DOT__op_a_sel = 1U;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__singleCycle__DOT__operand_a = 
        ((IData)(vlSelf->top__DOT__singleCycle__DOT__op_a_sel)
          ? vlSelf->top__DOT__singleCycle__DOT__pc : vlSelf->top__DOT__singleCycle__DOT__rs1_data);
    vlSelf->top__DOT__singleCycle__DOT__imm = ((0x40U 
                                                & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT____Vxrand_h96fd10a2__0
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0x14U) 
                                                       | ((0xff000U 
                                                           & vlSelf->top__DOT__singleCycle__DOT__instr) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                   >> 0x14U)))))
                                                       : vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT____Vxrand_h96fd10a2__0)
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      (((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                             >> 0xcU))) 
                                                        | (5U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                               >> 0xcU))))
                                                        ? 
                                                       (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                        >> 0x14U)
                                                        : 
                                                       (((- (IData)(
                                                                    (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                           >> 0x14U)))
                                                       : 
                                                      (((6U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                             >> 0xcU))) 
                                                        | (7U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                               >> 0xcU))))
                                                        ? 
                                                       ((0x1000U 
                                                         & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 7U)))))
                                                        : 
                                                       (((- (IData)(
                                                                    (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | ((0x800U 
                                                            & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 7U)))))))))
                                                    : vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT____Vxrand_h96fd10a2__0)
                                                : (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT____Vxrand_h96fd10a2__0
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      (0xfffff000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       : vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT____Vxrand_h96fd10a2__0))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT____Vxrand_h96fd10a2__0
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT____Vxrand_h96fd10a2__0
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0xfe0U 
                                                           & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                              >> 0x14U)) 
                                                          | (0x1fU 
                                                             & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                >> 7U)))))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT____Vxrand_h96fd10a2__0
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      (0xfffff000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       : 
                                                      (((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                             >> 0xcU))) 
                                                        | (5U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                               >> 0xcU))))
                                                        ? 
                                                       (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                        >> 0x14U)
                                                        : 
                                                       (((- (IData)(
                                                                    (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                           >> 0x14U)))))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT____Vxrand_h96fd10a2__0
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? vlSelf->top__DOT__singleCycle__DOT__immgen1__DOT____Vxrand_h96fd10a2__0
                                                       : 
                                                      (((4U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                             >> 0xcU))) 
                                                        | (5U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                               >> 0xcU))))
                                                        ? 
                                                       (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                        >> 0x14U)
                                                        : 
                                                       (((- (IData)(
                                                                    (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                           >> 0x14U))))))));
    vlSelf->top__DOT__singleCycle__DOT__operand_b = 
        ((IData)(vlSelf->top__DOT__singleCycle__DOT__op_b_sel)
          ? vlSelf->top__DOT__singleCycle__DOT__imm
          : vlSelf->top__DOT__singleCycle__DOT__rs2_data);
    vlSelf->top__DOT__singleCycle__DOT__br_sel = 0U;
    if ((0x40U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                        vlSelf->top__DOT__singleCycle__DOT__br_sel = 1U;
                    }
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__br_sel 
                        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__instr 
                                  >> 2U) | ((0x4000U 
                                             & vlSelf->top__DOT__singleCycle__DOT__instr)
                                             ? ((0x2000U 
                                                 & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                  ? 
                                                 (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less))
                                                  : (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less))
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                  ? 
                                                 (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less))
                                                  : (IData)(vlSelf->top__DOT__singleCycle__DOT__br_less)))
                                             : ((0x2000U 
                                                 & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                 ? (IData)(vlSelf->top__DOT__singleCycle__DOT__control_unit__DOT____Vxrand_h96fefc1e__1)
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                  ? 
                                                 (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal))
                                                  : (IData)(vlSelf->top__DOT__singleCycle__DOT__br_equal))))));
                }
            }
        }
    }
    vlSelf->top__DOT__singleCycle__DOT__alu_data = 
        ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
          ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
              ? ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                  ? vlSelf->top__DOT__singleCycle__DOT__alu1__DOT____Vxrand_h96fd10a2__0
                  : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                      ? ((0x1fU >= vlSelf->top__DOT__singleCycle__DOT__operand_b)
                          ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                             >> vlSelf->top__DOT__singleCycle__DOT__operand_b)
                          : 0U) : vlSelf->top__DOT__singleCycle__DOT__alu1__DOT____Vxrand_h96fd10a2__0))
              : ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                  ? vlSelf->top__DOT__singleCycle__DOT__alu1__DOT____Vxrand_h96fd10a2__0
                  : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                      ? vlSelf->top__DOT__singleCycle__DOT__alu1__DOT____Vxrand_h96fd10a2__0
                      : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         - ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b))))))
          : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
              ? ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                  ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                      ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         & vlSelf->top__DOT__singleCycle__DOT__operand_b)
                      : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         | vlSelf->top__DOT__singleCycle__DOT__operand_b))
                  : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                      ? ((0x1fU >= vlSelf->top__DOT__singleCycle__DOT__operand_b)
                          ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                             >> vlSelf->top__DOT__singleCycle__DOT__operand_b)
                          : 0U) : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   ^ vlSelf->top__DOT__singleCycle__DOT__operand_b)))
              : ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                  ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                      ? ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                          < vlSelf->top__DOT__singleCycle__DOT__operand_b)
                          ? 1U : 0U) : (VL_LTS_III(32, vlSelf->top__DOT__singleCycle__DOT__operand_a, vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                         ? 1U : 0U))
                  : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__alu_op))
                      ? ((0x1fU >= vlSelf->top__DOT__singleCycle__DOT__operand_b)
                          ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                             << vlSelf->top__DOT__singleCycle__DOT__operand_b)
                          : 0U) : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   + vlSelf->top__DOT__singleCycle__DOT__operand_b)))));
    vlSelf->top__DOT__singleCycle__DOT__nxt_pc = ((IData)(vlSelf->top__DOT__singleCycle__DOT__br_sel)
                                                   ? vlSelf->top__DOT__singleCycle__DOT__alu_data
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__singleCycle__DOT__pc));
    vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask 
        = ((0U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ls_op)))
            ? ((0U == (3U & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                ? 1U : ((1U == (3U & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                         ? 2U : ((2U == (3U & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                  ? 4U : 8U))) : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->top__DOT__singleCycle__DOT__ls_op)))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                                     ? 3U
                                                     : 0xcU))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->top__DOT__singleCycle__DOT__ls_op)))
                                                    ? 0xfU
                                                    : (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT____Vxrand_h96ff575f__0))));
    vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2 = 0U;
    vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1 = 0U;
    if (vlSelf->top__DOT__singleCycle__DOT__mem_wren) {
        vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1 = 0U;
    } else if ((0U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ls_op)))) {
        if ((1U == (1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2) 
                   | (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1) 
                   | (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
        }
        if ((2U == (2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
                               [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                          >> 2U))] 
                               >> 8U)));
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory
                               [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                          >> 2U))] 
                               >> 8U)));
        }
        if ((4U == (4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
                               [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                          >> 2U))] 
                               >> 0x10U)));
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory
                               [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                          >> 2U))] 
                               >> 0x10U)));
        }
        if ((8U == (8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2) 
                   | (vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))] >> 0x18U));
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1) 
                   | (vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))] >> 0x18U));
        }
    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ls_op)))) {
        if ((3U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2 
                = ((0xffff0000U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2) 
                   | (0xffffU & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1 
                = ((0xffff0000U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1) 
                   | (0xffffU & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
        }
        if ((0xcU == (0xcU & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2 
                = ((0xffff0000U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2) 
                   | (vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))] >> 0x10U));
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1 
                = ((0xffff0000U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1) 
                   | (vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))] >> 0x10U));
        }
    } else {
        vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2 
            = vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__output_peri
            [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                       >> 2U))];
        vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1 
            = vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__memory
            [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                       >> 2U))];
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3 = 0U;
    if (vlSelf->top__DOT__singleCycle__DOT__mem_wren) {
        vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3 = 0U;
    } else if ((0U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ls_op)))) {
        if ((1U == (1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3) 
                   | (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__input_peri));
        }
        if ((2U == (2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__input_peri 
                               >> 8U)));
        }
        if ((4U == (4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__input_peri 
                               >> 0x10U)));
        }
        if ((8U == (8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3) 
                   | (vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__input_peri 
                      >> 0x18U));
        }
    } else if ((1U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ls_op)))) {
        if ((3U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3 
                = ((0xffff0000U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3) 
                   | (0xffffU & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__input_peri));
        }
        if ((0xcU == (0xcU & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3 
                = ((0xffff0000U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3) 
                   | (vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__input_peri 
                      >> 0x10U));
        }
    } else {
        vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3 
            = vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__input_peri;
    }
    vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data 
        = ((0x400U & vlSelf->top__DOT__singleCycle__DOT__alu_data)
            ? ((0x200U & vlSelf->top__DOT__singleCycle__DOT__alu_data)
                ? vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT____Vxrand_h96fd10a2__0
                : ((0x100U & vlSelf->top__DOT__singleCycle__DOT__alu_data)
                    ? vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3
                    : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2))
            : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
