// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+67,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+80,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+67,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+80,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("singleCycle ");
    tracep->declBit(c+80,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+67,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,"rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,"rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+16,"rd_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+17,"br_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+18,"br_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+19,"br_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+20,"br_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+21,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+22,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+23,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+24,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+25,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+26,"mem_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("alu1 ");
    tracep->declBus(c+8,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"alu_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+12,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("brcomp1 ");
    tracep->declBus(c+10,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+18,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"br_less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"br_equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctr_unit1 ");
    tracep->declBus(c+84,"OPCODE_ALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+85,"OPCODE_ALU_I",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+86,"OPCODE_LOAD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+87,"OPCODE_STORE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+88,"OPCODE_BRANCH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+89,"OPCODE_JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+90,"OPCODE_JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+91,"OPCODE_LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+92,"OPCODE_AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+93,"FUNCT3_BEQ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+94,"FUNCT3_BNE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+95,"FUNCT3_BLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+96,"FUNCT3_BGE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+97,"FUNCT3_BLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+98,"FUNCT3_BGEU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+7,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+19,"br_less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"br_equal_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"br_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"br_unsigned_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+27,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+26,"mem_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+25,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+28,"OPCODE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,"FUNCT3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immgen1 ");
    tracep->declBus(c+7,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ins_mem1 ");
    tracep->declBus(c+99,"IMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+30,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 12,0);
    tracep->declBus(c+7,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+80,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu1 ");
    tracep->declBit(c+80,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"st_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"st_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+67,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"mem_op_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+82,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+73,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"input_peri",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,"dataout_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,"dataout_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,"dataout_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,"temp_ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,"mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile1 ");
    tracep->declBit(c+80,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+14,"rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+15,"rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+16,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+83,"rd_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+35+i*1,"memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__input_peri),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_3),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data),32);
    bufp->fullIData(oldp+4,(((IData)(vlSelf->top__DOT__singleCycle__DOT__br_sel)
                              ? ((IData)(vlSelf->top__DOT__singleCycle__DOT__br_sel)
                                  ? vlSelf->top__DOT__singleCycle__DOT__alu_data
                                  : vlSelf->top__DOT__singleCycle__DOT____Vxrand_h96fd10a2__0)
                              : ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc))),32);
    bufp->fullIData(oldp+5,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc)),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__singleCycle__DOT__pc),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__singleCycle__DOT__instr),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__singleCycle__DOT__operand_a),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__singleCycle__DOT__operand_b),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__singleCycle__DOT__rs1_data),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__singleCycle__DOT__rs2_data),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__singleCycle__DOT__alu_data),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__singleCycle__DOT__imm),32);
    bufp->fullCData(oldp+14,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 7U))),5);
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__singleCycle__DOT__br_sel));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__singleCycle__DOT__br_unsigned));
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__singleCycle__DOT__br_less));
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__br_equal));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__rd_wren));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__singleCycle__DOT__mem_wren));
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__singleCycle__DOT__wb_sel),2);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__singleCycle__DOT__mem_op),3);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__singleCycle__DOT__alu_op),4);
    bufp->fullCData(oldp+28,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 2U))),5);
    bufp->fullCData(oldp+29,((7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullSData(oldp+30,((0x1fffU & vlSelf->top__DOT__singleCycle__DOT__pc)),13);
    bufp->fullBit(oldp+31,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__pc))));
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_1),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__dataout_2),32);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__mask),4);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[0]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[1]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[2]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[3]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[4]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[5]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[6]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[7]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[8]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[9]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[10]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[11]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[12]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[13]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[14]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[15]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[16]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[17]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[18]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[19]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[20]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[21]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[22]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[23]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[24]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[25]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[26]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[27]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[28]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[29]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[30]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__singleCycle__DOT__regfile1__DOT__memory[31]),32);
    bufp->fullIData(oldp+67,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+68,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+69,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+70,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+71,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+72,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+73,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+74,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+75,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+76,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+77,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+78,(vlSelf->io_hex7_o),32);
    bufp->fullIData(oldp+79,(vlSelf->pc_debug_o),32);
    bufp->fullBit(oldp+80,(vlSelf->clk_i));
    bufp->fullBit(oldp+81,(vlSelf->rst_ni));
    bufp->fullIData(oldp+82,(((1U & ((~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op) 
                                         >> 2U)) & 
                                     (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren))))
                               ? ((0U == (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op))
                                   ? ((((0x80U & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                         ? 0xffffffU
                                         : 0U) << 8U) 
                                      | (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                   : ((1U == (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op))
                                       ? ((((0x8000U 
                                             & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                             ? 0xffffU
                                             : 0U) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                       : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                               : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)),32);
    bufp->fullIData(oldp+83,(((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                               ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                                   ? vlSelf->top__DOT__singleCycle__DOT__imm
                                   : ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__pc))
                               : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                                   ? ((1U & ((~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op) 
                                                 >> 2U)) 
                                             & (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren))))
                                       ? ((0U == (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op))
                                           ? ((((0x80U 
                                                 & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                                 ? 0xffffffU
                                                 : 0U) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                           : ((1U == (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_op))
                                               ? ((
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                                     ? 0xffffU
                                                     : 0U) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                               : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data))
                                       : vlSelf->top__DOT__singleCycle__DOT__lsu1__DOT__temp_ld_data)
                                   : vlSelf->top__DOT__singleCycle__DOT__alu_data))),32);
    bufp->fullCData(oldp+84,(0xcU),5);
    bufp->fullCData(oldp+85,(4U),5);
    bufp->fullCData(oldp+86,(0U),5);
    bufp->fullCData(oldp+87,(8U),5);
    bufp->fullCData(oldp+88,(0x18U),5);
    bufp->fullCData(oldp+89,(0x1bU),5);
    bufp->fullCData(oldp+90,(0x19U),5);
    bufp->fullCData(oldp+91,(0xdU),5);
    bufp->fullCData(oldp+92,(5U),5);
    bufp->fullCData(oldp+93,(0U),3);
    bufp->fullCData(oldp+94,(1U),3);
    bufp->fullCData(oldp+95,(4U),3);
    bufp->fullCData(oldp+96,(5U),3);
    bufp->fullCData(oldp+97,(6U),3);
    bufp->fullCData(oldp+98,(7U),3);
    bufp->fullIData(oldp+99,(0xdU),32);
}
