#define MAX_SIM 200

void set_random(Vtop *dut, vluint64_t sim_unit) {
dut->alu_op_i = 3 ;
dut->operand_a_i = 19; //4294967286
dut->operand_b_i = -10;
}
