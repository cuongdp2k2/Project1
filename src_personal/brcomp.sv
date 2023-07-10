
module brcomp(
    //input
    input   logic [31:0]   rs1_data_i,
    input   logic [31:0]   rs2_data_i,
    input   logic          br_unsigned_i,
    //output
    output  logic          br_less_o,
    output  logic          br_equal_o
);
    always_comb begin
        if (br_unsigned_i) begin
            br_less_o = ($unsigned(rs1_data_i) < $unsigned(rs2_data_i));
        end
        else br_less_o = ($signed(rs1_data_i) < $signed(rs2_data_i));
    end
    
    assign br_equal_o = (rs1_data_i == rs2_data_i);
endmodule : brcomp
