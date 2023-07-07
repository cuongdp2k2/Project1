module branchcomp(
    // input
    input logic [31:0] rs1_data_i ,
    input logic [31:0] rs2_data_i ,
    input logic br_unsigned_i ,

    // output
    output logic br_less_o ,
    output logic br_equal_o ,
    output logic br_greater_o
);
    always_comb begin
        if(br_unsigned_i == 1'b1) begin
            if( $unsigned(rs1_data_i) < $unsigned(rs2_data_i) ) begin
                br_less_o = 1'b1 ;
                br_equal_o = 1'b0 ;
                br_greater_o = 1'b0 ;
            end else if( $unsigned(rs1_data_i) > $unsigned(rs2_data_i) ) begin
                br_less_o = 1'b0 ;
                br_equal_o = 1'b0 ;
                br_greater_o = 1'b1 ;
            end else begin
                br_less_o = 1'b0 ;
                br_equal_o = 1'b1 ;
                br_greater_o = 1'b0 ;
            end
        end else begin
            if( $signed(rs1_data_i) < $signed(rs2_data_i) ) begin
                br_less_o = 1'b1 ;
                br_equal_o = 1'b0 ;
                br_greater_o = 1'b0 ;
            end else if( $signed(rs1_data_i) > $signed(rs2_data_i) ) begin
                br_less_o = 1'b0 ;
                br_equal_o = 1'b0 ;
                br_greater_o = 1'b1 ;
            end else begin
                br_less_o = 1'b0 ;
                br_equal_o = 1'b1 ;
                br_greater_o = 1'b0 ;
            end
        end
    end
endmodule : branchcomp
