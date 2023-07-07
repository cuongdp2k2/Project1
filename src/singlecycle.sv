module singlecycle(
    // input
    input logic clk_i ,
    input logic rst_ni ,
    input logic [31:0] io_sw_i ,

    // output
    output logic [31:0] io_lcd_o ,
    output logic [31:0] io_ledg_o ,
    output logic [31:0] io_ledr_o ,
    output logic [31:0] io_hex0_o , io_hex1_o , io_hex2_o , io_hex3_o , io_hex4_o , io_hex5_o , io_hex6_o , io_hex7_o ,

    output logic [31:0] pc_debug_o , instr_debug_o
);
    // connect 32 bit
    logic [31:0] nxt_pc ;
    logic [31:0] pc_four ;
    logic [31:0] pc ;
    logic [31:0] instr ;
    logic [31:0] rs1_data ;
    logic [31:0] rs2_data ;
    logic [31:0] imm ;
    logic [31:0] operand_a ;
    logic [31:0] operand_b ;
    logic [31:0] alu_data ;
    logic [31:0] ld_data ;
    logic [31:0] wb_data ;

    // control logic
    logic br_sel , rd_wren , br_unsigned , br_less , br_equal , op_a_sel , op_b_sel , mem_wren ; //  br_greater ,
    logic [3:0] alu_op ; 
    logic [2:0] ls_op ;
    logic [1:0] wb_sel ;

    control_unit control_unit(
        // input
        .instr_i(instr) ,
        .br_less_i(br_less) ,
        .br_equal_i(br_equal) ,
        //.br_greater_i(br_greater) ,

        // output
        .br_sel_o (br_sel) ,
        .br_unsigned_o (br_unsigned) ,
        .rd_wren_o (rd_wren) ,
        .op_a_sel_o (op_a_sel) ,
        .op_b_sel_o (op_b_sel) ,
        .alu_op_o (alu_op) ,
        .mem_wren_o (mem_wren) ,
        .ls_op_o (ls_op) ,
        .wb_sel_o (wb_sel)   
    );

    pc_sel pc_sel1(
        // input
        .pc_alu_i (alu_data) ,
        .pc_four_i (pc_four) ,
        .br_sel_i (br_sel) ,

        // output
        .pc_o (nxt_pc)
    );

    pc pc1(
        // input
        .addr_i (nxt_pc) ,
        .clk_i (clk_i) ,

        // output
        .addr_o (pc) 
    );

    adder add4(
        // input
        .data1_i (pc) ,
        .data2_i (32'h00000004) ,

        // output
        .data_o (pc_four)
    );
    
    ins_mem IMEM (
        .paddr_i (pc[12:0]) ,
        .clk_i (clk_i),
        .rst_ni (rst_ni) ,
        .prdata_o (instr)
    );

    regfile regfile1(
        // input
        .instr_i (instr) ,
        .rd_data_i (wb_data) ,
        .rd_wren_i (rd_wren) ,
        .rst_ni (rst_ni) ,
        .clk_i (clk_i) ,

        // output
        .rs1_o (rs1_data) ,
        .rs2_o (rs2_data) 
    );

    immgen immgen1(
        // input
        .data_i (instr) ,

        // output
        .data_o (imm) 
    );

    brcomp branchcomp1(
        // input
        .rs1_data_i (rs1_data) ,
        .rs2_data_i (rs2_data) ,
        .br_unsigned_i (br_unsigned) ,

        // output
        .br_less_o (br_less) ,
        .br_equal_o (br_equal) 
        //.br_greater_o (br_greater) 
    );

    opa operandA (
        // input
        .pc_i (pc) ,
        .rs1_data_i (rs1_data) ,
        .op_a_sel_i (op_a_sel) ,

        // output
        .operand_a_o (operand_a)
    );

    opb operandB (
        // input
        .rs2_data_i (rs2_data) ,
        .imm_i (imm) ,
        .op_b_sel_i (op_b_sel) ,

        // output
        .operand_b_o (operand_b)
    );

    alu alu1(
        // input
        .operand_a_i (operand_a) ,
        .operand_b_i (operand_b) ,
        .alu_op_i (alu_op) ,

        // output
        .alu_data_o (alu_data)
    );

    lsu lsu1(
        // input
        .clk_i (clk_i) ,
        .rst_ni (rst_ni) ,
        .st_en_i (mem_wren) ,
        .st_data_i (rs2_data) ,
        .io_sw_i (io_sw_i) ,
        .addr_i (alu_data) ,
        .mem_op_i(ls_op),

        // output
        .ld_data_o (ld_data) ,
        .io_lcd_o (io_lcd_o) ,
        .io_ledg_o (io_ledg_o) ,
        .io_ledr_o (io_ledr_o) ,
        .io_hex0_o (io_hex0_o) ,
        .io_hex1_o (io_hex1_o) ,
        .io_hex2_o (io_hex2_o) ,
        .io_hex3_o (io_hex3_o) ,
        .io_hex4_o (io_hex4_o) ,
        .io_hex5_o (io_hex5_o) ,
        .io_hex6_o (io_hex6_o) ,
        .io_hex7_o (io_hex7_o) 
    );

    wb writeback1 (
        // input
        .pc_four_i (pc_four) ,
        .alu_data_i (alu_data) ,
        .ld_data_i (ld_data) ,
        .imm_i (imm) ,
        .wb_sel_i (wb_sel) ,

        // output
        .wb_data_o (wb_data)
    );

    assign pc_debug_o = pc ;
    assign instr_debug_o = instr ;
        
endmodule : singlecycle
