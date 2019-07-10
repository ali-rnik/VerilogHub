INCLUDE_DIR1=./

all: clock.o and.o full_adder.o sr_latch.o d_latch.o

clock.o: clock.v
	iverilog $< -o $@ -I$(INCLUDE_DIR1)
and.o: and.v
	iverilog $< -o $@ -I$(INCLUDE_DIR1)
full_adder.o: full_adder.v
	iverilog $< -o $@ -I$(INCLUDE_DIR1)
sr_latch.o: sr_latch.v
	iverilog $< -o $@ -I$(INCLUDE_DIR1)
d_latch.o: d_latch.v sr_latch.v
	iverilog $< -o $@ -I$(INCLUDE_DIR1)

clean:
	rm  *.o
