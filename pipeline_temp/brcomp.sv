/* verilator lint_off MULTITOP */
module brcomp(
    //input
    input   logic [31:0]  operand_a_i,
    input   logic [31:0]  operand_b_i,
    input   logic         br_unsigned_i,
    //output
    output  logic         br_less_o,
    output  logic         br_equal_o
);

//--------instance module--------------//
    logic br_less_u;
    logic br_less_s;
    logic br_equal_u;
    logic br_equal_s;
/* verilator lint_off PINCONNECTEMPTY */
    compare_32bit_u compare32_u(
        .a_i(operand_a_i),
        .b_i(operand_b_i),
        .equal_o(br_equal_u),
        .alarger_o(),    
        .blarger_o(br_less_u)
    );
    compare_32bit_s compare32_s(
        .a_i(operand_a_i),
        .b_i(operand_b_i),
        .equal_o(br_equal_s),
        .alarger_o(),    
        .blarger_o(br_less_s)
    );
/* verilator lint_on PINCONNECTEMPTY */
assign br_less_o = (br_unsigned_i)? br_less_u:br_less_s;
assign br_equal_o = (br_unsigned_i)? br_equal_u:br_equal_s;
endmodule
