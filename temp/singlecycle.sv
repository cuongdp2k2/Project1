module singlecycle (
    //inputs
    input logic clk_i, rst_ni,
    input logic [31:0] io_sw_i,
    //outputs
    output logic [31:0] io_lcd_o, io_ledg_o, io_ledr_o,
    output logic [31:0] io_hex0_o,io_hex1_o,io_hex2_o,io_hex3_o,io_hex4_o,io_hex5_o,io_hex6_o,io_hex7_o ,
    output logic [31:0] pc_debug_o
);
logic [31:0] nxt_pc;
logic [31:0] pc_four;
logic [31:0] pc;
logic [31:0] instr;
logic [31:0] rs1_data;
logic [31:0] rs2_data;
logic [31:0] operand_a;
logic [31:0] operand_b;
logic [31:0] alu_data;
logic [31:0] ld_data;
logic [31:0] wb_data;
logic [31:0] imm;

logic [ 4:0] rs1_addr;
logic [ 4:0] rs2_addr;
logic [ 4:0] rd_addr;

logic br_sel, br_unsigned, br_less, br_equal;
logic rd_wren, op_a_sel, op_b_sel, mem_wren;
logic [3:0] alu_op;     //for ALU operation sel
logic [2:0] loadsave_op;     //Load and Store
logic [1:0] wb_sel;     //for writeback sel

assign rs1_addr = instr[19:15];
assign rs2_addr = instr[24:20];
assign rd_addr  = instr[11: 7];

ins_mem #( .IMEM_W(32) ) ins_mem1 (
    //inputs
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .paddr_i(pc),
    //output
    .prdata_o(instr)
);

regfile regfile1 (
    // inputs
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .rs1_addr_i(rs1_addr),
    .rs2_addr_i(rs2_addr),
    .rd_addr_i(rd_addr),
    .rd_data_i(wb_data),
    .rd_wren_i(rd_wren),
    // outputs
    .rs1_data_o(rs1_data),
    .rs2_data_o(rs2_data)
);

brcomp brcomp1 (
    // inputs
    .rs1_data_i(rs1_data),
    .rs2_data_i(rs2_data),
    .br_unsigned_i(br_unsigned),
    //outputs
    .br_less_o(br_less),
    .br_equal_o(br_equal)
);

alu alu1 (
    //inputs
    .operand_a_i(operand_a),
    .operand_b_i(operand_b),
    .alu_op_i(alu_op),
    //outputs
    .alu_data_o(alu_data)
);

immgen immgen1 (
    .instr_i(instr),
    .imm_o(imm)
);

lsu lsu1 (
    // inputs
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .addr_i(alu_data),
    .st_data_i(rs2_data),
    .st_en_i(mem_wren),
    .io_sw_i(io_sw_i),
    .loadsave_op_i(loadsave_op),
    // outputs
    .ld_data_o(  ld_data),
    .io_lcd_o ( io_lcd_o),
    .io_ledg_o(io_ledg_o),
    .io_ledr_o(io_ledr_o),
    .io_hex0_o(io_hex0_o),
    .io_hex1_o(io_hex1_o),
    .io_hex2_o(io_hex2_o),
    .io_hex3_o(io_hex3_o),
    .io_hex4_o(io_hex4_o),
    .io_hex5_o(io_hex5_o),
    .io_hex6_o(io_hex6_o),
    .io_hex7_o(io_hex7_o)
);

ctrl_unit ctrl_unit1 (
    .instr_i(instr),
    .br_less_i(br_less),
    .br_equal_i(br_equal),
    //outputs
    .br_sel_o(br_sel),
    .br_unsigned_o(br_unsigned),
    .rd_wren_o(rd_wren),
    .op_a_sel_o(op_a_sel),
    .op_b_sel_o(op_b_sel),
    .mem_wren_o(mem_wren),
    .alu_op_o(alu_op),
    .loadsave_op_o(loadsave_op),
    .wb_sel_o(wb_sel)
);

wb writeback(
    .pc_i (pc_four) ,
    .alu_i (alu_data) ,
    .mem_i (ld_data) ,
    .WBSel_i (wb_sel) ,
    .wb_o (wb_data) 
);

pc_counter #( .SIZE(32) ) PC(
    .data_i (nxt_pc) ,
    .clk_i (clk_i) ,
    .data_o (pc)
);

adder #(.SIZE(32)) pcAdd4  (
    .data0_i (pc) ,
    .data1_i (32'h0004) ,
    .data_o  (pc_four)
);
mux #(.SIZE(32)) muxPC (
    .data0_i (alu_data) ,
    .data1_i (pc_four) ,
    .sel_i  (br_sel),
    .data_o  (nxt_pc)
);
mux #(.SIZE(32)) muxOpA (
    .data0_i (pc) ,
    .data1_i (rs1_data) ,
    .sel_i  (op_a_sel),
    .data_o  (operand_a)
);
mux #(.SIZE(32)) muxOpB (
    .data0_i (rs2_data) ,
    .data1_i (imm) ,
    .sel_i  (op_b_sel),
    .data_o  (operand_b)
);
assign  pc_debug_o = pc ;
endmodule : singlecycle
