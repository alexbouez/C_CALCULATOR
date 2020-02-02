all: cmake target
	
cmake:
	(cd build && cmake ..)

target : main

main : 
	make -s -C build

.PHONY: clean run

clean :
	rm -rf build/* bin/*

run :
	./bin/Calculator
