module mips(input clk);
	wire [15:0] w1, w2;

	program_counter PC(w1, clk, w2);
	adder ADDER(w2, w1);
	ram RAM(w2, 64'd0, 
endmodule
