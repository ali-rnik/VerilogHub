module register_file(
			input [5:0] 
			readAdr1, 
			readAdr2, 
			writeAdr, 
			input [31:0]
			writeData 
			input 
			writeEnable
			clk, 
			output [31:0] 
			readData1, 
			readData2); 

	reg [31:0] register[32];

	readData1 = register[readAdr1];
	readData2 = register[readAdr2];

	always @(posedge clk) begin
		if (writeEnable)
			register[writeAdr] <= writeData;
	end
endmodule
