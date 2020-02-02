/* verilator lint_off WIDTH */
module ram(
		input [13:0] 
		adr, 
		input [63:0] 
		writeData, 
		input 
		writeEn, 
		clk, 
		output reg [63:0] readData);
	reg [63:0] mem[10485];

	initial begin
		mem[0][5:0] = 6'b000000;
		mem[0][11:6] = 6'b000000;
		mem[0][17:12] = 6'b000001;
		mem[0][24:18] = 6'b000010;

		mem[1][5:0] = 6'b000000;
		mem[1][11:6] = 6'b000001;
		mem[1][17:12] = 6'b000010;
		mem[1][24:18] = 6'b000000;
	end

	assign readData = mem[adr];
	always @(posedge clk) begin
		if (writeEn) begin
			mem[adr] <= writeData;
		end
	end
endmodule
/* verilator lint_off WIDTH */
