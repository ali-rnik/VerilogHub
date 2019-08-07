`include "ram.v"

module tb_ram;
	reg [63:0] writeData, readData;
	reg [15:0] adr;
	reg clk, readEn, writeEn;

	reg tbclk;
	reg [31:0] index, errors;
	reg [145:0] testvec[100000:0];
	reg [63:0] readData_ex;

	ram T1(adr, 
		writeData, 
		readEn, 
		writeEn, 
		tbclk, 
		readData);

	always begin
			tbclk = 0; #3; tbclk = 1; #3;
	end

	initial begin
		$dumpfile("dump_ram.vcd");
		$dumpvars(0);
		$readmemh("in_ram.tv", testvec);
		index = 0; errors = 0;
		tbclk = 0;
	end

	always @(posedge tbclk) begin
		#1;
		adr <= testvec[index];
		writeData <= testvec[index+1];
		readEn <= testvec[index+2];
		writeEn <= testvec[index+3];
		readData_ex <= testvec[index+4];
	end

	always @(negedge tbclk) begin
		$display("\nsimulation at time: %d", $time);
		$display("i_adr: %h", adr);
		$display("i_writeData: %h", writeData);
		$display("i_readEn: %h", readEn);
		$display("i_writeEn: %h", writeEn);
		$display("i_clk: %h", tbclk);
		$display("o_readData: %h", readData);
		$display("ox_readData: %h\n\n", readData_ex);

		if (readData !== readData_ex) begin
			$display("So this is an error");
			errors++;
		end

		index = index + 5;
		if (testvec[index] === 146'bx) begin
			$display("\n%d tests completed with %d errors", 
				index/6, errors);
			$finish;
		end
	end
endmodule
