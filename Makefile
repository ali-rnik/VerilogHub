FILE=file_name

all:
	verilator -Wall -cc  $(FILE).v  --Mdir obj_$(FILE) --prefix $(FILE)
	make -C obj_$(FILE) -f topMod.mk
	g++ -g -I /usr/share/verilator/include -I obj_$(FILE)  /usr/share/verilator/include/verilated.cpp $(FILE).cpp obj_$(FILE)/$(FILE)__ALL.a -o $(FILE)

clean:
	rm -rf obj_$(FILE) $(FILE)

