all:
	verilator -cc addPath.v
	make -C obj_dir -f VaddPath.mk
	g++ -g -I /usr/share/verilator/include/ -I ./obj_dir  /usr/share/verilator/include/verilated.cpp addPath.cpp obj_dir/VaddPath__ALL.a -o program 
