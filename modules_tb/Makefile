all: tb_sr_latch.vcd tb_d_latch.vcd

tb_sr_latch.vcd: tb_sr_latch.v $(MODULES_DIR)/sr_latch.v
	iverilog $< -o $<.o -I$(MODULES_DIR)
	./$<.o
	rm $<.o

tb_d_latch.vcd: tb_d_latch.v $(MODULES_DIR)/d_latch.v
	iverilog $< -o $<.o -I$(MODULES_DIR)
	./$<.o
	rm $<.o

clean:
	rm *.vcd
