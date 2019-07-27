FLAGS = -Wall -Winfloop

all: cleanVCD tb_sr_latch.vcd tb_d_latch.vcd tb_d_flipflop.vcd

cleanVCD:
	rm *.vcd
tb_sr_latch.vcd: tb_sr_latch.v $(MODULES_DIR)/sr_latch.v
	iverilog $(FLAGS) $< -o $<.o -I$(MODULES_DIR)
	./$<.o

tb_d_latch.vcd: tb_d_latch.v $(MODULES_DIR)/d_latch.v
	iverilog $(FLAGS) $< -o $<.o -I$(MODULES_DIR)
	./$<.o

tb_d_flipflop.vcd: tb_d_flipflop.v $(MODULES_DIR)/d_flipflop.v
	iverilog $(FLAGS) $< -o $<.o -I$(MODULES_DIR)
	./$<.o

clean:
	rm *.o
