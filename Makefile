MODULES_DIR=$(CURDIR)/modules
MODULES_TB_DIR=$(CURDIR)/modules_tb

export MODULES_DIR
export MODULES_TB_DIR

all:
	make -f $(MODULES_DIR)/Makefile -C$(MODULES_DIR)
	make -f $(MODULES_TB_DIR)/Makefile -C$(MODULES_TB_DIR)

clean:
	make -f $(MODULES_DIR)/Makefile -C$(MODULES_DIR) clean
	make -f $(MODULES_TB_DIR)/Makefile -C$(MODULES_TB_DIR) clean
