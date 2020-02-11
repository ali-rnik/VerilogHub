module program_counter (input [15:0] in, input clk, output [15:0] out);
	reg [15:0] data;

	assign out = data;

	always @(posedge clk) begin
		data <= in;
	end

//------------------------simulation-------------------------------//
	always @(*) begin
		$display("program_counter: data:    %2d", data);
		$display("program_counter: in:  %2d", in);
		$display("program_counter: out: %2d\n", out);
	end
endmodule
