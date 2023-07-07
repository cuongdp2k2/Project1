module brcomp(
    //inputs
    input logic signed [31:0] rs1_data_i, rs2_data_i,
    input logic br_unsigned_i,
    //outputs
    output logic br_less_o, br_equal_o
);
logic signed [31:0] temp;
assign br_equal_o='0;
always_comb begin : brcomp
    if (br_unsigned_i==1) begin
        temp = (($unsigned(rs1_data_i) + ((~$unsigned(rs2_data_i)) + 32'h1))&32'h80000000)>>31;
        if (temp==1) begin
        br_less_o = 1;
        end else br_less_o = 0;
    end else begin
        temp = ((rs1_data_i + ((~rs2_data_i) + 32'h1))&32'h80000000)>>31;
        if (temp==1) begin
        br_less_o = 1;
        end else br_less_o = 0;
    end
    br_equal_o = (rs1_data_i == rs2_data_i);
end
endmodule : brcomp
