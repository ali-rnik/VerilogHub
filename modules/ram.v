module ram(input [15:0] adr, input [63:0] writeData, input writeEn, clk, 
	output [63:0] readData);

	reg [63:0] mem[65536];
	assign readData = mem[adr];
	always @(posedge clk) begin
		if (writeEn) begin
			mem[adr] <= writeData;
		end
	end

//------------------------simulation-------------------------------//
	always @(*) begin
		$display("ram: adr:       %2d", adr);
		$display("ram: writeData: %2d", writeData);
		$display("ram: writeEn:   %2d", writeEn);
		$display("ram: readData:  %2d", readData);
		$display("ram: mem[%2d]:   %2d\n", adr, mem[adr]);

	end
endmodule
