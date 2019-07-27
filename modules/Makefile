FLAGS = -Wall -Winfloop

all: d_flipflop.o clock.o full_adder.o sr_latch.o d_latch.o

d_flipflop.o: d_flipflop.v d_latch.o
	iverilog $(FLAGS) $< -o $@

clock.o: clock.v
	iverilog $(FLAGS) $< -o $@

full_adder.o: full_adder.v
	iverilog $(FLAGS) $< -o $@

sr_latch.o: sr_latch.v
	iverilog $(FLAGS) $< -o $@

d_latch.o: d_latch.v sr_latch.o
	iverilog $(FLAGS) $< -o $@

clean:
	rm  *.o
