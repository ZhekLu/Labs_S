all: task test 

task:
	gcc -std=c89 -o program lab6.c bintree.c 

test:
	gcc -std=c89 -o test -Dmain=_main bintree.c tests.c
	./test

splint:
	splint -boolops -predboolint lab6.c

