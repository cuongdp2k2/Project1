module mux #(parameter SIZE = 32) (
    // input
    input logic [SIZE-1:0] data0_i ,
    input logic [SIZE-1:0] data1_i ,
    input logic sel_i ,
    
    // ouput
    output logic [SIZE-1:0] data_o
);
    always_comb begin : proc_mux
        if (sel_i) begin
          data_o = data0_i ;
        end else begin
          data_o = data1_i ;
        end
    end
    
endmodule : mux
