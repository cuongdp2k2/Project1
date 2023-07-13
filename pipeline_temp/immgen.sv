/* verilator lint_off UNUSED */
module immgen(
    input logic [31:0] instr_i,

    output logic [31:0] imm_o
);
    always_comb
      case(instr_i[6:2]) //5 bit tren cua func7
        5'b01101: // LUI
              imm_o = {instr_i[31:12], 12'h0};
              
        5'b00101: // AUIPC
              imm_o = {instr_i[31:12], 12'h0}; 
                 
        5'b11011: // JAL
            if(instr_i[31])
              imm_o = {11'h7FF, instr_i[31], instr_i[19:12], instr_i[20], instr_i[30:21], 1'b0};
            else
              imm_o = {11'h0, instr_i[31], instr_i[19:12], instr_i[20], instr_i[30:21], 1'b0};
                                
        5'b11001: // JALR
            if(instr_i[31])
              imm_o = {20'hFFFFF, instr_i[31:20]};
            else
              imm_o = {20'h0, instr_i[31:20]}; 
              
        5'b00000: //  LB, LH, LW, LBU, LHU
            if(instr_i[31])
              imm_o = {20'hFFFFF, instr_i[31:20]};
            else
              imm_o = {20'h0, instr_i[31:20]};          

        5'b00100: // ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI
        if((instr_i[14:12] == 3'b001) || (instr_i[14:12] == 3'b101))
          begin // SLLI, SRLI, SRAI
              imm_o = {27'h0, instr_i[24:20]};            
          end
        else  
          begin // ADDI, SLTI, SLTIU, XORI, ORI, ANDI
            if(instr_i[31])
              imm_o = {20'hFFFFF, instr_i[31:20]};
            else
              imm_o = {20'h0, instr_i[31:20]}; 
          end

        5'b11000: // BEQ, BNE, BLT, BGE, BLTU, BGEU,
            if(instr_i[31])
              imm_o = {19'h7FFFF, instr_i[31], instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0};
            else
              imm_o = {19'h0, instr_i[31], instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0}; 

        5'b01000: // SB, SH, SW
            if(instr_i[31])
              imm_o = {20'hFFFFF, instr_i[31:25], instr_i[11:7]};
            else
              imm_o = {20'h0, instr_i[31:25], instr_i[11:7]}; 
                 
        default: // JALR, LB, LH, LW, LBU, LHU, ADDI, SLTI, SLTIU, XORI, ORI, ANDI
            if(instr_i[31])
              imm_o = {20'hFFFFF, instr_i[31:20]};
            else
              imm_o = {20'h0, instr_i[31:20]};       
      endcase

endmodule: immgen
/* verilator lint_off UNUSED */





