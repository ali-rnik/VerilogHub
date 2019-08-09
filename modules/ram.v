module ram(
		input [15:0] 
		adr, 
		input [63:0] 
		writeData, 
		input 
		readEn, 
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
