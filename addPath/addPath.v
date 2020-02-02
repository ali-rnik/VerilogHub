module addPath(clk, pc_s, op_s, instruct_s, rdData_s, rs1Data_s, rs2Data_s, 
	rd_s, rs1_s, rs2_s);
	input clk;
	output reg [2:0] op_s;
	output reg [63:0] instruct_s, rdData_s, rs1Data_s, rs2Data_s;
	output reg [5:0] rd_s, rs1_s, rs2_s;
	output reg [13:0] pc_s;

	reg [63:0] instruct, rdData, rs1Data, rs2Data;
	reg [5:0] rd, rs1, rs2;
	reg [2:0] op;
	reg [13:0] pc;

	/* verilator lint_off PINNOCONNECT */
	ram INST_MEM(pc, , 1'b0, , instruct);
	register_file REG_FILE(rs1, rs2, rd, rdData, 1'b1, clk, rs1Data, 
		rs2Data);

	alu ALU(rs1Data, rs2Data, op, rdData, , , );
	/* verilator lint_off PINNOCONNECT */

	initial begin
		pc = 14'd0;
	end

	assign op = instruct[2:0];
	assign rd = instruct[11:6];
	assign rs1 = instruct[17:12];
	assign rs2 = instruct[23:18];

	assign op_s = op;

	assign instruct_s = instruct;
	assign rdData_s = rdData;
	assign rs1Data_s = rs1Data;
	assign rs2Data_s = rs2Data;
	assign rd_s = rd;
	assign rs1_s = rs1;
	assign rs2_s = rs2;
	assign pc_s = pc;

	always @(posedge clk) begin
		pc <= pc + 14'b100;
	end

endmodule
