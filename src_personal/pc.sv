module pc(
    // input
    input logic [31:0] addr_i ,
    input logic clk_i ,

    // output
    output logic[31:0] addr_o
);
    always @(posedge clk_i) begin : pc_counter
        addr_o <= addr_i ;
    end
endmodule : pc
