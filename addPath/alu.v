module alu(
		input [63:0]
		in_A,
		in_B,
		input [2:0]
		control,
		output reg [63:0]
		out,
		output
		greater,
		lesser,
		equal);
	assign greater = (in_A > in_B) ? 1 : 0;
	assign equal = (in_A == in_B) ? 1 : 0;
	assign lesser = (!greater && !equal);

	always @(*) begin
		case (control)
			// addition
			3'b000: out = in_A + in_B;
			// subtraction
			3'b001: out = in_A - in_B;
			// and
			3'b010: out = in_A & in_B;
			// or
			3'b011: out = in_A | in_B;
			// shift left
			3'b100: out = in_A <<< 1;
			// shift right
			3'b101: out = in_A >>> 1;
			default: out = in_A + in_B;
		endcase
	end
endmodule
