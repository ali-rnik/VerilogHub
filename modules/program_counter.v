module program_counter(input [15:0] adr_in, input clk, output [15:0] adr_out);
	reg [15:0] data;

	assign adr_out = data;

	always @(posedge clk) begin
		data <= adr_in;
	end

	always @(*) begin
		$display("program_counter: data: : %d\n", data);
		$display("program_counter: adr_in: : %d\n", adr_in);
		$display("program_counter: adr_out: : %d\n", adr_out);
	end
endmodule
