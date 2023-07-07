module adder #(
    SIZE = 32 
) (
    // input
    input logic [SIZE-1:0] data0_i ,
    input logic [SIZE-1:0] data1_i ,

    // output
    output logic [SIZE-1:0] data_o 
);
    always_comb begin : proc_adder
        data_o = data0_i + data1_i ;
    end
endmodule : adder
