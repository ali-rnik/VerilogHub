#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <map>
#include <string>

#include "verilated.h"
#include "VaddPath.h"

using namespace std;

int main(int argc, char **argv)
{
	Verilated::commandArgs(argc, argv);
	VaddPath *tb;
	tb = new VaddPath;

	int clk = 0;
	while (1) {
		cin >> clk;
		tb->clk = clk;
		tb->eval();

		printf("pc equal to : %d\n", tb->pc);
		printf("op equal to : %d\n", tb->op_s);
		//printf("instruct equal to : %d\n", tb->instruct_s);
		printf("rdData equal to : %d\n", tb->rdData_s);
		printf("rs1Data equal to : %d\n", tb->rs1Data_s);
		printf("rs2Data equal to : %d\n", tb->rs2Data_s);
		printf("rd equal to : %d\n", tb->rd_s);
		printf("rs1 equal to : %d\n", tb->rs1_s);
		printf("rs2 equal to : %d\n", tb->rs2_s);
	}
	return 0;
}

