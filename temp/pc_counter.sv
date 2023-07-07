module pc_counter #(parameter SIZE = 32) (
    // input
    input logic [SIZE-1:0] data_i ,
    input logic clk_i ,

    // output
    output logic [SIZE-1:0] data_o 
);
    always @(posedge clk_i) begin
        data_o <= data_i ;
    end
endmodule : pc_counter
