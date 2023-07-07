module opb(
    // input
    input logic [31:0] rs2_data_i ,
    input logic [31:0] imm_i ,
    input logic op_b_sel_i ,

    // output
    output logic [31:0] operand_b_o 
);
    always_comb begin
        if(op_b_sel_i == 1'b0)
            operand_b_o = rs2_data_i ;
        else operand_b_o = imm_i ;
    end

endmodule : opb
