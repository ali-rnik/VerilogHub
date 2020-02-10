module mux_16(input [15:0] a, b, input s, output reg [15:0] out);
	always @(s) begin
		if (s == 1'b1)
			out = b;
		else
			out = a;
	end
endmodule

