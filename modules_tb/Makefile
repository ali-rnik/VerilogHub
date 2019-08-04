ifeq ($(MODULES_DIR),)
MODULES_DIR = $(CURDIR)/../modules
endif

ifeq ($(MODULES_DIR),)
MODULES_TB_DIR =$(CURDIR)/../modules
endif


FLAGS = -Wall -Winfloop

all: tb_latch.out tb_flipflop.out

tb_latch.out: tb_latch.v $(MODULES_DIR)/latch.v
	-iverilog $(FLAGS) $< -o $@ -I$(MODULES_DIR)
	-./$@

tb_flipflop.out: tb_flipflop.v $(MODULES_DIR)/flipflop.v
	-iverilog $(FLAGS) $< -o $@ -I$(MODULES_DIR)
	-./$@

clean:
	-rm *.out
