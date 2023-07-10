// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    CData/*0:0*/ top__DOT__singleCycle__DOT__br_sel;
    CData/*0:0*/ top__DOT__singleCycle__DOT__br_unsigned;
    CData/*0:0*/ top__DOT__singleCycle__DOT__br_less;
    CData/*0:0*/ top__DOT__singleCycle__DOT__br_equal;
    CData/*0:0*/ top__DOT__singleCycle__DOT__rd_wren;
    CData/*0:0*/ top__DOT__singleCycle__DOT__op_a_sel;
    CData/*0:0*/ top__DOT__singleCycle__DOT__op_b_sel;
    CData/*0:0*/ top__DOT__singleCycle__DOT__mem_wren;
    CData/*1:0*/ top__DOT__singleCycle__DOT__wb_sel;
    CData/*2:0*/ top__DOT__singleCycle__DOT__mem_op;
    CData/*3:0*/ top__DOT__singleCycle__DOT__alu_op;
    CData/*3:0*/ top__DOT__singleCycle__DOT__lsu1__DOT____Vxrand_h96ff575f__0;
    IData/*31:0*/ top__DOT__singleCycle__DOT__lsu1__DOT__input_peri;
    IData/*31:0*/ top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1;
    IData/*31:0*/ top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2;
    IData/*31:0*/ top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3;
    IData/*31:0*/ top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data;
    CData/*3:0*/ top__DOT__singleCycle__DOT__lsu1__DOT__mask;
    CData/*0:0*/ top__DOT__singleCycle__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__3;
    CData/*0:0*/ top__DOT__singleCycle__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__2;
    CData/*0:0*/ top__DOT__singleCycle__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__1;
    CData/*0:0*/ top__DOT__singleCycle__DOT__ctr_unit1__DOT____Vxrand_h96fefc1e__0;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_IN(io_sw_i,31,0);
    VL_OUT(io_lcd_o,31,0);
    VL_OUT(io_ledg_o,31,0);
    VL_OUT(io_ledr_o,31,0);
    VL_OUT(io_hex0_o,31,0);
    VL_OUT(io_hex1_o,31,0);
    VL_OUT(io_hex2_o,31,0);
    VL_OUT(io_hex3_o,31,0);
    VL_OUT(io_hex4_o,31,0);
    VL_OUT(io_hex5_o,31,0);
    VL_OUT(io_hex6_o,31,0);
    VL_OUT(io_hex7_o,31,0);
    VL_OUT(pc_debug_o,31,0);
    IData/*31:0*/ top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__0;
    IData/*31:0*/ top__DOT__singleCycle__DOT__nxt_pc;
    IData/*31:0*/ top__DOT__singleCycle__DOT__pc;
    IData/*31:0*/ top__DOT__singleCycle__DOT__instr;
    IData/*31:0*/ top__DOT__singleCycle__DOT__operand_a;
    IData/*31:0*/ top__DOT__singleCycle__DOT__operand_b;
    IData/*31:0*/ top__DOT__singleCycle__DOT__rs1_data;
    IData/*31:0*/ top__DOT__singleCycle__DOT__rs2_data;
    IData/*31:0*/ top__DOT__singleCycle__DOT__alu_data;
    IData/*31:0*/ top__DOT__singleCycle__DOT__imm;
    IData/*31:0*/ top__DOT__singleCycle__DOT__lsu1__DOT____Vxrand_h96fd10a2__0;
    IData/*31:0*/ top__DOT__singleCycle__DOT__immgen1__DOT____Vxrand_h96fd10a2__0;
    VlUnpacked<IData/*31:0*/, 2048> top__DOT__singleCycle__DOT__ins_mem1__DOT__imem;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__singleCycle__DOT__regfile1__DOT__memory;
    VlUnpacked<IData/*31:0*/, 256> top__DOT__singleCycle__DOT__lsu1__DOT__memory;
    VlUnpacked<IData/*31:0*/, 64> top__DOT__singleCycle__DOT__lsu1__DOT__output_peri;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
