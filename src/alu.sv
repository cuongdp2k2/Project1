
module alu (
    //inputs
    input signed [31:0] operand_a_i, operand_b_i,
    input logic  [ 3:0] alu_op_i,  //4bits
    //output
    output logic [31:0] alu_data_o
);
    always_comb begin : alu
        alu_data_o = '0;
        case (alu_op_i)
            4'b0000: alu_data_o = operand_a_i + operand_b_i; //ADD
            4'b1000: alu_data_o = operand_a_i + ((~operand_b_i) + 32'h1); //SUB
            4'b0010: alu_data_o = {31'b0, operand_a_i < operand_b_i};
            4'b0011: alu_data_o = {31'b0, $unsigned(operand_a_i) < $unsigned(operand_b_i)};
            4'b0100: alu_data_o = operand_a_i ^ operand_b_i; //XOR
            4'b0110: alu_data_o = operand_a_i | operand_b_i; // OR
            4'b0111: alu_data_o = operand_a_i & operand_b_i; //AND
            4'b0001: alu_data_o = operand_a_i << operand_b_i; //SLL
            4'b0101: alu_data_o = operand_a_i >> operand_b_i; //SRL
            4'b1101: alu_data_o = operand_a_i >>> operand_b_i; //SRA
            default: alu_data_o = '0;
        endcase
    end
endmodule
