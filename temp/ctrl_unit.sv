module ctrl_unit #(
    //OPCODE
    parameter OPCODE_ALU     =  5'B01100,
    parameter OPCODE_ALU_I   =  5'B00100,
    parameter OPCODE_LOAD    =  5'B00000,
    parameter OPCODE_STORE   =  5'B01000,
    parameter OPCODE_BRANCH  =  5'B11000,
    parameter OPCODE_JAL     =  5'B11011,
    parameter OPCODE_JALR    =  5'B11001,
    parameter OPCODE_LUI     =  5'B01101,
    parameter OPCODE_AUIPC   =  5'B00101,
    //FUNCT3 FOR BRANCHES
    parameter FUNCT3_BEQ     =  3'B000,
    parameter FUNCT3_BNE     =  3'B001,
    parameter FUNCT3_BLT     =  3'B100,
    parameter FUNCT3_BGE     =  3'B101,
    parameter FUNCT3_BLTU    =  3'B110,
    parameter FUNCT3_BGEU    =  3'B111
) (/* verilator lint_off UNUSED */
    //inputs
    input logic [31:0] instr_i,
    input logic br_less_i, br_equal_i,
    //outputs
    output logic br_sel_o, br_unsigned_o, rd_wren_o, op_a_sel_o, op_b_sel_o, mem_wren_o,
    output logic [3:0] alu_op_o,
    output logic [2:0] loadsave_op_o,
    output logic [1:0] wb_sel_o
);/* verilator lint_off UNUSED */
    logic [4:0] OPCODE;
    logic [2:0] FUNCT3;

    assign OPCODE = instr_i[6:2];
    assign FUNCT3 = instr_i[14:12];

    always_comb begin
        br_sel_o        = '0; //0: pc+4, 1: from alu
        br_unsigned_o   = 'x;
        rd_wren_o       = '0; // 1: write to reg, 0: no write
        op_a_sel_o      = '0; // 0: reg, 1: pc
        op_b_sel_o      = '0; // 0: reg, 1: imm
        mem_wren_o      = '0; // 1: write to mem, 0: read
        alu_op_o        = 4'b0000; //default ADD
        wb_sel_o        = 2'b00; //00: wb alu, 01: wb data, 10:wb pc+4, 11: wb imm(for LUI)
        loadsave_op_o   = 3'b000 ;
        case (OPCODE)
            OPCODE_ALU: begin
                alu_op_o  = {instr_i[30], FUNCT3};
                rd_wren_o = 1;
            end
            OPCODE_ALU_I: begin
                rd_wren_o       = 1;
                op_b_sel_o      = 1;
                if (FUNCT3 == 3'b101) begin
                    alu_op_o    = {instr_i[30], FUNCT3};
                end else begin
                    alu_op_o    = {1'b0, FUNCT3};
                end
            end
            OPCODE_LOAD: begin
                op_b_sel_o  = 1;
                rd_wren_o   = 1;
                wb_sel_o    = 2'b01;
                //for lh,lb,lw,lhu
                loadsave_op_o = FUNCT3;
            end
            OPCODE_STORE: begin
                op_b_sel_o  = 1;
                mem_wren_o  = 1;
                //for sw sh sb
                loadsave_op_o = FUNCT3;
            end
            OPCODE_BRANCH: begin
                op_a_sel_o  = 1;
                op_b_sel_o  = 1;
                case (FUNCT3)
                    FUNCT3_BEQ: br_sel_o    = br_equal_i;
                    FUNCT3_BNE: br_sel_o    = !br_equal_i;
                    FUNCT3_BLT: br_sel_o    = br_less_i;
                    FUNCT3_BGE: br_sel_o    = !br_less_i;
                    FUNCT3_BLTU: br_sel_o   = br_less_i;
                    FUNCT3_BGEU: br_sel_o   = !br_less_i;
                    default: br_sel_o = 'x;
                endcase
                br_unsigned_o = ((FUNCT3 == FUNCT3_BLTU) || (FUNCT3 == FUNCT3_BGEU));
            end
            OPCODE_JAL: begin
                br_sel_o    = 1;
                op_a_sel_o  = 1;
                op_b_sel_o  = 1;
                rd_wren_o   = 1;
                wb_sel_o    = 2'b10;
            end
            OPCODE_JALR: begin
                br_sel_o    = 1;
                op_b_sel_o  = 1;
                rd_wren_o   = 1;
                wb_sel_o    = 2'b10;  
            end
            OPCODE_LUI: begin
                rd_wren_o   = 1;
                wb_sel_o    = 2'b11;
            end
            OPCODE_AUIPC: begin
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
endmodule : ctrl_unit
