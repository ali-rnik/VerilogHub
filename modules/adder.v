module adder(input [15:0] in_A, output [15:0] out);
	assign out = in_A + 16'd4;

	always @(*) begin
		$display("adder.v: in_A: : %d\n", in_A);
		$display("adder.v: out: : %d\n", out);
	end
endmodule
