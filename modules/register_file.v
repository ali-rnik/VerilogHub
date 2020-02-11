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

//-----------------------simulation-------------------------------//
	always @(*) begin
		$display("register_file: readAdr1:     %2d", readAdr1);
		$display("register_file: readAdr2:     %2d", readAdr2);
		$display("register_file: writeAdr:     %2d", writeAdr);
		$display("register_file: writeData:    %2d", writeData);
		$display("register_file: writeEnable:  %2d", writeEnable);
		$display("register_file: readData1:    %2d", readData1);
		$display("register_file: readData2:    %2d", readData2);
//		for (int i = 0; i <= 3; i++) begin
//			$display("register_file: register[%2d]: %2d", 
//				i, register[i]);
//		end
		$display();
	end

	initial begin
		$readmemb("data_register.txt", register, 0, 2);
	end

endmodule
