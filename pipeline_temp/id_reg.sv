module id_reg(
  input  logic clk_i,
  input  logic reset_ni,
  input  logic enable_i,
	input  logic [31:0] instr_i,
	input  logic [31:0] pc_i,

	output logic [31:0] instr_o,
	output logic [31:0] pc_o
);

    always_ff @(posedge clk_i)
      if(!reset_ni)
        begin
          instr_o <= 32'h00000013; //nop
          pc_o    <= 0;
        end
      else if(enable_i)
        begin
          instr_o <= instr_i;
          pc_o    <= pc_i;
        end

endmodule: id_reg
