`include "sr_latch.v"

module d_latch(input data, enable, output out);
	sr_latch sr_latch1(data, !data, enable, out);
endmodule


