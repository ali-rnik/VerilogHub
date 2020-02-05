module adder(input [15:0] in_A, output [15:0] out);
	assign out = in_A + 16'd4;

//------------------------simulation-------------------------------//
	always @(*) begin
		$display("adder.v: in_A: : %2d", in_A);
		$display("adder.v: out: :  %2d\n", out);
	end
endmodule
