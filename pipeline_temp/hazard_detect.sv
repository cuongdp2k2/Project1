/* verilator lint_off UNUSED */
module hazard_detect(
  input logic [31:0] id_instr_i,
  input logic [31:0] ex_instr_i,
  input logic ex_rd_wren_i,
	input logic mem_rd_wren_i,
	input logic wb_rd_wren_i,
	input logic br_sel_i,
	input logic id_is_rs2_i,

  input logic [4:0] ex_rd_addr_i,
	input logic [4:0] mem_rd_addr_i,
	input logic [4:0] wb_rd_addr_i,
	input logic [4:0] id_rs1_addr_i,
	input logic [4:0] id_rs2_addr_i,
	
	output logic pc_enable_o,
	output logic id_enable_o,
	output logic ex_enable_o,
	output logic mem_enable_o,
	output logic wb_enable_o,
	
	output logic id_reset_no,
	output logic ex_reset_no,	
	output logic mem_reset_no,
	output logic wb_reset_no
);

      logic  hazard_1, hazard_2, hazard_3;
      logic  id_is_jump, ex_is_jump;

      assign id_is_jump = (id_instr_i[6:2] == 5'b11011) || (id_instr_i[6:2] == 5'b11001) || (id_instr_i[6:2] == 5'b11000);
      assign ex_is_jump = (ex_instr_i[6:2] == 5'b11011) || (ex_instr_i[6:2] == 5'b11001) || (ex_instr_i[6:2] == 5'b11000);
      assign hazard_1 = wb_rd_wren_i && (wb_rd_addr_i  != 5'b0)
                             && ((wb_rd_addr_i == id_rs1_addr_i) || ((wb_rd_addr_i == id_rs2_addr_i) && id_is_rs2_i));
                             
      assign hazard_2 = mem_rd_wren_i && (mem_rd_addr_i  != 5'b0)
                             && ((mem_rd_addr_i == id_rs1_addr_i) || ((mem_rd_addr_i == id_rs2_addr_i) && id_is_rs2_i));
                             
      assign hazard_3 = ex_rd_wren_i && (ex_rd_addr_i  != 5'b0)
                             && ((ex_rd_addr_i == id_rs1_addr_i) || ((ex_rd_addr_i == id_rs2_addr_i) && id_is_rs2_i));                                     
      
      always_comb
        begin
          pc_enable_o = 1'b1;
          id_enable_o = 1'b1;
          ex_enable_o = 1'b1;
          mem_enable_o= 1'b1;
          wb_enable_o = 1'b1;   

          id_reset_no = 1'b1;
          ex_reset_no = 1'b1; 
          mem_reset_no= 1'b1;  
          wb_reset_no = 1'b1; 
               
          if(hazard_1 || hazard_2 || hazard_3)
            begin
              pc_enable_o = br_sel_i;
              id_enable_o = 1'b0;
              ex_reset_no = 1'b0;           
            end
          else if(id_is_jump)
            begin
              pc_enable_o = 1'b0;
              id_reset_no = 1'b0;              
            end
          else if(ex_is_jump)
            if(br_sel_i)
              id_reset_no = 1'b0;
        end
       
endmodule: hazard_detect
/* verilator lint_off UNUSED */
