`include "flipflop.v"

module TB_FLIPFLOP1;
	reg tbclk;
	reg data, clk, preset, clear, q_ex, qbar_ex;
	wire q, qbar;

	reg [31:0] index, errors;
	reg [4:0] testvec[100000:0];

	FLIPFLOP T1(data, clk, preset, clear, q, qbar);

	always begin
			tbclk = 0; #5; tbclk = 1; #5;
	end

	initial begin
		$dumpfile("dump_flipflop.vcd");
		$dumpvars(0);
		$readmemb("in_flipflop.tv", testvec);
		index = 0; errors = 0;
	end

	always @(posedge tbclk) begin
		#1; {data, clk, preset, clear, q_ex} = testvec[index];
	end

	always @(negedge tbclk) begin

		$display("\nsimulation at time: %d", $time);
		$display("inputs: %b", {data, clk, preset, clear});
		$display("output is %b and expected %b", q, q_ex);

		if (q !== q_ex) begin
			$display("So this is an error");
			errors++;
		end

		index++;
		if (testvec[index] === 5'bx) begin
			$display("\n%d tests completed with %d errors", 
				index, errors);
			$finish;
		end
	end
endmodule
