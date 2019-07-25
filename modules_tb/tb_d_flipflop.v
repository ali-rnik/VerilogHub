`include "d_flipflop.v"

module tb_d_flipflop;
	reg [1:0] t_in;
	wire out;

	d_flipflop M1(t_in[1], t_in[0], out);

	initial begin
		$dumpfile("tb_d_flipflop.vcd");
		$dumpvars(0);
		t_in = 3'b000;
		repeat(8) begin
			#1 t_in <= t_in + 3'b001;
		end
	end
endmodule
