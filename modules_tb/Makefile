all: tb_sr_latch.o tb_d_latch.o

tb_sr_latch.o: tb_sr_latch.v $(MODULES_DIR)/sr_latch.v
	iverilog $< -o $@ -I$(MODULES_DIR)
	./$@
	rm $@

tb_d_latch.o: tb_d_latch.v $(MODULES_DIR)/d_latch.v
	iverilog $< -o $@ -I$(MODULES_DIR)
	./$@
	rm $@

clean:
	rm *.vcd
