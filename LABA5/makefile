all: comFunTest

comFunTest:
	gcc -std=c89 -o comtest -Dmain=_main compare.c compTest.c exponentation.c

test:
	gcc -std=c89 -o test -Dmain=_main compare.c exponentation.c test.c 

task:
	gcc -std=c89 -o program exponentation.c lab5.c 

splint_test:
	splint -compdestroy lab5.c

