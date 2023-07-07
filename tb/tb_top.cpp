#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>
#include <cstdlib>
#include <string>
#include <iostream>
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vtop.h"

//#define MAX_SIM       1000000
vluint64_t sim_unit = 0;
vluint64_t sim_time = 0;

struct timeval time_dia;
struct timeval time_lcd;
struct timeval time_gcd;
struct timeval time_str;
struct timeval time_twr;
struct timeval time_bin;
struct timeval time_fib;
struct timeval time_fac;
char string[50];
float seconds;
double run_time;
int  clc_str = 0;
int  clc_dia = 0;
int  clc_lcd = 0;
int  clc_gcd = 0;
int  clc_twr = 0;
int  clc_bin = 0;
int  clc_fib = 0;
int  clc_fac = 0;
int  flg_dia = 1;
int  flg_lcd = 1;
int  flg_gcd = 1;
int  flg_twr = 1;
int  flg_bin = 1;
int  flg_fib = 1;
int  flg_fac = 1;

void dut_clock(Vtop *dut, VerilatedFstC *vtrace);
void drv_in(Vtop *dut, vluint64_t sim_unit);
void mnt_out(Vtop *dut, VerilatedFstC *vtrace);
void mnt_proc(Vtop *dut);
void ppassed(Vtop *dut);
void pfailed(Vtop *dut, VerilatedFstC *vtrace);

float get_seconds (struct timeval end, struct timeval start){
  long long milisecs;
  milisecs = (end.tv_sec - start.tv_sec)*1000 + (end.tv_usec - start.tv_usec)/1000.0;
  return (float) milisecs/1000.0;
}

void print_passed (char *string) {
  printf("::\033[1;32mPASSED\033[0m:: %s\n", string);
}

void print_failed (char *string) {
  printf("::\033[1;31mFAILED\033[0m:: %s\n", string);
}

void exit_fail (Vtop *dut, VerilatedFstC *vtrace) {
  printf("\033[1;31m::ERROR::\033[0m These instructions are NOT working properly!\n");
  printf("\033[1;31m::ERROR::\033[0m Please rework on those or check your I/O connections\n");
  printf("\n---------------------END OF FILE---------------------\n");
  printf("\033[1;31mTerminating...\033[0m\n");
  vtrace->close();
  delete dut;
  exit(EXIT_FAILURE);
}

void exit_pass (Vtop *dut, VerilatedFstC *vtrace) {
  printf("\n---------------------END OF FILE---------------------\n");
  vtrace->close();
  delete dut;
  exit(EXIT_SUCCESS);
}

void dut_clock(Vtop *dut, VerilatedFstC *vtrace) {
  sim_time = sim_unit * 10 + 1;
  drv_in(dut, sim_unit); dut->eval();
  if (vtrace) {
    vtrace->dump(sim_time); // Dump values after posedge
  }

  sim_time = sim_time + 4;
  dut->clk_i = 0; dut->eval();
  if (vtrace) vtrace->dump(sim_time); // Dump values after negedge
  mnt_out(dut, vtrace);        // Values are "stable" to monitor

  sim_time = sim_time + 5;
  dut->clk_i = 1;dut->eval();
  if (vtrace) {
    vtrace->dump(sim_time); // Dump values after posedge
    //vtrace->flush();
  }
}

void drv_in(Vtop *dut, vluint64_t sim_unit) {
  if (sim_unit < 2) {
    dut->rst_ni = 0;
    dut->eval();
  }
  else {
    dut->rst_ni = 1;
    dut->eval();
  }

  if (sim_unit < 25) {
    dut->io_sw_i = 0xA203B3EE;
    dut->eval();
  }
  if (sim_unit >= 29) {
    dut->io_sw_i = 0x5B6123F9;
    dut->eval();
  }
}

void mnt_proc(Vtop *dut) {
}

void mnt_out(Vtop *dut, VerilatedFstC *vtrace) {
  if (sim_unit == 25) {
    printf("-=- BASIC DIAGNOSIS -=-\n");

    printf("::0:: Load Store Instr\n");

    strcpy(string, "LW, SW");
    if (dut->io_hex0_o == 0xA203B3EE) {
      print_passed(string);
    }
    else {
      print_failed(string);
      exit_fail(dut, vtrace);
    }

    int exp_lsu_1;
    exp_lsu_1 =              (dut->io_hex1_o == 0xFFFFFFEE) && (dut->io_hex2_o == 0x000000EE);
    exp_lsu_1 = exp_lsu_1 && (dut->io_hex3_o == 0xFFFFB3EE) && (dut->io_hex4_o == 0x0000B3EE);
    strcpy(string, "LB, LBU, LH, LHU");
    if (exp_lsu_1) {
      print_passed(string);
    }
    else {
      print_failed(string);
    }

    int exp_lsu_2;
    exp_lsu_2 = (dut->io_hex5_o == 0xA203B300) && (dut->io_hex6_o == 0xA2030000);
    strcpy(string, "SB, SH");
    if (exp_lsu_2) {
      print_passed(string);
    }
    else {
      print_failed(string);
    }
  }

  if (sim_unit == 43) {
    printf("::1:: Reg-Reg & Reg-Imm Instr\n");

    int exp_alu_0;
    exp_alu_0 =              (dut->io_hex0_o == 0xFD64D7E7) && (dut->io_hex1_o == 0x46A28FF5);
    exp_alu_0 = exp_alu_0 && (dut->io_hex2_o == 0x46A297C4) && (dut->io_hex3_o == 0x46A291C4);
    strcpy(string, "ADD, SUB, ADDI");
    if (exp_alu_0) {
      print_passed(string);
    }
    else {
      print_failed(string);
      exit_fail(dut, vtrace);
    }
  }

  if (sim_unit == 69) {
    int exp_alu_1;
    exp_alu_1 =              (dut->io_hex0_o == 0x020123E8) && (dut->io_hex1_o == 0xFB63B3FF) && (dut->io_hex2_o == 0xF9629017);
    exp_alu_1 = exp_alu_1 && (dut->io_hex3_o == 0x000001CE) && (dut->io_hex4_o == 0xA203B3EF) && (dut->io_hex5_o == 0xA203B221);
    exp_alu_1 = exp_alu_1 && (dut->io_hex6_o == 0x000003CE) && (dut->io_hex7_o == 0xA203B7EF) && (dut->io_ledr_o == 0xA203B421);
    strcpy(string, "AND, OR, XOR");
    if (exp_alu_1) {
      print_passed(string);
    }
    else {
      print_failed(string);
      exit_fail(dut, vtrace);
    }
    strcpy(string, "ANDI, ORI, XORI");
    if (exp_alu_1) {
      print_passed(string);
    }
    else {
      print_failed(string);
      exit_fail(dut, vtrace);
    }
  }

  if (sim_unit == 106) {
    int exp_alu_2;
    exp_alu_2 =              (dut->io_hex0_o == 0x0000003B) && (dut->io_hex1_o == 0xEC000000);
    exp_alu_2 = exp_alu_2 && (dut->io_hex2_o == 0x0000003B) && (dut->io_hex3_o == 0xFFFFFFFB);
    exp_alu_2 = exp_alu_2 && (dut->io_hex4_o == 0xB0000000) && (dut->io_hex5_o == 0x0000000B);
    exp_alu_2 = exp_alu_2 && (dut->io_hex6_o == 0xFFFFFFFB);
    strcpy(string, "SLL, SRL, SRA");
    if (exp_alu_2) {
      print_passed(string);
    }
    else {
      print_failed(string);
      exit_fail(dut, vtrace);
    }
    strcpy(string, "SLLI, SRLI, SRAI");
    if (exp_alu_2) {
      print_passed(string);
    }
    else {
      print_failed(string);
      exit_fail(dut, vtrace);
    }
    strcpy(string, "SLT, SLTU");
    if (exp_alu_2) {
      print_passed(string);
    }
    else {
      print_failed(string);
      exit_fail(dut, vtrace);
    }
  }

  if (sim_unit == 140) {
    printf("::2:: Conditional Branch Instr\n");

    int exp_bru;
    exp_bru = (dut->io_ledr_o == 0x0CAEE203);
    strcpy(string, "BEQ, BNE");
    if (exp_bru) {
      print_passed(string);
    }
    else {
      print_failed(string);
      exit_fail(dut, vtrace);
    }
    strcpy(string, "BLT, BGE, BLTU, BGEU");
    if (exp_bru) {
      print_passed(string);
    }
    else {
      print_failed(string);
      exit_fail(dut, vtrace);
    }
  }

  if (sim_unit == 153) {
    printf("::3:: Unconditional Jump Instr\n");

    int exp_jmp;
    exp_jmp = (dut->io_hex0_o == 0x00000238) && (dut->io_hex1_o == 0xCA0B3203);
    strcpy(string, "JAL, JALR");
    if (exp_jmp) {
      print_passed(string);
    }
    else {
      print_failed(string);
      exit_fail(dut, vtrace);
    }
    strcpy(string, "AUIPC, LUI");
    if (exp_jmp) {
      print_passed(string);
    }
    else {
      print_failed(string);
      exit_fail(dut, vtrace);
    }
  }

  if (dut->io_ledg_o == 0x1 && flg_dia) {
    clc_dia  = sim_unit;
    flg_dia  = 0;
    gettimeofday (&time_dia, NULL);
    seconds = get_seconds(time_dia, time_str);
    printf("\n-=- TESTBENCHES -=-\n");
    printf("  # .Status..      Name      ..  Cycles  ..  Sim-Time \n");
    printf("::0::");
    printf("\033[1;32mPASSED\033[0m");
    printf(":: Diagnosis      :: %8d :: %7.3f s\n", clc_dia, seconds);
  }

  if (dut->io_ledg_o == 0x3 && flg_lcd ) {
    clc_lcd  = sim_unit;
    flg_lcd  = 0;
    gettimeofday (&time_lcd, NULL);
    seconds = get_seconds(time_lcd, time_dia);
  }

  if (dut->io_ledg_o == 0x7 && flg_fib ) {
    clc_fib  = sim_unit;
    flg_fib  = 0;
    gettimeofday (&time_fib, NULL);
    seconds = get_seconds(time_fib, time_lcd);
    printf("::1::");
    if (dut->io_ledr_o == 0x610) {
      printf("\033[1;32mPASSED\033[0m");
    }
    else {
      printf("\033[1;31mFAILED\033[0m");
    }
    printf(":: Fibonacci      :: %8d :: %7.3f s\n", clc_fib - clc_lcd, seconds);
  }

  if (dut->io_ledg_o == 0xF && flg_fac ) {
    clc_fac  = sim_unit;
    flg_fac  = 0;
    gettimeofday (&time_fac, NULL);
    seconds = get_seconds(time_fac, time_fib);
    printf("::2::");
    if (dut->io_ledr_o == 0x40320) {
      printf("\033[1;32mPASSED\033[0m");
    }
    else {
      printf("\033[1;31mFAILED\033[0m");
    }
    printf(":: Factorial      :: %8d :: %7.3f s\n", clc_fac - clc_fib, seconds);
  }

  if (dut->io_ledg_o == 0x1F && flg_gcd ) {
    clc_gcd  = sim_unit;
    flg_gcd  = 0;
    gettimeofday (&time_gcd, NULL);
    seconds = get_seconds(time_gcd, time_fac);
    printf("::3::");
    if (dut->io_ledr_o == 0x1556) {
      printf("\033[1;32mPASSED\033[0m");
    }
    else {
      printf("\033[1;31mFAILED\033[0m");
    }
    printf(":: GCD            :: %8d :: %7.3f s\n", clc_gcd - clc_fac, seconds);
  }

  if (dut->io_ledg_o == 0x3F && flg_twr ) {
    clc_twr  = sim_unit;
    flg_twr  = 0;
    gettimeofday (&time_twr, NULL);
    seconds = get_seconds(time_twr, time_gcd);
    printf("::4::");
    if (dut->io_ledr_o == 0x1023) {
      printf("\033[1;32mPASSED\033[0m");
    }
    else {
      printf("\033[1;31mFAILED\033[0m");
    }
    printf(":: Tower of Hanoi :: %8d :: %7.3f s\n", clc_twr - clc_gcd, seconds);
  }

  if (dut->io_ledg_o == 0x7F && flg_bin ) {
    clc_bin  = sim_unit;
    flg_bin  = 0;
    gettimeofday (&time_bin, NULL);
    seconds = get_seconds(time_bin, time_twr);
    printf("::5::");
    if (dut->io_ledr_o == 0x10) {
      printf("\033[1;32mPASSED\033[0m");
    }
    else {
      printf("\033[1;31mFAILED\033[0m");
    }
    printf(":: Binary Search  :: %8d :: %7.3f s\n", clc_bin - clc_twr, seconds);
    exit_pass(dut, vtrace);
  }
}

void ppassed(Vtop *dut) {
  printf("::\033[1;32mPASSED\033[0m:: %s\n", string);
}

void pfailed(Vtop *dut, VerilatedFstC *vtrace) {
  printf("::\033[1;31mFAILED\033[0m:: %s\n", string);
  vtrace->close();
  delete dut;
  exit(EXIT_FAILURE);
}

int main(int argc, char **argv, char **env) {
	// Call commandArgs first!
	Verilated::commandArgs(argc, argv);

  // Instantiate the design
	Vtop *dut = new Vtop;

  // Trace generating
  Verilated::traceEverOn(true);
  VerilatedFstC *vtrace = new VerilatedFstC;
  dut->trace(vtrace, 2); // trace down to 2 hierarchy
  vtrace->open("wave.fst");
  vtrace->dump(0);

  // Initial setups
  srand(time(NULL));
  dut->eval();

  printf("\n\n---------------------REPORT FILE---------------------\n\n");

  gettimeofday (&time_str, NULL);
  // Check procedure
  //while (sim_unit < MAX_SIM){
  while (1){
    dut_clock(dut, vtrace);
    mnt_proc(dut);
    sim_unit++;
	}

  vtrace->close();
  delete dut;
  exit(EXIT_SUCCESS);
}
