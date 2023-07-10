/* verilator lint_off UNUSED */
module immgen(
    // input
    input logic [31:0] data_i ,

    // output
    output logic [31:0] data_o 
);
    logic [4:0] imm_op_i = data_i[6:2] ;
    always_comb begin
        case (imm_op_i)
            5'b11001, // JALR
            5'b00000 : data_o = (data_i[14:12] == 3'b100 || data_i[14:12] == 3'b101) ? {20'b0,data_i[31:20]} : {{20{data_i[31]}},data_i[31:20]} ; // LOAD-type
            5'b00100 : data_o = (data_i[14:12] == 3'b001 || data_i[14:12] == 3'b101) ? {20'b0,data_i[31:20]} : {{20{data_i[31]}},data_i[31:20]} ; // IMMEDIATE-type
            5'b01000 : data_o = {{20{data_i[31]}},data_i[31:25],data_i[11:7]} ; // STORE-type
            5'b11000 : data_o = (data_i[14:12] == 3'b110 || data_i[14:12] == 3'b111) ? {19'b0,data_i[31],data_i[7],data_i[30:25],data_i[11:8],1'b0} : {{20{data_i[31]}},data_i[7],data_i[30:25],data_i[11:8],1'b0} ; // BRANCH-type
            5'b11011 : data_o = {{12{data_i[31]}},data_i[19:12],data_i[20],data_i[30:21],1'b0} ; // JAL
            5'b00101 ,  // LUI
            5'b01101 : data_o = {data_i[31:12],{12'b0}} ; // UPPER-type
            default  : data_o = 32'bx ; 
        endcase
    end
endmodule : immgen
