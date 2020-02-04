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
	}
	return 0;
}

