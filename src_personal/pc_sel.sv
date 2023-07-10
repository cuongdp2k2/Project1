module pc_sel(
    // input
    input logic [31:0] pc_alu_i ,
    input logic [31:0] pc_four_i ,
    input logic br_sel_i ,

    // output
    output logic [31:0] pc_o 
) ; 
    always_comb begin 
        if( br_sel_i == 1'b0 ) begin
            pc_o = pc_four_i ;
        end else begin
            pc_o = pc_alu_i ; 
        end
    end
endmodule : pc_sel
