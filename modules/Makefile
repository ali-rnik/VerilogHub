FILE=file_name

all: clean
	verilator -Wall -cc  $(FILE).v  --Mdir obj_$(FILE) --prefix V$(FILE)
	make -C obj_$(FILE) -f V$(FILE).mk
	g++ -g -I /usr/share/verilator/include -I obj_$(FILE)  /usr/share/verilator/include/verilated.cpp $(FILE).cpp obj_$(FILE)/V$(FILE)__ALL.a -o $(FILE)

clean:
	rm -rf obj_$(FILE) $(FILE)

