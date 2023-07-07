
`include "../src/constants.sv"
/* verilator lint_off UNUSED */
module immgen (
    input  logic [31:0] instr_i,
    output logic [31:0] imm_o
);
  always_comb
    case (instr_i[6:2])  //5 bit tren cua func7
    `OPCODE_LUI,
    `OPCODE_AUIPC:
      imm_o = {instr_i[31:12], 12'h0};

    `OPCODE_JAL:
      if (instr_i[31])
        imm_o = {11'h7FF, instr_i[31], instr_i[19:12], instr_i[20], instr_i[30:21], 1'b0};
      else imm_o = {11'h0, instr_i[31], instr_i[19:12], instr_i[20], instr_i[30:21], 1'b0};

    `OPCODE_JALR,
    `OPCODE_LOAD:
      if (instr_i[31]) imm_o = {20'hFFFFF, instr_i[31:20]};
      else imm_o = {20'h0, instr_i[31:20]};

    `OPCODE_OP_IMM:
      if ((instr_i[14:12] == 3'b001) || (instr_i[14:12] == 3'b101)) begin
        imm_o = {27'h0, instr_i[24:20]};
      end else begin
        if (instr_i[31]) imm_o = {20'hFFFFF, instr_i[31:20]};
        else imm_o = {20'h0, instr_i[31:20]};
      end

    `OPCODE_BRANCH: 
      if (instr_i[31])
        imm_o = {19'h7FFFF, instr_i[31], instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0};
      else imm_o = {19'h0, instr_i[31], instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0};

    `OPCODE_STORE:
      if (instr_i[31]) imm_o = {20'hFFFFF, instr_i[31:25], instr_i[11:7]};
      else imm_o = {20'h0, instr_i[31:25], instr_i[11:7]};

    default:
      imm_o = 32'x;
    endcase

endmodule : immgen

/* verilator lint_off UNUSED */


///////////////
// /* verilator lint_off UNUSED */
// module immgen (
//     input logic [31:0] instr_i, //la bit tu instr_iuction
//     output logic [31:0] imm_o
// );
// /* verilator lint_off UNUSED */

// logic [11:0] I_imm = instr_i[31:20];
// logic [11:0] S_imm = {instr_i[31:25], instr_i[11:7]};
// logic [12:0] B_imm = {instr_i[31], instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0};
// logic [20:0] J_imm = {instr_i[31], instr_i[19:12], instr_i[20], instr_i[30:25], instr_i[24:21], 1'b0};
// logic [31:0] U_imm = {instr_i[31:12], 12'b0};

// always_comb begin
//     case (instr_i[6:2])
//         5'b00000,
//         5'b11001,
//         5'b00100: imm_o = {{20{I_imm[11]}}, I_imm}; //I type (Immediate, LOAD, JALR)
//         5'b01000: imm_o = {{20{S_imm[11]}}, S_imm}; //S type (Save Instruction)
//         5'b11000: imm_o = {{19{B_imm[12]}}, B_imm}; //B type (Branches Instruction)
//         5'b11011: imm_o = {{11{J_imm[20]}}, J_imm}; //J type (JAL)
//         5'b01101: imm_o = U_imm;
//         5'b00101: imm_o = U_imm; //U type (LUI,AUIPC)
//         default: imm_o = '0;
//     endcase
// end
// endmodule
