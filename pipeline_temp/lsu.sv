/* verilator lint_off UNUSED */
module lsu(
    input logic clk_i, rst_ni, st_en_i,
    input logic [31:0] addr_i,
    input logic [31:0] st_data_i,
    input logic [31:0] io_sw_i,
    input logic [2:0] mem_op_i,
    
    output logic [31:0] ld_data_o, io_lcd_o, io_ledg_o, io_ledr_o, io_hex0_o, 
                        io_hex1_o, io_hex2_o, io_hex3_o, io_hex4_o, 
                        io_hex5_o, io_hex6_o, io_hex7_o
);
    logic [3:0][7:0] memory [2**8 - 1 : 0];
    logic [3:0][7:0] input_peri;
    logic [3:0][7:0] output_peri[2**6 - 1 : 0];
    logic [3:0][7:0] dataout_1, dataout_2, dataout_3, temp_ld_data;    
    
    logic [3:0] mask;

    initial 
    begin
      memory = '{default: 32'b0};
      input_peri = 32'b0;
      output_peri = '{default:32'b0};
    end

    //mux
    always_comb
      case(addr_i[10:8])
        3'b000: temp_ld_data = dataout_1;
        3'b001: temp_ld_data = dataout_1;
        3'b010: temp_ld_data = dataout_1;
        3'b011: temp_ld_data = dataout_1;
        3'b100: temp_ld_data = dataout_2;
        3'b101: temp_ld_data = dataout_3; 
        default: temp_ld_data = 32'bx;
      endcase

    //mask
    always_comb
        case (mem_op_i[1:0])
          2'b00: //store load byte
            if(addr_i[1:0] == 2'b00)
              mask = 4'b0001;
            else if(addr_i[1:0] == 2'b01)
              mask = 4'b0010;
            else if(addr_i[1:0] == 2'b10)
              mask = 4'b0100;
            else
              mask = 4'b1000;
          2'b01: //store load half word
            if(addr_i[1:0] == 2'b00)
              mask = 4'b0011;
            else if(addr_i[1:0] == 2'b01)
              mask = 4'b0011;
            else if(addr_i[1:0] == 2'b10)
              mask = 4'b1100;
            else
              mask = 4'b1100;
          2'b10: //store load word
            mask = 4'b1111;
          default: mask = 4'bxxxx;
      endcase
     
    //input peripheral
    //write operations
    assign input_peri = io_sw_i;
    
    //read operation (dataout 3)
		always_comb
      begin 
        dataout_3 = 32'b0;
        if(!st_en_i)
          if(mem_op_i[1:0] == 2'b00) //byte
            begin
              if((mask & 4'b0001) == 4'b0001)
                dataout_3[0] = input_peri[0];
              if((mask & 4'b0010) == 4'b0010)
                dataout_3[0] = input_peri[1];
              if((mask & 4'b0100) == 4'b0100)
                dataout_3[0] = input_peri[2];
              if((mask & 4'b1000) == 4'b1000)
                dataout_3[0] = input_peri[3];                                    
            end
          else if(mem_op_i[1:0] == 2'b01) // half word
            begin
              if((mask & 4'b0011) == 4'b0011)
                dataout_3[1:0] = {input_peri[1], input_peri[0]};
              if((mask & 4'b1100) == 4'b1100)    
                dataout_3[1:0] = {input_peri[3], input_peri[2]};           
            end
          else dataout_3  = input_peri; //word
        else dataout_3 = 32'b0;
      end
	
    //output peripheral
    //write operation datain_2
      always_ff @(posedge clk_i)
        if((addr_i[10:8] == 3'b100) && st_en_i)
          begin
            if((mask & 4'b0001) == 4'b0001)
              output_peri[addr_i[7:2]][0] <= st_data_i[7:0];
            if((mask & 4'b0010) == 4'b0010)
              output_peri[addr_i[7:2]][1] <= st_data_i[15:8];
            if((mask & 4'b0100) == 4'b0100)
              output_peri[addr_i[7:2]][2] <= st_data_i[23:16];
            if((mask & 4'b1000) == 4'b1000)
              output_peri[addr_i[7:2]][3] <= st_data_i[31:24];                                          
          end
          
    //read operation dataout_2
    always_comb
      begin
        dataout_2 = 32'b0;
        if(!st_en_i)
          if(mem_op_i[1:0] == 2'b00) //byte
            begin
              if((mask & 4'b0001) == 4'b0001)
                dataout_2[0] = output_peri[addr_i[7:2]][0];
              if((mask & 4'b0010) == 4'b0010)
                dataout_2[0] = output_peri[addr_i[7:2]][1];
              if((mask & 4'b0100) == 4'b0100)
                dataout_2[0] = output_peri[addr_i[7:2]][2];
              if((mask & 4'b1000) == 4'b1000)
                dataout_2[0] = output_peri[addr_i[7:2]][3];                                    
            end
          else if(mem_op_i[1:0] == 2'b01) // half word
            begin
              if((mask & 4'b0011) == 4'b0011)    
                dataout_2[1:0] = {output_peri[addr_i[7:2]][1], output_peri[addr_i[7:2]][0]};
              if((mask & 4'b1100) == 4'b1100)    
                dataout_2[1:0] = {output_peri[addr_i[7:2]][3], output_peri[addr_i[7:2]][2]};          
            end
          else dataout_2  = output_peri[addr_i[7:2]]; //word
        else dataout_2 = 32'b0;
      end

          assign io_lcd_o  = output_peri [6'h28]; // A0 >> 2 = 28
          assign io_ledg_o = output_peri [6'h24]; // 90 >> 2 = 24
          assign io_ledr_o = output_peri [6'h20]; // 80 >> 2 = 20
          assign io_hex7_o = output_peri [6'h1C]; // 70 >> 2 = 1C
          assign io_hex6_o = output_peri [6'h18]; // 60 >> 2 = 18
          assign io_hex5_o = output_peri [6'h14]; // 50 >> 2 = 14
          assign io_hex4_o = output_peri [6'h10]; // 40 >> 2 = 10
          assign io_hex3_o = output_peri [6'h0C]; // 30 >> 2 = 0C
          assign io_hex2_o = output_peri [6'h08]; // 20 >> 2 = 08
          assign io_hex1_o = output_peri [6'h04]; // 10 >> 2 = 04
          assign io_hex0_o = output_peri [6'h00]; // 00 >> 2 = 00
          
    //data memory
    //write operation datain_1
      always_ff @(posedge clk_i)
        if(((addr_i[10:8] == 3'b000) || (addr_i[10:8] == 3'b001) || (addr_i[10:8] == 3'b010) || (addr_i[10:8] == 3'b011)) && st_en_i)
          begin
            if((mask & 4'b0001) == 4'b0001)
              memory[addr_i[9:2]][0] <= st_data_i[7:0];
            if((mask & 4'b0010) == 4'b0010)
              memory[addr_i[9:2]][1] <= st_data_i[15:8];
            if((mask & 4'b0100) == 4'b0100)
              memory[addr_i[9:2]][2] <= st_data_i[23:16];
            if((mask & 4'b1000) == 4'b1000)
              memory[addr_i[9:2]][3] <= st_data_i[31:24];                                          
          end

    //read operation
		always_comb
      begin
        dataout_1 = 32'b0;
        if(!st_en_i)
          if(mem_op_i[1:0] == 2'b00) //byte
            begin
              if((mask & 4'b0001) == 4'b0001)
                dataout_1[0] = memory[addr_i[9:2]][0];
              if((mask & 4'b0010) == 4'b0010)
                dataout_1[0] = memory[addr_i[9:2]][1];
              if((mask & 4'b0100) == 4'b0100)
                dataout_1[0] = memory[addr_i[9:2]][2];
              if((mask & 4'b1000) == 4'b1000)
                dataout_1[0] = memory[addr_i[9:2]][3];                                    
            end
          else if(mem_op_i[1:0] == 2'b01) // half word
            begin
              if((mask & 4'b0011) == 4'b0011)    
                dataout_1[1:0] = {memory[addr_i[9:2]][1], memory[addr_i[9:2]][0]};
              if((mask & 4'b1100) == 4'b1100)    
                dataout_1[1:0] = {memory[addr_i[9:2]][3], memory[addr_i[9:2]][2]};       
            end
          else dataout_1  = memory[addr_i[9:2]]; //word
        else dataout_1 = 32'b0;
      end
    
    //sign load extend
    always_comb
      if(!mem_op_i[2] && !st_en_i)
        case(mem_op_i)
          3'b000: //load byte
            ld_data_o = {(temp_ld_data[0][7] ? 24'hFFFFFF : 24'b0),temp_ld_data[0]};
          3'b001: //load half word
            ld_data_o = {(temp_ld_data[1][7] ? 16'hFFFF : 16'b0), temp_ld_data[1], temp_ld_data[0]};
          default: ld_data_o = temp_ld_data;
        endcase
      else ld_data_o = temp_ld_data;          

endmodule: lsu
/* verilator lint_off UNUSED */
