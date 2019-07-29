FLAGS = -Wall -Winfloop

all: flipflop.out clock.out full_adder.out latch.out

flipflop.out: flipflop.v latch.out
	iverilog $(FLAGS) $< -o $@

clock.out: clock.v
	iverilog $(FLAGS) $< -o $@

full_adder.out: full_adder.v
	iverilog $(FLAGS) $< -o $@

latch.out: latch.v
	iverilog $(FLAGS) $< -o $@

clean:
	-rm  *.out
