module full_adder(input a, b, c, output carry, sum);
	assign carry = (a && b) || (b && c) || (a && b),
		sum = ((!a) && (!b) && c) || ((!a) && b && (!c)) || 
		(a && (!b) && (!c)) || (a && b && c);
endmodule

module test_full_adder;
	reg [2:0] t_in;
	wire t_carry, t_sum;

	full_adder M1(t_in[0], t_in[1], t_in[2], t_carry, t_sum);

	initial begin
		t_in = 3'b000;
		repeat(7) begin
			$monitor("\na = %b, b = %b, c = %b\n",
				t_in[0], t_in[1], t_in[2]);
			#1 t_in <= t_in + 3'b001;
		end
	end
endmodule
