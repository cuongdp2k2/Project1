module reg_IF (
    // input
    input logic [31:0] instr_i ,
    input logic [31:0] pc_i ,
    input logic clk_i ,

    // output
    output logic [31:0] instr_o ,
    output logic [31:0] pc_o 
) ;
    reg [31:0] instr ;
    reg [31:0] pc ;

    always @(posedge clk_i) begin
        instr_o = instr ;
        pc_o = pc ;
    end

    assign instr = instr_i ;
    assign pc    = pc_i ;
endmodule : reg_IF
