all: clock.o and.o full_adder.o sr_latch.o d_latch.o

clock.o: clock.v
	iverilog $< -o $@
and.o: and.v
	iverilog $< -o $@
full_adder.o: full_adder.v
	iverilog $< -o $@
sr_latch.o: sr_latch.v
	iverilog $< -o $@
d_latch.o: d_latch.v sr_latch.v
	iverilog $< -o $@

clean:
	rm  *.o
