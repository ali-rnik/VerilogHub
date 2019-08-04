module mux #(parameter WIDTH = 1, INPUTS = 2) 
	(input [WIDTH-1:0] in[INPUTS], input select, output reg [WIDTH:0] out);

//	genvar i;
//	generate
//		for (i = 0; i < INPUTS; i = i+1) begin
//			always @(*) begin
//				tmp = in[i*INPUTS +: WIDTH];
//				i_port[i] = tmp[0:WIDTH-1];
//			end
//		end
//	endgenerate
//
//	always @(*) begin
//		out = i_port[select];
//	end
endmodule
