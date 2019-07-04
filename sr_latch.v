module sr_latch(input set, reset, enable, output out);
	assign out = (( out || ( set && enable)) && !( reset && enable));
endmodule

module test_sr_latch;
	reg [2:0] t_in;
	wire out;

	sr_latch M1(t_in[2], t_in[1], t_in[0], out);

	initial begin
		$dumpfile("test_sr_latch.vcd");
		$dumpvars(0,test_sr_latch);
		t_in = 3'b000;
		repeat(8) begin
			#1 t_in <= t_in + 3'b001;
		end
	end
endmodule
