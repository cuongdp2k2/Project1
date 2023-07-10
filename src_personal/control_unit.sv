/* Document
https://www.chegg.com/homework-help/questions-and-answers/introduction-project-implement-control-unit-immediate-generator-single-cycle-risc-v-proces-q77226222
*/
/* verilator lint_off UNUSED */
module control_unit #(
    // OPCODE
    parameter R_TYPE = 5'b01100 ,
    parameter I_TYPE = 5'b00100 ,
    parameter STORE_TYPE = 5'b01000 ,
    parameter LOAD_TYPE = 5'b00000,
    parameter B_TYPE = 5'b11000,
    parameter LUI = 5'b01101 ,
    parameter JAL = 5'b11011 ,
    parameter JALR = 5'b11001 ,
    parameter AUIPC = 5'b00101 ,

    // FUNC3 FOR BRANCH
    parameter BEQ = 3'b000 ,
    parameter BNE = 3'b001 ,
    parameter BLT = 3'b100 ,
    parameter BGE = 3'b101 ,
    parameter BLTU = 3'b110 ,
    parameter BGEU = 3'b111 

) (
    // input 
    input logic [31:0] instr_i ,
    input logic br_less_i ,
    input logic br_equal_i ,
    //input logic br_greater_i ,

    // output
    output logic br_sel_o ,
    output logic br_unsigned_o ,
    output logic rd_wren_o ,
    output logic op_a_sel_o ,
    output logic op_b_sel_o ,
    output logic [3:0] alu_op_o , 
    output logic mem_wren_o ,
    output logic [2:0] ls_op_o ,
    output logic [1:0] wb_sel_o 
);
// declaration for control logic
    logic [4:0] rs2 =    instr_i [24:20] ;
    logic [4:0] rs1 =    instr_i [19:15] ;
    logic [2:0] func3 =  instr_i [14:12] ;
    logic [4:0] rd =     instr_i [11:7] ;
    logic [4:0] opcode = instr_i [6:2] ;
        
    always_comb begin : control_unit_ver2
        br_sel_o        = 1'b0; //0: pc+4, 1: from alu
        br_unsigned_o   = 1'bx;
        rd_wren_o       = 1'b0; // 1: write to reg, 0: no write
        op_a_sel_o      = 1'b0; // 0: reg, 1: pc
        op_b_sel_o      = 1'b0; // 0: reg, 1: imm
        mem_wren_o      = 1'b0; // 1: write to mem, 0: read
        alu_op_o        = 4'b0000; //default ADD
        wb_sel_o        = 2'b00; //00: wb alu, 01: wb ld_data, 10:wb pc+4, 11: wb imm(for LUI)
        ls_op_o         = 3'b010 ; // 
        case (opcode)
            R_TYPE: begin
                alu_op_o  = {instr_i[30], func3};
                rd_wren_o = 1'b1;
            end
            I_TYPE: begin
                rd_wren_o       = 1;
                op_b_sel_o      = 1;
                if (func3 == 3'b101) begin
                    alu_op_o    = {instr_i[30], func3};
                end else begin
                    alu_op_o    = {1'b0, func3};
                end
            end
            LOAD_TYPE: begin
                op_b_sel_o  = 1'b1;
                rd_wren_o   = 1'b1;
                wb_sel_o    = 2'b01;
                //for lh,lb,lw,lhu
                ls_op_o = func3;
            end
            STORE_TYPE: begin
                op_b_sel_o  = 1'b1;
                mem_wren_o  = 1'b1;
                //for sw sh sb
                ls_op_o = func3;
            end
            B_TYPE: begin
                op_a_sel_o  = 1 ;
                op_b_sel_o  = 1 ;
                case (func3)
                    BEQ:     br_sel_o    = br_equal_i;
                    BNE:     br_sel_o    = !br_equal_i;
                    BLT:     br_sel_o    = br_less_i;
                    BGE:     br_sel_o    = !br_less_i;
                    BLTU:    br_sel_o    = br_less_i;
                    BGEU:    br_sel_o    = !br_less_i;
                    default: br_sel_o    = 'x;
                endcase
                br_unsigned_o = ((func3 == BLTU) || (func3 == BGEU));
            end
            JAL: begin
                br_sel_o    = 1;
                op_a_sel_o  = 1;
                op_b_sel_o  = 1;
                rd_wren_o   = 1;
                wb_sel_o    = 2'b10;
            end
            JALR: begin
                br_sel_o    = 1;
                op_b_sel_o  = 1;
                rd_wren_o   = 1;
                wb_sel_o    = 2'b10;  
            end
            LUI: begin
                rd_wren_o   = 1;
                wb_sel_o    = 2'b11;
            end
            AUIPC: begin
                op_a_sel_o  = 1;
                op_b_sel_o  = 1;
                rd_wren_o   = 1;
            end
            default: begin
                rd_wren_o   = 'x;
                mem_wren_o  = 'x;
            end
        endcase
    end
endmodule : control_unit 

