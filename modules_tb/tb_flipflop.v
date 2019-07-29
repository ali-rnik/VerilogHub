`include "flipflop.v"

module TB_FLIPFLOP;
	reg clk, reset;
	reg data, clk, preset, set, q_ex, qbar_ex;
	wire q, qbar;

	reg [31:0] index, errors;
	reg [3:0] testvec[100000:0];

	FLIPFLOP T1(data, clk, preset, clear, q, qbar);

	always begin
			clk = 1; #5; clk = 0; #5;
	end

	initial begin
		$readmemb("tb_flipflop.tv", testvec);
		index = errors = 0;
		reset = 1; #27; reset = 0;
	end

	always @(posedge clk) begin
		#1; {data, clk, preset, clear} = testvec[index];
	end

	always @(negedge clk) begin
		if (~reset) begin
			if (q !== q_ex) begin
				$display("Error detected");
				$display("inputs  = %b", 
					{data, clk, preset, clear});
				$display("outputs = %b", 
					{data, clk, preset, clear});
				errors++;
			end

			index++;
			if (testvec[index] === 4'bx) begin
				$display("%d tests completed with %d errors", 
					index, errors);
				$finish;
			end
		end
	end
endmodule
