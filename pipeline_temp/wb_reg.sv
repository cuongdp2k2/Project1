module wb_reg(
    input  logic clk_i,
    input  logic reset_ni,
    input  logic enable_i,
    //imem
    input  logic [31:0] instr_i,
    input  logic [31:0] pc_i,
    //regfile
    input  logic rd_wren_i,
    //alu
    input  logic [31:0] alu_data_i,
    //lsu
    input  logic mem_wren_i,
    input  logic is_load_i,
    input  logic [31:0] ld_data_i,
    //wb
    input  logic [1:0] wb_sel_i,

    //imem
    output  logic [31:0] instr_o,
    output  logic [31:0] pc_o,
    //regfile
    output  logic rd_wren_o,
    //alu
    output  logic [31:0] alu_data_o,
    //lsu
    output  logic mem_wren_o,
    output  logic is_load_o,
    output  logic [31:0] ld_data_o,
    //wb
    output  logic [1:0] wb_sel_o
);

    //WB Pipepline Register
    always_ff @(posedge clk_i)
      if(!reset_ni)
        begin
          //instr
          instr_o    <= 32'h00000013; //nop
          //regfile
          rd_wren_o  <= 0;
          //alu
          alu_data_o <= 0;
          //lsu
          mem_wren_o <= 0;
          ld_data_o  <= 0;
          //wb
          wb_sel_o   <= 0;
        end
      else if(enable_i)
        begin
          //instr
          instr_o     <= instr_i;
          pc_o        <= pc_i;
          //regfile
          rd_wren_o   <= rd_wren_i;
          //alu
          alu_data_o  <= alu_data_i;
          //lsu
          mem_wren_o  <= mem_wren_i;
          is_load_o   <= is_load_i;
          ld_data_o   <= ld_data_i;
          //wb
          wb_sel_o    <= wb_sel_i;
        end
endmodule: wb_reg
