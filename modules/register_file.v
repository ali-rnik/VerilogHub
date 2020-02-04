module register_file(input [5:0] readAdr1, readAdr2, writeAdr, 
	input [63:0] writeData, input writeEnable, clk, 
	output [63:0] readData1, readData2); 

	reg [63:0] register[64];

	assign readData1 = register[readAdr1];
	assign readData2 = register[readAdr2];

	always @(posedge clk) begin
		if (writeEnable)
			register[writeAdr] <= writeData;
	end

endmodule
