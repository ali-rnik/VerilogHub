`include "d_latch.v"

module tb_d_latch;
	reg [1:0] t_in;
	wire out;

	d_latch M1(t_in[1], t_in[0], out);

	initial begin
		$dumpfile("tb_d_latch.vcd");
		$dumpvars(0);
		t_in = 3'b000;
		repeat(8) begin
			#1 t_in <= t_in + 3'b001;
		end
	end
endmodule
