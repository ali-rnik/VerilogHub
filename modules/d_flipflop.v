`include "d_latch.v"

module d_flipflop(input data, clk, output out);
	wire out1;
	d_latch d_latch1(data, !clk, out1);
	d_latch d_latch2(out1, clk, out);
endmodule
