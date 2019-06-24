// A clock with 10 second cycle
module clock();
	reg clock;
	initial begin
		clock = 1'b0;
		forever begin
			$display("\n time: %d , clock : %b\n", $time, clock);
			#5 clock = ~clock;
		end

	end
endmodule
