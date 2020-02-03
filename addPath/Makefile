FILE=file
all:
	verilator -cc  $(FILE).v  --Mdir obj_$(FILE) --prefix topMod
	make -C obj_$(FILE) -f topMod.mk
	#g++ -g -I  -I ./obj_dir  /usr/share/verilator/include/verilated.cpp addPath.cpp obj_dir/VaddPath__ALL.a -o program 
