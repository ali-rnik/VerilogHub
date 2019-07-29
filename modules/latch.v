module LATCH(input data, enable, preset, clear, output q, qbar);
	wire A, B, C, D, E;

	not(A, preset);
	not(B, clear);
	not(E, data);

	nand(C, data, enable);
	nand(D, E, enable);

	nand(q, C, A, qbar);
	nand(qbar, D, B, q);
endmodule


