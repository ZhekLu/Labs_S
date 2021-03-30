#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TRUE 1
#define FALSE 0 
int Menu();
void ShowArr(/*@out@*/int**, int rows, int cols);
void RandFill(/*@out@*/int**, int rows, int cols);
void HandFill(/*@out@*/int**, int rows, int cols);
void DiagonalSortArr(/*@out@*/int**, int rows, int cols);
