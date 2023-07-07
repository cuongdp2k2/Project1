module wb(
    // input
    input logic [31:0] pc_i  ,
    input logic [31:0] alu_i ,
    input logic [31:0] mem_i   ,
    input logic [1:0]  WBSel_i ,

    // output
    output logic [31:0] wb_o 
);
    always_comb begin : proc_write_back
        case (WBSel_i)
          2'b01 : wb_o = mem_i ;
          2'b00 : wb_o = alu_i ;
          2'b10 : wb_o = pc_i  ;
          default : wb_o = 0   ;
        endcase
    end
endmodule : wb
