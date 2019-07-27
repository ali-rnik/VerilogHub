`include "sr_latch.v"

module tb_sr_latch;
	reg [4:0] t_in;
	wire out;

	sr_latch M1(t_in[4], t_in[3], t_in[2], t_in[1], t_in[0], out);

	initial begin
		$dumpfile("tb_sr_latch.vcd");
		$dumpvars(0);
		t_in = 5'b00000;
		repeat(32) begin
			#1 t_in = t_in + 5'b00001;
		end
	end
endmodule
