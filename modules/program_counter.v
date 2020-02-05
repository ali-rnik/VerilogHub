module program_counter(input [15:0] adr_in, input clk, output [15:0] adr_out);
	reg [15:0] data;

	assign adr_out = data;

	always @(posedge clk) begin
		data <= adr_in;
	end

//------------------------simulation-------------------------------//
	always @(*) begin
		$display("program_counter: data:    %2d", data);
		$display("program_counter: adr_in:  %2d", adr_in);
		$display("program_counter: adr_out: %2d\n", adr_out);
	end
endmodule
