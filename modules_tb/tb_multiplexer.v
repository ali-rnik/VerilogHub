`include "multiplexer.v"

module TB_MUX2_1;
	reg [2:0] t_in;

	MUX2_1 M1(t_in[2:1], t_in[0], out);

	initial begin
		$dumpfile("dump_mux2_1.vcd");
		$dumpvars(0);
		t_in = 3'b000;
		repeat(8) begin
			#1 t_in <= t_in + 3'b001;
		end
	end
endmodule

