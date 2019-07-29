`include "latch.v"

module FLIPFLOP(input data, clk, preset, clear, output q, qbar);
	wire q1;
	LATCH D1(data, !clk, preset, clear, q1,);
	LATCH D2(q1, clk, preset, clear, q, qbar);
endmodule
