all: 
	task1 task2 test1 test2

task1:
	gcc -std=c89 -o task1 declensionOfNumber.c numberDeclensionFun.c 4_1.c

task2:
	gcc -std=c89 -o task2 strFunctions.c 4_2.c -lm

test2:
	gcc -std=c89 -o test2 -Dmain=_main test2.c strFunctions.c -lm

test1:
	gcc -std=c89 -o test1 -Dmain=_main test1.c declensionOfNumber.c numberDeclensionFun.c

splint_test1:
	splint +posixlib -compdef -syntax -retvalint 4_1.c

splint_test2:
	splint -predboolint -usedef -retvalint -mustfreefresh 4_2.c 




