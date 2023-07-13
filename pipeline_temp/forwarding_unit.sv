module forwarding_unit(
	input logic mem_rd_wren_i,
	input logic wb_rd_wren_i,
	input logic [4:0] mem_rd_addr_i,
	input logic [4:0] wb_rd_addr_i,
	input logic [4:0] ex_rs1_addr_i,
	input logic [4:0] ex_rs2_addr_i,

	output logic [1:0] forward_a_o,
	output logic [1:0] forward_b_o
);
    //R-type hazzard
    //no forward      : 00
    //forward from mem: 10
    //forward from wb : 11
    always_comb
      begin
        forward_a_o = 2'b0;
        forward_b_o = 2'b0;
        if(mem_rd_wren_i && (mem_rd_addr_i != 0) && (mem_rd_addr_i == ex_rs1_addr_i))
          forward_a_o = 2'b10;
        else if (wb_rd_wren_i && (wb_rd_addr_i != 0) && (wb_rd_addr_i == ex_rs1_addr_i))
          forward_a_o = 2'b11;
        else forward_a_o = 2'b0;

        if(mem_rd_wren_i && (mem_rd_addr_i != 0) && (mem_rd_addr_i == ex_rs2_addr_i))
          forward_b_o = 2'b10;
        else if (wb_rd_wren_i && (wb_rd_addr_i != 0) && (wb_rd_addr_i == ex_rs2_addr_i))
          forward_b_o = 2'b11;
        else forward_b_o = 2'b0;
   end
endmodule: forwarding_unit
