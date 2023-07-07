#define MAX_SIM 200

void set_random(Vtop *dut, vluint64_t sim_unit) {
dut->br_unsigned_i=1;
dut->rs1_data_i=1;
dut->rs2_data_i=10;
}
