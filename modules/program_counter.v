module program_counter(input adr_in[15:0], input clk, output adr_out[15:0]);
	reg data[15:0];

	assign adr_out = data;

	always @(posedge clk) begin
		data <= adr_in;
	end
endmodule
