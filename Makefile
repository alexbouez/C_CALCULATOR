all: cmake target
	
cmake:
	(cd build && cmake ..)

target : main

main : 
	make -C build

.PHONY: clean run test

clean :
	rm -rf build/* bin/*

run :
	./bin/Calculator

test :
	(cd build && make test)
