module adder(
    // input
    input logic [31:0] data1_i ,
    input logic [31:0] data2_i ,

    // output
    output logic [31:0] data_o 
);
    always_comb begin
        data_o = data1_i + data2_i ;
    end
endmodule : adder
