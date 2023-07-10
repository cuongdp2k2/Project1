    // always_latch begin : control_unit_v1
    //     case (opcode)
    //         5'b01100 : begin  // R-type
    //             br_sel_o = 1'b1 ;
    //             rd_wren_o = 1'b1 ; 
    //             op_a_sel_o = 1'b1 ;
    //             op_b_sel_o = 1'b0 ;
    //             alu_op_o = func3 ;
    //             mem_wren_o = 'x ;
    //             wb_sel_o = 2'b10 ;
    //             ls_op_o = 3'b111 ;
    //         end

    //         5'b00100 : begin // I-type
    //             br_sel_o = 1'b1 ; 
    //             rd_wren_o = 1'b1 ; 
    //             op_a_sel_o = 1'b1 ;
    //             op_b_sel_o = 1'b1 ;
    //             alu_op_o = func3 ;
    //             mem_wren_o = 1'b0 ;
    //             wb_sel_o = 2'b10 ;
    //             ls_op_o = 3'b111 ;
    //         end

    //         5'b01000 : begin // STORE-type
    //             br_sel_o = 1'b1 ; 
    //             rd_wren_o = 1'b0 ;
    //             op_a_sel_o = 1'b1 ;
    //             op_b_sel_o = 1'b1 ;
    //             alu_op_o = func3 ; 
    //             mem_wren_o = 1'b1 ;
    //             ls_op_o = instr_i[14:12] ;
    //             wb_sel_o = 2'b11 ;  
    //         end

    //         5'b00000 : begin // LOAD-type
    //             br_sel_o = 1'b1 ; 
    //             rd_wren_o = 1'b1 ; 
    //             op_a_sel_o = 1'b1 ;
    //             op_b_sel_o = 1'b1 ; 
    //             alu_op_o = func3 ;
    //             mem_wren_o = 1'b0 ;
    //             ls_op_o = instr_i[14:12] ;
    //             wb_sel_o = 2'b10 ;
    //         end

    //         5'b11000 : begin // B-type
    //             if (instr_i [14:12] == 3'b110 || instr_i[14:12] == 3'b111) begin
    //                 br_unsigned_o = 1'b1 ;
    //                 br_sel_o = 1'b0 ;
    //                 rd_wren_o = 1'b0 ;
    //                 op_a_sel_o = 1'b0 ;
    //                 op_b_sel_o = 1'b1 ;
    //                 alu_op_o = func3 ;
    //                 mem_wren_o = 1'b0 ;
    //             end else begin
    //                 br_unsigned_o = 1'b0 ;
    //                 br_sel_o = 1'b0 ;
    //                 rd_wren_o = 1'b0 ;
    //                 op_a_sel_o = 1'b0 ;
    //                 op_b_sel_o = 1'b1 ;
    //                 alu_op_o = func3 ;
    //                 mem_wren_o = 1'b0 ;
    //             end
    //             ls_op_o = 3'b111 ;
    //         end

    //         5'b11001 : begin // JALR
    //             br_sel_o = 1'b0 ;
    //             rd_wren_o = 1'b1 ;
    //             op_a_sel_o = 1'b1 ;
    //             op_b_sel_o = 1'b1 ;
    //             alu_op_o = 4'b0000 ;
    //             mem_wren_o = 1'b0 ;
    //             wb_sel_o = 2'b00 ;
    //             ls_op_o = 3'b111 ;
    //         end

    //         5'b11011 : begin // JAL
    //             br_sel_o = 1'b0 ;
    //             rd_wren_o = 1'b1 ;
    //             op_a_sel_o = 1'b0 ;
    //             op_b_sel_o = 1'b1 ;
    //             alu_op_o = 4'b0000 ;
    //             mem_wren_o = 1'b0 ;
    //             wb_sel_o = 2'b00 ;
    //             ls_op_o = 3'b111 ;
    //         end

    //         5'b00101 : begin // AUIPC
    //             br_sel_o = 1'b1 ;
    //             rd_wren_o = 1'b1 ;
    //             op_a_sel_o = 1'b0 ;
    //             op_b_sel_o = 1'b1 ;
    //             alu_op_o = 4'b0000 ;
    //             mem_wren_o = 1'b0 ;
    //             wb_sel_o = 2'b01 ;
    //             ls_op_o = 3'b111 ;
    //         end

    //         5'b01101 : begin // LUI
    //             br_sel_o = 1'b1 ;
    //             rd_wren_o = 1'b1 ;
    //             op_a_sel_o = 1'b1 ;
    //             op_b_sel_o = 1'b1 ;
    //             alu_op_o = 4'b0000 ;
    //             mem_wren_o = 1'b0 ;
    //             wb_sel_o = 2'b11 ;
    //             ls_op_o = 3'b111 ;
    //         end

    //         default: begin
    //             // default setting
    //             br_sel_o = 1'b0 ; // 0: alu , 1: pc + 4
    //             br_unsigned_o = 1'b0 ; // 0: signed , 1: unsigned 
    //             rd_wren_o = 1'b0 ; // 0: don't write rd , 1: write rd  
    //             op_a_sel_o = 1'b1 ; // 0: pc , 1: rs1
    //             op_b_sel_o = 1'b0 ; // 0: rs2 , 1: imm
    //             alu_op_o = 4'b0000 ; // default add function
    //             mem_wren_o = 1'b0 ; // 0: don't write memory , 1: write memory
    //             wb_sel_o = 2'b01 ; // 00 : pc + 4 , 01: alu , 10: memory , 11: imm
    //             ls_op_o = 3'b111 ;
    //         end
    //     endcase
    // end
    