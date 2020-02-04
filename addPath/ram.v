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

	assign readData = mem[adr];
	always @(posedge clk) begin
		if (writeEn) begin
			mem[adr] <= writeData;
		end
	end
endmodule
/* verilator lint_off WIDTH */
