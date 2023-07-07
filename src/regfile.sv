/* verilator lint_off UNUSED */
module regfile(
    // input
    input logic [31:0] instr_i ,
    input logic [31:0] rd_data_i ,
    input logic rd_wren_i ,
    input logic rst_ni ,
    input logic clk_i ,

    // output
    output logic [31:0] rs1_o ,
    output logic [31:0] rs2_o
);
    reg [31:0] mem [31:0];
    logic [4:0] rs1_addr = instr_i[19:15] ;
    logic [4:0] rs2_addr = instr_i[24:20] ;
    logic [4:0] rd_addr = instr_i[11:7] ;
    
    always @(posedge clk_i) begin
        if(rd_wren_i == 1'b1)
            mem[rd_addr] <= (rd_addr == 0) ? 0 : rd_data_i ;
        rs1_o <= mem[rs1_addr] ;
        rs2_o <= mem[rs2_addr] ;
    end

endmodule : regfile
