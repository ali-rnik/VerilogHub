module instruction_register (input [63:0] in, input clk, output [63:0] out);
	reg [63:0] data;

	assign out = data;

	always @(posedge clk) begin
		data <= in;
	end

//------------------------simulation-------------------------------//
	always @(*) begin
		$display("R-type:");
		$display("instruction_register: op:       %2d", out[5:0]);
		$display("instruction_register: dst_adr:  %2d", out[11:6]);
		$display("instruction_register: src1_adr: %2d", out[17:12]);
		$display("instruction_register: src2_adr: %2d\n", out[23:18]);

		$display("I-type: beq");
		$display("instruction_register: op:       %2d", out[5:0]);
		$display("instruction_register: src1_adr: %2d", out[11:6]);
		$display("instruction_register: src2_adr: %2d", out[17:12]);
		$display("instruction_register: jump_adr: %2d\n", out[33:18]);

		$display("I-type: addi");
		$display("instruction_register: op:       %2d", out[5:0]);
		$display("instruction_register: dst_adr:  %2d", out[11:6]);
		$display("instruction_register: src1_adr: %2d", out[17:12]);
		$display("instruction_register: imd_val:  %2d\n", out[63:18]);
	end
endmodule
