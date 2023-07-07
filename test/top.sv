module top (
    //inputs
    input logic clk_i,
    input signed [31:0] operand_a_i, operand_b_i,
    input logic [3:0] alu_op_i,  //4bits
    //output
    output logic [31:0] alu_data_o
);
alu dut (
    .operand_a_i (operand_a_i),
    .operand_b_i(operand_b_i),
    .alu_op_i(alu_op_i),
    .alu_data_o(alu_data_o)
);
always @(posedge clk_i) begin
    
end
endmodule : top
