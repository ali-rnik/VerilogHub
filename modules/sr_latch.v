module sr_latch(input set, reset, enable, preset, clear, output reg out);
	always @* begin
		if (clear) out <= 1'b0;
		else if (preset) out <= 1'b1;
		else if (enable && reset) out <= 1'b0;
		else if (enable && set) out <= 1'b1;
	end
endmodule
