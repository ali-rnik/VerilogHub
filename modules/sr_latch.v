module sr_latch(input set, reset, enable, output out);
	assign out = (( out || ( set && enable)) && !( reset && enable));
endmodule


