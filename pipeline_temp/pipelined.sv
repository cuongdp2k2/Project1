/*
5 stage: 
	1. IF (instruction fetch): PC, PC+4, IMEM, PC_sel_mux
	2. ID (instruction Decode): regfile,  control_unit
	3. EX (instruction excecute): brcomp, op_a_sel, op_b_sel, alu, immgen
	4. MEM (memory access): lsu
	5. WB (write back): wb_data, wb_sel_mux
*/
/* verilator lint_off PINMISSING */
module pipelined (
    input logic clk_i,
    input logic rst_ni,

    //peripherals
    input  logic [31:0] io_sw_i,
	
	output logic [31:0] io_lcd_o, io_ledg_o, io_ledr_o, 
	                    io_hex0_o, io_hex1_o, io_hex2_o, io_hex3_o, 
	                    io_hex4_o, io_hex5_o, io_hex6_o, io_hex7_o //, pc_debug_o 
);    
	localparam PL_IF  = 0; //instruction fetch
	localparam PL_ID  = 1; //instruction decode
	localparam PL_EX  = 2; //instruction execute
	localparam PL_MEM = 3; //memory access
	localparam PL_WB  = 4; //write back
	//reset
	logic        id_reset_n, ex_reset_n, mem_reset_n, wb_reset_n;
	logic        enable      [PL_ID : PL_WB];
	//imem
	logic [31:0] instr       [PL_IF : PL_WB];
	logic [31:0] pc          [PL_IF : PL_WB];
	logic        pc_enable;
	//regfile
	logic [31:0] rs1_data    [PL_ID : PL_EX];
	logic [31:0] rs2_data    [PL_ID : PL_MEM];
	logic        rd_wren     [PL_ID : PL_WB];	
	//alu
	logic [31:0] ex_alu_data, mem_alu_data, wb_alu_data;
	logic [3:0]  alu_op      [PL_ID : PL_EX];
	logic        op_a_sel    [PL_ID : PL_EX];
	logic        op_b_sel    [PL_ID : PL_EX];
    logic [31:0] operand_a;
    logic [31:0] operand_b;
    logic [1:0]  forward_a;
    logic [1:0]  forward_b;

	//lsu
	logic [2:0]  mem_op      [PL_ID : PL_MEM];
	logic        mem_wren    [PL_ID : PL_WB];
	logic        is_load     [PL_ID : PL_WB];
	logic [31:0] ld_data     [PL_MEM: PL_WB];
	//wb
	logic [31:0] wb_data     [PL_WB : PL_WB];
	logic [1:0]  wb_sel      [PL_ID : PL_WB];
    //pc
	logic [31:0] pc_IF_four;
    logic [31:0] pc_WB_four;
    logic [31:0] nxt_pc;
    //immgen
    logic [31:0] imm;
    //brcomp
    logic        br_unsigned [PL_ID : PL_EX];
    logic        br_sel;
    logic [31:0] wb_rs1_data, wb_rs2_data;
    //ctr sig
    logic        is_rs2      [PL_ID : PL_EX];

    //ID Pipeline Register
    id_reg id_reg1 (
    	.clk_i(clk_i),
    	.reset_ni(id_reset_n),
    	.enable_i(enable[PL_ID]),
    	
    	.instr_i(instr[PL_IF]),
    	.pc_i (pc[PL_IF]),

    	.instr_o(instr[PL_ID]),
    	.pc_o(pc[PL_ID])
    );
    
    //EX Pipepline Register
    ex_reg ex_reg1 (
    	.clk_i(clk_i),
    	.reset_ni(ex_reset_n),
    	.enable_i(enable[PL_EX]),    	
    	//imem
    	.instr_i(instr[PL_ID]),
    	.pc_i (pc[PL_ID]),
        //regfile
        .rs1_data_i(rs1_data[PL_ID]),
        .rs2_data_i(rs2_data[PL_ID]),
        .rd_wren_i(rd_wren[PL_ID]),
        //alu
        .alu_op_i(alu_op[PL_ID]),
        .op_a_sel_i(op_a_sel[PL_ID]),
        .op_b_sel_i(op_b_sel[PL_ID]),
        //brcomp
        .br_unsigned_i(br_unsigned[PL_ID]),
        //lsu
        .mem_op_i(mem_op[PL_ID]),
        .mem_wren_i(mem_wren[PL_ID]),
        .is_load_i(is_load[PL_ID]),
        //wb
        .wb_sel_i(wb_sel[PL_ID]),
        //ctr sig
        .is_rs2_i(is_rs2[PL_ID]),

    	//imem
    	.instr_o(instr[PL_EX]),
    	.pc_o (pc[PL_EX]),
        //regfile
        .rs1_data_o(rs1_data[PL_EX]),
        .rs2_data_o(rs2_data[PL_EX]),
        .rd_wren_o(rd_wren[PL_EX]),
        //alu
        .alu_op_o(alu_op[PL_EX]),
        .op_a_sel_o(op_a_sel[PL_EX]),
        .op_b_sel_o(op_b_sel[PL_EX]),
        //brcomp
        .br_unsigned_o(br_unsigned[PL_EX]),
        //lsu
        .mem_op_o(mem_op[PL_EX]),
        .mem_wren_o(mem_wren[PL_EX]),
        .is_load_o(is_load[PL_EX]),
        //wb
        .wb_sel_o(wb_sel[PL_EX]),   
        //ctr sig
        .is_rs2_o(is_rs2[PL_EX])
    );        
    
    //MEM Pipepline Register   
    mem_reg mem_reg1 (
    	.clk_i(clk_i),
    	.reset_ni(mem_reset_n),
    	.enable_i(enable[PL_MEM]),    	
    	//imem
    	.instr_i(instr[PL_EX]),
    	.pc_i (pc[PL_EX]),
        //regfile
        .rs2_data_i(rs2_data[PL_EX]),
        .rd_wren_i(rd_wren[PL_EX]),
        //alu
        .alu_data_i(ex_alu_data),
        //lsu
        .mem_op_i(mem_op[PL_EX]),
        .mem_wren_i(mem_wren[PL_EX]),
        .is_load_i(is_load[PL_EX]),
        //wb
        .wb_sel_i(wb_sel[PL_EX]),

    	//imem
    	.instr_o(instr[PL_MEM]),
    	.pc_o (pc[PL_MEM]),
        //regfile
        .rs2_data_o(rs2_data[PL_MEM]),
        .rd_wren_o(rd_wren[PL_MEM]),
        //alu
        .alu_data_o(mem_alu_data),
        //lsu
        .mem_op_o(mem_op[PL_MEM]),
        .mem_wren_o(mem_wren[PL_MEM]),
        .is_load_o(is_load[PL_MEM]),
        //wb
        .wb_sel_o(wb_sel[PL_MEM])       
    );    
        
    //WB Pipepline Register
    wb_reg wb_reg1 (
    	.clk_i(clk_i),
    	.reset_ni(wb_reset_n),
    	.enable_i(enable[PL_WB]),    	
    	//imem
    	.instr_i(instr[PL_MEM]),
    	.pc_i(pc[PL_MEM]),
        //regfile
        .rd_wren_i(rd_wren[PL_MEM]),
        //alu
        .alu_data_i(mem_alu_data),
        //lsu
        .mem_wren_i(mem_wren[PL_MEM]),
        .is_load_i(is_load[PL_MEM]),
        .ld_data_i(ld_data[PL_MEM]),
        //wb
        .wb_sel_i(wb_sel[PL_MEM]),
        
    	//imem
    	.instr_o(instr[PL_WB]),
    	.pc_o(pc[PL_WB]),
        //regfile
        .rd_wren_o(rd_wren[PL_WB]), 
        //alu
        .alu_data_o(wb_alu_data),    
        //lsu
        .mem_wren_o(mem_wren[PL_WB]),
        .is_load_o(is_load[PL_WB]),
        .ld_data_o(ld_data[PL_WB]),
        //wb
        .wb_sel_o(wb_sel[PL_WB])      
    );

    hazard_detect hazard_detect1(
        .id_instr_i(instr[PL_ID]),
        .ex_instr_i(instr[PL_EX]),
        .ex_rd_wren_i (rd_wren[PL_EX]),
    	.mem_rd_wren_i(rd_wren[PL_MEM]),
    	.wb_rd_wren_i (rd_wren[PL_WB]),
    	.ex_rd_addr_i (instr[PL_EX][11:7]),
    	.mem_rd_addr_i(instr[PL_MEM][11:7]),
    	.wb_rd_addr_i (instr[PL_WB][11:7]),
    	.id_rs1_addr_i(instr[PL_ID][19:15]),
    	.id_rs2_addr_i(instr[PL_ID][24:20]),
    	.br_sel_i     (br_sel),
    	.id_is_rs2_i  (is_rs2[PL_ID]),
 

    	.id_enable_o (enable  [PL_ID]),
    	.ex_enable_o (enable  [PL_EX]),
    	.mem_enable_o(enable  [PL_MEM]),
    	.wb_enable_o (enable  [PL_WB]),
    	.pc_enable_o (pc_enable),
    	
       	.id_reset_no (id_reset_n),
    	.ex_reset_no (ex_reset_n),
    	.mem_reset_no(mem_reset_n),
    	.wb_reset_no (wb_reset_n)
    );

     forwarding_unit forwarding_unit1(
    	.mem_rd_wren_i(rd_wren[PL_MEM]),
    	.wb_rd_wren_i(rd_wren[PL_WB]),
    	.mem_rd_addr_i(instr[PL_MEM][11:7]),
    	.wb_rd_addr_i(instr[PL_WB][11:7]),
    	.ex_rs1_addr_i(instr[PL_EX][19:15]),
    	.ex_rs2_addr_i(instr[PL_EX][24:20]),

    	.forward_a_o(forward_a),
    	.forward_b_o(forward_b)
    );

    inst_memory inst_memory1 (
        .clk_i (clk_i),
        .paddr_i(pc[PL_IF][12:0]),
        .rst_ni(rst_ni),

        .prdata_o(instr[PL_IF])
    );
 
    regfile regfile1 (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .rd_wren_i(rd_wren[PL_WB]),
        .rs1_addr_i(instr[PL_ID][19:15]),
        .rs2_addr_i(instr[PL_ID][24:20]),
        .rd_addr_i(instr[PL_WB][11:7]),
        .rd_data_i(wb_data[PL_WB]),

        .rs1_data_o(rs1_data[PL_ID]),
        .rs2_data_o(rs2_data[PL_ID])
    );

    brcomp_pipeline brcomp1 (
        .instr_i(instr[PL_EX]),
        .operand_a_i(rs1_data[PL_EX]),
        .operand_b_i(rs2_data[PL_EX]),
        .br_unsigned_i(br_unsigned[PL_EX]),

        .br_sel_o(br_sel)
    );

    alu alu1 (
        .operand_a_i(operand_a),
        .operand_b_i(operand_b), 
        .alu_op_i(alu_op[PL_EX]),

        .alu_data_o(ex_alu_data)
    );

   lsu lsu1 (
        .clk_i(clk_i),
        .rst_ni(rst_ni),
        .st_en_i(mem_wren[PL_MEM]),
        .addr_i(mem_alu_data),
        .st_data_i(rs2_data[PL_MEM]),
        .io_sw_i(io_sw_i),
        .mem_op_i(mem_op[PL_MEM]),

        .ld_data_o(ld_data[PL_MEM]),
        .io_lcd_o(io_lcd_o),
        .io_ledg_o(io_ledg_o),
        .io_ledr_o(io_ledr_o),
        .io_hex0_o(io_hex0_o),
        .io_hex1_o(io_hex1_o),
        .io_hex2_o(io_hex2_o),
        .io_hex3_o(io_hex3_o),
        .io_hex4_o(io_hex4_o),
        .io_hex5_o(io_hex5_o),
        .io_hex6_o(io_hex6_o),
        .io_hex7_o(io_hex7_o)
    );

    ctr_unit_pipeline ctr_unit1 (
        .instr_i(instr[PL_ID]),

        .rd_wren_o(rd_wren[PL_ID]),
        .br_unsigned_o(br_unsigned[PL_ID]),
        .op_a_sel_o(op_a_sel[PL_ID]),
        .op_b_sel_o(op_b_sel[PL_ID]),
        .mem_wren_o(mem_wren[PL_ID]),
        .is_load_o(is_load[PL_ID]),
        .alu_op_o(alu_op[PL_ID]),
        .mem_op_o(mem_op[PL_ID]),
        .wb_sel_o(wb_sel[PL_ID]),
        .is_rs2_o(is_rs2[PL_ID])
    );

    immgen immgen1(
        .instr_i(instr[PL_EX]),

        .imm_o(imm)
    );	

    //pc = pc + 4
    assign pc_IF_four  = pc[PL_IF] + 32'h4;
    assign pc_WB_four  = pc[PL_WB] + 32'h4;
    //next pc select mux
    always_comb
      case(br_sel)
        1'b0: nxt_pc = pc_IF_four;
        1'b1: nxt_pc = ex_alu_data;
        default: nxt_pc = pc_IF_four;
      endcase
    //pc
    always_ff @(posedge clk_i)
      if(rst_ni)
        begin
          if(pc_enable)
            pc[PL_IF] <= nxt_pc;
          else
            pc[PL_IF] <= pc[PL_IF];
        end
      else
        pc[PL_IF] <= 32'h0;
    //operand_a_sel mux
    always_comb
        case(op_a_sel[PL_EX])
          1'b0: operand_a = wb_rs1_data;
          1'b1: operand_a = pc[PL_EX];
          default: operand_a = wb_rs1_data;
        endcase
    //operand_b_sel mux
    always_comb
        case(op_b_sel[PL_EX])
          1'b0: operand_b = wb_rs2_data;
          1'b1: operand_b = imm;
          default: operand_b = wb_rs2_data;
        endcase
    //wb_rs1_data           
    always_comb
      case(forward_a)
        2'b00: wb_rs1_data = rs1_data[PL_EX]; //no forward
        2'b10: wb_rs1_data = mem_alu_data;    //forward from mem
        2'b11: wb_rs1_data = wb_data[PL_WB];  //forward from wb
        default: wb_rs1_data = 32'b0;
      endcase
    //wb_rs2_data
    always_comb
      case(forward_b)
        2'b00: wb_rs2_data = rs2_data[PL_EX]; //no forward
        2'b10: wb_rs2_data = mem_alu_data;    //forward from mem
        2'b11: wb_rs2_data = wb_data[PL_WB];  //forward from wb
        default: wb_rs2_data = 32'b0;
      endcase
        
    //wb_data_sel mux
    always_comb
      case(wb_sel[PL_WB])
        2'b00: wb_data[PL_WB] = wb_alu_data;
        2'b01: wb_data[PL_WB] = ld_data[PL_WB];
        2'b10: wb_data[PL_WB] = pc_WB_four;
        default: wb_data[PL_WB] = 32'b0;
      endcase
endmodule: pipelined	

