module mux_6(input [5:0] a, b, input s, output reg [5:0] out);
	always @(s) begin
		if (s == 1'b1)
			out = b;
		else
			out = a;
	end
endmodule

