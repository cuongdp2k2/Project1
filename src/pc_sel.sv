module pc_sel(
    // input
    input logic [31:0] pc_alu_i ,
    input logic [31:0] pc_four_i ,
    input logic br_sel_i ,

    // output
    output logic [31:0] pc_o 
);
    assign pc_o = (br_sel_i == '0) ? pc_four_i : pc_alu_i ;
endmodule : pc_sel
