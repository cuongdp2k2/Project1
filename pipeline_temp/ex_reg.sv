module ex_reg(
    input  logic clk_i,
    input  logic reset_ni,
    input  logic enable_i,
    //imem
    input  logic [31:0] instr_i,
    input  logic [31:0] pc_i,
    //regfile
    input  logic [31:0] rs1_data_i,
    input  logic [31:0] rs2_data_i,
    input  logic rd_wren_i,
    //alu
    input  logic [3:0] alu_op_i,    
    input  logic op_a_sel_i,
    input  logic op_b_sel_i,
    //brcomp
    input  logic br_unsigned_i,
    //lsu
    input  logic [2:0] mem_op_i,    
    input  logic mem_wren_i,
    input  logic is_load_i,
    //wb
    input  logic [1:0] wb_sel_i,
    //ctr sig
    input  logic is_rs2_i,
    
    //imem
    output  logic [31:0] instr_o,
    output  logic [31:0] pc_o,
    //regfile
    output  logic [31:0] rs1_data_o,
    output  logic [31:0] rs2_data_o,
    output  logic rd_wren_o,
    //alu
    output  logic [3:0] alu_op_o,    
    output  logic op_a_sel_o,
    output  logic op_b_sel_o,
    //brcomp
    output  logic br_unsigned_o,
    //lsu
    output  logic [2:0] mem_op_o,    
    output  logic mem_wren_o,
    output  logic is_load_o,
    //wb
    output  logic [1:0] wb_sel_o,
    //ctr sig
    output  logic is_rs2_o
);
    //EX Pipepline Register
    always_ff @(posedge clk_i)
      if(!reset_ni)
        begin
          //instr
          instr_o    <= 32'h00000013; // nop
          pc_o       <= 0;
          //regfile
          rd_wren_o     <= 0;
          rs1_data_o    <= 0;
          rs2_data_o    <= 0;
          //alu
          op_a_sel_o    <= 0;
          op_b_sel_o    <= 0;
          alu_op_o      <= 0;
          //brcomp
          br_unsigned_o <= 0;
          //lsu
          mem_wren_o    <= 0;
          mem_op_o      <= 0;
          is_load_o     <= 0;
          //wb
          wb_sel_o      <= 0;
          //ctr sig
          is_rs2_o      <= 0;         
        end
      else if(enable_i)
        begin
          //pc
          pc_o        <= pc_i;
          //instr
          instr_o     <= instr_i;        
          //regfile
          rs1_data_o  <= rs1_data_i;
          rs2_data_o  <= rs2_data_i;
          rd_wren_o   <= rd_wren_i;
          //alu
          op_a_sel_o  <= op_a_sel_i;
          op_b_sel_o  <= op_b_sel_i;
          alu_op_o    <= alu_op_i;
          //brcomp
          br_unsigned_o<= br_unsigned_i;
          //lsu
          mem_wren_o  <= mem_wren_i;
          mem_op_o    <= mem_op_i;
          is_load_o   <= is_load_i;
          //wb_sel
          wb_sel_o    <= wb_sel_i;
          //ctr sig
          is_rs2_o    <= is_rs2_i;
        end
endmodule: ex_reg
