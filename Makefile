FILE=file
all:
	verilator -Wall -cc  $(FILE).v  --Mdir obj_$(FILE) --prefix topMod
	make -C obj_$(FILE) -f topMod.mk
	g++ -g -I /usr/share/verilator/include -I obj_$(FILE)  /usr/share/verilator/include/verilated.cpp $(FILE).cpp obj_$(FILE)/topMod__ALL.a -o $(FILE)
