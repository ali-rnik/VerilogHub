#include <iostream>
#include <unistd.h>
#include "obj_mips/Vmips.h"
#include "verilated.h"

using namespace std;

int main(int argc, char **argv)
{
	Verilated::commandArgs(argc, argv);
	Vmips *mips = new Vmips;

	mips->clk = 0;

	while (1) {
		mips->clk == 0 ? mips->clk = 1 : mips->clk = 0;
		mips->eval();
		sleep(1);
	}

}
