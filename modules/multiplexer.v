module mux #(parameter WIDTH = 1, INPUTS = 2) 
	(input [INPUTS*WIDTH-1:0] in, input select, output reg [WIDTH:0] out);
	reg [WIDTH-1:0] i_port[INPUTS-1:0];

	generate
		reg [WIDTH-1:0] tmp;
		for (genvar i = 0; i < INPUTS; i++) begin
			tmp = in[i*INPUTS +: WIDTH];
			i_port[i] = in[i*INPUTS +: WIDTH];
		end
	endgenerate

	always @(*) begin
		out = in[select];
	end
endmodule
