all: d_flipflop.o clock.o full_adder.o sr_latch.o d_latch.o

d_flipflop.o: d_flipflop.v d_latch.o
	iverilog $< -o $@

clock.o: clock.v
	iverilog $< -o $@

full_adder.o: full_adder.v
	iverilog $< -o $@

sr_latch.o: sr_latch.v
	iverilog $< -o $@

d_latch.o: d_latch.v sr_latch.o
	iverilog $< -o $@

clean:
	rm  *.o
