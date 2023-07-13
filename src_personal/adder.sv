module adder(
    // input
    input logic [31:0] data1_i ,
    input logic [31:0] data2_i ,

    // output
    output logic [31:0] data_o 
);
    assign  data_o = data1_i + data2_i ;
    
endmodule : adder
