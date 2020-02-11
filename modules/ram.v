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
		$display("ram: adr:         %2d", adr);
		$display("ram: writeData:   %2d", writeData);
		$display("ram: writeEn:     %2d", writeEn);
		$display("ram: readData:    %2d", readData);
		$display("ram: mem_adr_op:  %2d", mem[adr][5:0]);
		$display("ram: mem_adr_rd:  %2d", mem[adr][11:6]);
		$display("ram: mem_adr_rs1: %2d", mem[adr][17:12]);
		$display("ram: mem_adr_rs2: %2d", mem[adr][23:18]);
		$display("ram: mem[%2d]:    %2d\n", adr, mem[adr]);
	end

	initial begin
		$readmemb("data_mem.txt", mem, 0, 5);
	end
endmodule
