/* verilator lint_off UNUSED */
/* verilator lint_off PINNOCONNECT */
module addPath(input clk);
	wire [63:0] instruct, rdData, rs1Data, rs2Data;

	reg [13:0] pc;

	ram INST_MEM(pc, , 1'b0, , instruct);
	register_file REG_FILE(instruct[17:12], instruct[23:18], 
		instruct[11:6], rdData, 1'b1, clk, rs1Data, rs2Data);

	alu ALU(rs1Data, rs2Data, instruct[2:0], rdData, , , );

	initial begin
		pc = 14'd0;
	end

	always @(posedge clk) begin
		pc <= pc + 14'b100;
	end

endmodule
/* verilator lint_off UNUSED */
/* verilator lint_off PINNOCONNECT */
