all:
	gcc -o shop answer.c bookshop.c lab7progect.c deal.c


testA:
	gcc -ftest-coverage -fprofile-arcs -O0 -o testA test_answerLIB.c answer.c
testAreport:
	gcov -abcfu answer.c

testB:
	gcc -ftest-coverage -fprofile-arcs -O0 -o testB test_bookshopLIB.c bookshop.c deal.c
testBreport:
	gcov -abcfu bookshop.c
	gcov -abcfu deal.c

testBlim:
	gcc -ftest-coverage -fprofile-arcs -O0 -o testBlim test_bookshopLIB_withlimits.c bookshop.c deal.c
testBlimreport: 
	gcov -abcfu bookshop.c

