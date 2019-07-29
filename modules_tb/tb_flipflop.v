`include "flipflop.v"

module TB_FLIPFLOP;
	reg [3:0] t_in;
	wire q, qbar;

	FLIPFLOP T1(t_in[3], t_in[2], t_in[1], t_in[0], q, qbar);

	initial begin
		$dumpfile("tb_flipflop.vcd");
		$dumpvars(0);
		t_in = 4'b0000;
		repeat(16) begin
			#1 t_in <= t_in + 4'b0001;
		end
	end
endmodule
