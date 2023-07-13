/* verilator lint_off UNUSED */
module ctr_unit_pipeline(
    input logic [31:0] instr_i,

    output logic rd_wren_o, op_a_sel_o, op_b_sel_o, mem_wren_o, is_load_o, br_unsigned_o, is_rs2_o,
    output logic [3:0] alu_op_o,
    output logic [2:0] mem_op_o,
    output logic [1:0] wb_sel_o
);
	 logic [2:0] func3;
	 assign func3 = instr_i[14:12];
/* verilator lint_off UNUSED */      
		always_comb
		  begin
			  rd_wren_o = 1'b0; //WRITE TO RD
			  op_a_sel_o = 1'b0; // 0: RS1, 1: PC
			  op_b_sel_o = 1'b0; // 0: RS2, 1: IMM
			  mem_wren_o = 1'b0; //WRITE TO MEM
			  alu_op_o = 4'b0; //ALU_OP default +
			  mem_op_o = 3'bx; //MEM_OP
			  wb_sel_o = 2'b0; // 0: ALU_DATA, 1: LD_DATA, 2: PC_FOUR
			  is_load_o= 1'b0; 
			  br_unsigned_o = 1'bx;
			  is_rs2_o = 1'b0;
			  case(instr_i[6:2])
			    5'b00000: //load
				   begin
					  rd_wren_o = 1'b1;
					  op_b_sel_o = 1'b1;
					  mem_op_o = func3;
					  wb_sel_o = 2'b01;
					  is_load_o = 1'b1;
					end
			    5'b00100: // Imm
				   begin
					  rd_wren_o = 1'b1;
					  op_b_sel_o = 1'b1;
					  alu_op_o = {((func3 == 3'b001)||(func3 == 3'b101)) ? instr_i[30] : 1'b0 ,func3};
					end
				 5'b01000: // store
				   begin
					  op_a_sel_o = 1'b0;
					  op_b_sel_o = 1'b1;
					  mem_wren_o = 1'b1;
					  mem_op_o = func3;
					  is_rs2_o = 1'b1;
					end
				5'b11000: //br_unsigned
				  begin
                    case(func3)
                      3'b110: //BLTU
                        br_unsigned_o = 1'b1;
                      3'b111: //BGEU
                        br_unsigned_o = 1'b1;
                     default: br_unsigned_o = 1'b0;
                    endcase
                    op_a_sel_o = 1'b1;
                    op_b_sel_o = 1'b1;    
                    is_rs2_o   = 1'b1;                
				  end
			    5'b00101: //AUIPC
				   begin
					  rd_wren_o = 1'b1;
					  op_a_sel_o = 1'b1;
					  op_b_sel_o = 1'b1;					  
					end
				 5'b01101: //LUI
				   begin
					  rd_wren_o = 1'b1;
					  op_b_sel_o = 1'b1;		
	                  alu_op_o = 4'b1001; //alu_Data = operand_b;				  
					end
				 5'b11011: //JAL
				   begin
					  rd_wren_o = 1'b1;
					  op_a_sel_o = 1'b1;
					  op_b_sel_o = 1'b1;
					  wb_sel_o = 2'b10;
					end
				 5'b11001: //JALR
				   begin
					  rd_wren_o = 1'b1;
					  op_b_sel_o = 1'b1;
					  wb_sel_o = 2'b10;				
					end
				 5'b01100: //OP
				   begin
					  rd_wren_o = 1'b1;
					  alu_op_o = {instr_i[30] ,instr_i[14:12]};
					  is_rs2_o = 1'b1;
					end
				 default: 
				   begin
					  rd_wren_o = 1'bx;
					  mem_wren_o = 1'bx;
					end
			  endcase
		  end	
endmodule: ctr_unit_pipeline
