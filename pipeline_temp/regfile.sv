/* verilator lint_off UNUSED */
module regfile (
    input logic clk_i, rst_ni, rd_wren_i,
    input logic [4:0] rs1_addr_i, rs2_addr_i, rd_addr_i,
    input logic [31:0] rd_data_i,

    output logic [31:0] rs1_data_o, rs2_data_o
);
    
    logic [31:0] memory [0:31];
    
    //write operation % reset
    always_ff @(posedge clk_i)
//      if(rst_ni)
        begin //write operation
          if(rd_wren_i)
            if(!(rd_addr_i == 0))
              memory [rd_addr_i] <= rd_data_i;
        end
//      else //reset
//        memory <= '{default: 32'b0};
//    initial memory = '{default:32'b0}; 
         
    //read operation      
    assign rs1_data_o = memory[rs1_addr_i];
    assign rs2_data_o = memory[rs2_addr_i];

endmodule: regfile
/* verilator lint_off UNUSED */
