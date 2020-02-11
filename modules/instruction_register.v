module instruction_register (input [63:0] in, input clk, output [63:0] out);
	reg [63:0] data;

	assign out = data;

	always @(posedge clk) begin
		data <= in;
	end

//------------------------simulation-------------------------------//
	always @(*) begin
		$display("instruction_register: data:    %2d", data);
		$display("instruction_register: in:  %2d", in);
		$display("instruction_register: out: %2d\n", out);
	end
endmodule
