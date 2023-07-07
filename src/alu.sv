module alu(
    // input
    input logic [31:0] operand_a_i ,
    input logic [31:0] operand_b_i ,
    input logic [3:0]  alu_op_i ,

    // output
    output logic [31:0] alu_data_o 
);
    always_comb begin
        case (alu_op_i)
            4'b0000 : alu_data_o = operand_a_i + operand_b_i ; // ADD
            4'b1000 : alu_data_o = operand_a_i - (~(operand_b_i) + 32'h00000001) ; // SUB
            4'b0001 : alu_data_o = operand_a_i << operand_b_i ; // SLL
            4'b0010 : alu_data_o = ( $signed(operand_a_i) < $signed(operand_b_i) ) ? 32'h00000001 : 32'h0 ; // SLT
            4'b0011 : alu_data_o = ( $unsigned(operand_a_i) < $unsigned(operand_b_i) ) ? 32'h1 : 32'h0 ; // SLTU
            4'b0100 : alu_data_o = operand_a_i ^ operand_b_i ; // XOR
            4'b0101 : alu_data_o = operand_a_i >> operand_b_i ; // SRL
            4'b1101 : alu_data_o = operand_a_i >>> operand_b_i ; // SRA
            4'b0110 : alu_data_o = operand_a_i | operand_b_i ; // OR
            4'b0111 : alu_data_o = operand_a_i & operand_b_i ; // AND
            default : alu_data_o = 32'bx ; 
        endcase
    end
endmodule : alu
