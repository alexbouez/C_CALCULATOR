all: cmake target
	
cmake:
	(cd build && cmake ..)

target: main

main: 
	make -C build

.PHONY: all cmake target main clean reset compile run test check

clean:
	rm -rf bin/*

reset: clean
	rm -rf build/*

compile: target

run:
	./bin/Calculator

test:
	(cd build && make testi)

check: compile
	valgrind ./bin/Calculator
