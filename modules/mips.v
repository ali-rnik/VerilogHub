/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
module mips(input clk, output z);
	wire [15:0] w1, w2, w3;
	wire [63:0] w4, w5, w6, w7;
	wire [5:0] w8;
	wire w9, w10, w11;

	program_counter PC(.in(w1), .clk(clk), .out(w2));
	mux_16 MUX_16(.a(w2), .b(w5[33:18]), .s(w11), .out(w3));
	adder ADDER(.in_A(w3), .in_B(16'd1), .out(w1));
	ram MEM(.adr(w3), .writeData(64'd0), .writeEn(1'b0), .clk(1'b0), 
		.readData(w4));
	instruction_register INST_REG(.in(w4), .clk(clk), .out(w5));
	register_file REG_FILE(.readAdr1(w5[17:12]), .readAdr2(w5[23:18]), 
		.writeAdr(w5[11:6]), .writeData(), .writeEnable(1'b1), 
		.clk(clk), .readData1(w5), .readData2(w6));
	control CTRL(.op(w5[5:0]), .ALUCtrl(w8), .branch(w9));
	alu ALU(.in_A(w6), .in_B(w7), .control(w8), .out(w4), .zero(w10));
	andm ANDM(.a(w9), .b(w10), .out(w11));
endmodule
/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
