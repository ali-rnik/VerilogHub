module mux_64(input [63:0] a, b, input s, output reg [63:0] out);
	always @(s) begin
		if (s == 1'b1)
			out = b;
		else
			out = a;
	end
endmodule

