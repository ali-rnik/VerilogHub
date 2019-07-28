`include "d_latch.v"

module tb_d_latch;
	reg [3:0] t_in;
	wire out;

	d_latch M1(t_in[3], t_in[2], t_in[1], t_in[0], out);

	initial begin
		$dumpfile("tb_d_latch.vcd");
		$dumpvars(0);
		t_in = 4'b0000;
		repeat(16) begin
			#1 t_in <= t_in + 4'b0001;
		end
	end
endmodule
