/* verilator lint_off UNUSED */
module lsu (
    //inputs
    input logic clk_i, rst_ni,
    input logic [31:0] addr_i,
    input logic [31:0] st_data_i,
    input logic st_en_i,
    input logic [31:0] io_sw_i,
    input logic [2:0] loadsave_op_i,
    //outputs
    output logic [31:0] ld_data_o,
    output logic [31:0] io_lcd_o, io_ledg_o, io_ledr_o,
    output logic [31:0] io_hex0_o,io_hex1_o,io_hex2_o,io_hex3_o,io_hex4_o,io_hex5_o,io_hex6_o,io_hex7_o
);
/* verilator lint_off UNUSED */
    reg     [31:0]  dmem [2**12 - 1 : 0];
    reg     [31:0]  input_peri;
    reg     [31:0]  output_peri [(2**4)-1 : 0];
    logic   [ 1:0]   addr_sel; 
    logic   [31:0]  dataline1, dataline2, dataline3, dataline4, dataline5;
    logic   [31:0]  tmp_st_data, tmp_ld_data;
always_comb begin
    //if (st_en_i==1) begin //st_en = 1 la write
        case (addr_i)
            32'h1800: addr_sel = 2'b01;//sel cho input_peri
            32'h10A0, //demux cho output_peri
            32'h1090,
            32'h1080,
            32'h1070,
            32'h1060,
            32'h1050,
            32'h1040,
            32'h1030,
            32'h1020,
            32'h1010,
            32'h1000: addr_sel = 2'b10;
            default: begin  //demux cho data mem
                if (addr_i < 32'h1000) begin
                    addr_sel = 2'b11;
                end else addr_sel = 2'b00;
            end
        endcase
end
//write va read IO_SW vao output_peri 
assign input_peri = io_sw_i;
assign dataline3 = input_peri;

//xy li SH, SW, SB
always_comb begin
    case (loadsave_op_i)
        3'b000: tmp_st_data = st_data_i & 'h000000FF;   //SB
        3'b001: tmp_st_data = st_data_i & 'h0000FFFF;   //SH
        3'b010: tmp_st_data = st_data_i;                //SW
        default: tmp_st_data = '0;
    endcase
end

always_comb begin : demux1to2
    case (addr_sel)
        2'b10: dataline1 = tmp_st_data;
        2'b11: dataline2 = tmp_st_data;
        default: begin
            dataline1 = 0;
            dataline2 = 0;
        end
    endcase
end

//WRITE DATA VAO OUTPUT_PERI
always_ff @(posedge clk_i) begin
    if (st_en_i==1) begin
        if(addr_sel == 2) begin
            output_peri[addr_i[7:4]] <= dataline1;
        end
    end  
end

//WRITE DATA VAO DATA MEM
always_ff @(posedge clk_i) begin
    if (st_en_i == 1) begin
        if(addr_sel == 3) begin
            dmem[addr_i[11:0]] <= dataline2;
        end
    end
end

//READ DATA ONPUT_PERI
always_comb begin
    if (st_en_i == 0) begin
        io_lcd_o = output_peri[10];
        io_ledg_o = output_peri[9];
        io_ledr_o = output_peri[8];
        io_hex7_o = output_peri[7];
        io_hex6_o = output_peri[6];
        io_hex5_o = output_peri[5];
        io_hex4_o = output_peri[4];
        io_hex3_o = output_peri[3];
        io_hex2_o = output_peri[2];
        io_hex1_o = output_peri[1];
        io_hex0_o = output_peri[0];
        dataline4 = output_peri[addr_i[7:4]];
    end else begin
        io_lcd_o = 0;
        io_ledg_o = 0;
        io_ledr_o = 0;
        io_hex7_o = 0;
        io_hex6_o = 0;
        io_hex5_o = 0;
        io_hex4_o = 0;
        io_hex3_o = 0;
        io_hex2_o = 0;
        io_hex1_o = 0;
        io_hex0_o = 0;
        dataline4 = 0;
    end
end

//read data dmem
always_comb begin
    if (st_en_i == 0) begin
        dataline5 = dmem[addr_i[11:0]];
    end else begin
        dataline5 = 0;
    end
end

// MUX 
always_comb begin
    case (addr_sel)
        2'b01: tmp_ld_data = dataline3;
        2'b10: tmp_ld_data = dataline4;
        2'b11: tmp_ld_data = dataline5; 
        default: ld_data_o = 0;
    endcase
end
//xu ly LB, LH, LW
always_comb begin
    case (loadsave_op_i)
        3'b000: begin                                       //LB
            if (tmp_ld_data[7]==1) begin
                ld_data_o = {24'hFFFFFF,tmp_ld_data[7:0]};
            end else ld_data_o = tmp_ld_data & 'h000000FF;
        end
        3'b001: begin                                       //LH
            if (tmp_ld_data[15]==1) begin
                ld_data_o = {16'hFFFF,tmp_ld_data[15:0]};
            end else ld_data_o = tmp_ld_data & 'h0000FFFF;
        end
        3'b010: ld_data_o = tmp_ld_data;                    //LW
        3'b101: ld_data_o = tmp_ld_data & 'h0000FFFF;       //LHU
        default: ld_data_o = '0;
    endcase
end

endmodule : lsu
