/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
module mips(input clk);
	wire [15:0] w1, w2, w3;
	wire [63:0] w4, w5, w6, w7, w12, o1, o2;
	wire [2:0] w8;
	wire [5:0] b1;
	wire w9, w10, w11, s1, s2, s3;

	program_counter PC(.in(w1), .clk(clk), .out(w2));
	mux_16 MUX_16(.a(w2), .b(w5[33:18]), .s(w11), .out(w3));
	adder ADDER(.in_A(w3), .in_B(16'd1), .out(w1));
	ram MEM(.adr(w3), .writeData(64'd0), .writeEn(1'b0), .clk(1'b0), 
		.readData(w4));
	instruction_register INST_REG(.in(w4), .clk(clk), .out(w5));
	mux_6 MUX_6(.a(w5[23:18]), .b(w5[11:6]), .s(s1), .out(b1));
	register_file REG_FILE(.readAdr1(w5[17:12]), .readAdr2(b1), 
		.writeAdr(w5[11:6]), .writeData(w12), .writeEnable(s2), 
		.clk(clk), .readData1(w6), .readData2(w7));
	control CTRL(.op(w5[5:0]), .ALUCtrl(w8), .branch(w9), .writeEn(s2), 
		.branchSwap(s1), .immediate(s3));
	mux_64 MUX_64(.a(w7), .b(o1), .s(s3), .out(o2));
	extend_46to64 EX46TO64(.in(w5[63:18]), .out(o1));
	alu ALU(.in_A(w6), .in_B(o2), .control(w8), .out(w12), .zero(w10));
	andm ANDM(.a(w9), .b(w10), .out(w11));
endmodule
/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
