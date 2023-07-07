module top (
    //inputs
    input logic clk_i,
    input logic signed [31:0] rs1_data_i, rs2_data_i,
    input logic br_unsigned_i,
    //outputs
    output logic br_less_o, br_equal_o
);
brcomp dut (
    .rs1_data_i(rs1_data_i),
    .rs2_data_i(rs2_data_i),
    .br_unsigned_i(br_unsigned_i),
    .br_less_o(br_less_o),
    .br_equal_o(br_equal_o)
);
always @(posedge clk_i) begin
    
end
endmodule : top
