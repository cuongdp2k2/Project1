/* verilator lint_off MULTITOP */
`include "../src/constants.sv"
module singlecycle (
    input logic clk_i,
    rst_ni,
    input logic [31:0] io_sw_i,

    output logic [31:0] io_lcd_o,
    output logic [31:0] io_ledg_o,
    output logic [31:0] io_ledr_o,
    output logic [31:0] io_hex0_o,
    output logic [31:0] io_hex1_o,
    output logic [31:0] io_hex2_o,
    output logic [31:0] io_hex3_o,
    output logic [31:0] io_hex4_o,
    output logic [31:0] io_hex5_o,
    output logic [31:0] io_hex6_o,
    output logic [31:0] io_hex7_o,
    output logic [31:0] pc_debug_o
);
  logic [31:0] nxt_pc;
  logic [31:0] pc_four;
  logic [31:0] pc;
  logic [31:0] instr;
  logic [31:0] operand_a;
  logic [31:0] operand_b;
  logic [31:0] rs1_data;
  logic [31:0] rs2_data;
  logic [31:0] alu_data;
  logic [31:0] ld_data;
  logic [31:0] wb_data;
  logic [31:0] imm;
  logic [4:0] rs1_addr;
  logic [4:0] rs2_addr;
  logic [4:0] rd_addr;

  logic br_sel;
  logic br_unsigned;
  logic br_less;
  logic br_equal;
  logic rd_wren;
  logic op_a_sel;
  logic op_b_sel;
  logic mem_wren;
  logic [1:0] wb_sel;
  logic [2:0] mem_op;
  logic [3:0] alu_op;

  assign rs1_addr = instr[19:15];
  assign rs2_addr = instr[24:20];
  assign rd_addr  = instr[11:7];

inst_memory #( .IMEM_W(13) ) ins_mem1 (
    //inputs
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .paddr_i(pc[12:0]),
    //output
    .prdata_o(instr)
);

  regfile regfile1 (
      .clk_i(clk_i),
      .rst_ni(rst_ni),
      .rd_wren_i(rd_wren),
      .rs1_addr_i(rs1_addr),
      .rs2_addr_i(rs2_addr),
      .rd_addr_i(rd_addr),
      .rd_data_i(wb_data),

      .rs1_data_o(rs1_data),
      .rs2_data_o(rs2_data)
  );

  brcomp brcomp1 (
      .rs1_data_i(rs1_data),
      .rs2_data_i(rs2_data),
      .br_unsigned_i(br_unsigned),

      .br_less_o (br_less),
      .br_equal_o(br_equal)
  );

  alu alu1 (
      .operand_a_i(operand_a),
      .operand_b_i(operand_b),
      .alu_op_i(alu_op),

      .alu_data_o(alu_data)
  );

  lsu lsu1 (
      .clk_i(clk_i),
      .rst_ni(rst_ni),
      .st_en_i(mem_wren),
      .addr_i(alu_data),
      .st_data_i(rs2_data),
      .io_sw_i(io_sw_i),
      .mem_op_i(mem_op),

      .ld_data_o(ld_data),
      .io_lcd_o (io_lcd_o),
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

  ctrl_unit ctr_unit1 (
      .instr_i(instr),
      .br_less_i(br_less),
      .br_equal_i(br_equal),

      .br_sel_o(br_sel),
      .br_unsigned_o(br_unsigned),
      .rd_wren_o(rd_wren),
      .op_a_sel_o(op_a_sel),
      .op_b_sel_o(op_b_sel),
      .mem_wren_o(mem_wren),
      .alu_op_o(alu_op),
      .mem_op_o(mem_op),
      .wb_sel_o(wb_sel)
  );

  immgen immgen1 (
      .instr_i(instr),

      .imm_o(imm)
  );

  //pc = pc + 4
  assign pc_four = pc + 32'h4;
  //pc
  always_ff @(posedge clk_i)
    if (rst_ni) pc <= nxt_pc;
    else pc <= 32'h0;
  //next pc select mux
  always_comb
    case (br_sel)
      `CTL_PC_PC4:      nxt_pc = pc_four;
      `CTL_PC_ALU_DATA: nxt_pc = alu_data;
      default: nxt_pc = 32'x;
    endcase
  //operand_a_sel mux
  always_comb
    case (op_a_sel)
      `CTL_ALU_A_RS1: operand_a = rs1_data;
      `CTL_ALU_A_PC:  operand_a = pc;
      default: operand_a = 32'b0;
    endcase
  //operand_b_sel mux 
  always_comb
    case (op_b_sel)
      `CTL_ALU_B_RS2: operand_b = rs2_data;
      `CTL_ALU_B_IMM: operand_b = imm;
      default: operand_b = 32'b0;
    endcase
  //wb_data_sel mux
  always_comb
    case (wb_sel)
      `CTL_WRITEBACK_ALU:  wb_data = alu_data;
      `CTL_WRITEBACK_LOAD: wb_data = ld_data;
      `CTL_WRITEBACK_PC4:  wb_data = pc_four;
      `CTL_WRITEBACK_IMM:  wb_data = imm;
      default: wb_data = 32'b0;
    endcase
assign pc_debug_o = pc;
endmodule : singlecycle
/* verilator lint_off MULTITOP */
