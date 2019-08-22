all: alu ram register_file junk_files

alu: alu.v
	-veripoke $<
ram: ram.v
	-veripoke $<
register_file: register_file.v
	-veripoke $<

junk_files:
	-rm -rf *_dir *.cpp

clean: junk_files
	-rm alu ram register_file *.txt
