#include <iostream>
#include <unistd.h>
#include "obj_mips/Vmips.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

using namespace std;

int main(int argc, char **argv)
{
	Verilated::commandArgs(argc, argv);
	Verilated::traceEverOn(true);

	Vmips *mips = new Vmips;
	VerilatedVcdC* tfp = new VerilatedVcdC;
	mips->trace(tfp, 99);
	tfp->open("./mips.vcd");
	mips->clk = 0;

	int main_time = 0;
	int pos_edge = 1;
	while (main_time <= 18) {
		printf("=========================\n");

		if (mips->clk == 0)
			printf("%dth pos clk edge.\n", pos_edge++);

		printf("clk was changed from %d -> %d and result is: \n\n", 
				mips->clk, !mips->clk);
		if (mips->clk == 1)
			mips->clk = 0;
		else if (mips->clk == 0)
			mips->clk = 1;

		mips->eval();

		main_time++;
		tfp->dump(main_time);
		sleep(2);
	}
	tfp->close();
}
