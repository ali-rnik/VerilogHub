module extend_46to64(input [45:0] in, output [63:0] out);
	assign out[45:0] = in;
	assign out[63:46] = 18'd0;
endmodule
