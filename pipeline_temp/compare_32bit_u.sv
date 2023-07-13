/* verilator lint_off MULTITOP */
module compare_32bit_u (
    //input
    input logic [31:0] a_i,
    input logic [31:0] b_i,
    //output
    output logic equal_o,
    output logic alarger_o,
    output logic blarger_o
);
     // variable temple
    logic [1:0] el_t;
    logic [1:0] al_t;
    
    assign equal_o    = &el_t;
    assign alarger_o  = al_t[1]|(al_t[0]&el_t[1]);
    assign blarger_o  = ~(equal_o|alarger_o);            
    /* verilator lint_off PINCONNECTEMPTY */
    compare_16bit compare160(.a_i(a_i[15:0]),.b_i(b_i[15:0]),.equal_o(el_t[0]),.alarger_o(al_t[0]),.blarger_o());
    compare_16bit compare161(.a_i(a_i[31:16]),.b_i(b_i[31:16]),.equal_o(el_t[1]),.alarger_o(al_t[1]),.blarger_o());

    
endmodule: compare_32bit_u
