module sr_latch(input set, reset, enable, preset, clear, output out);
	assign out = ((!clear && (preset || !(reset && enable))) && 
			(!clear && (preset || (out || (enable && set)))));
endmodule


