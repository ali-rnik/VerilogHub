/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
module mips(input clk, output z);
	wire [15:0] w1, w2;
	wire [63:0] w3, w4, w5, w6;

	program_counter PC(.adr_in(w1), .clk(clk), .adr_out(w2));
	adder ADDER(.in_A(w2), .in_B(16'd4), .out(w1));
	ram INS_MEM(.adr(w2), .writeData(64'd0), .writeEn(1'b0), .clk(1'b0), 
		.readData(w3));
	register_file REG_FILE(.readAdr1(w3[17:12]), .readAdr2(w3[23:18]), 
		.writeAdr(w3[11:6]), .writeData(w4), .writeEnable(1'b1), 
		.clk(clk), .readData1(w5), .readData2(w6));
	alu ALU(.in_A(w5), .in_B(w6), .control(w3[5:0]), .out(w4), .zero(z));

endmodule
/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
