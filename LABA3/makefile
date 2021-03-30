all: main tests run_tests valgrind_check linter_check
	
main:
	mkdir -p bin/program
	gcc -std=c89 -o bin/program/program LR3.c arrayFunctions.c

tests:
	mkdir -p bin/tests
	gcc -std=c89 -o bin/tests/test -Dmain=_main test.c arrayFunctions.c
	
run:
	./bin/program/program
	
run_tests:
	./bin/tests/test

valgrind_check:
	mkdir -p bin/temp
	echo 4 > bin/temp/input.txt
	echo 5 >> bin/temp/input.txt
	echo 1 >> bin/temp/input.txt
	valgrind ./bin/program/program < bin/temp/input.txt
	
linter_check:
	splint +charintliteral -boolops LR3.c
	
	
	
	
