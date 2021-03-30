#include "arrayFunctions.h"
#include <assert.h>

int test_DiagonalSorting()
{
    /* int testArr [3][3] = 
     {
         0, 1, 6,
         2, 4, 2,
         3, 1, 0
     };
     int resArr [4][4] = 
     {
         0, 1, 3,
         2, 4, 1,
         6, 2, 0
     };*/
    int size = 3, i;

    int **testArr = (int**)malloc(size * sizeof(int*));
    for(i = 0; i < size; i++)
        testArr[i] = malloc(size * sizeof(int));
    /*initialize testArr*/
    testArr[0][0] = testArr[2][2] = 0;
    testArr[0][1] = testArr[2][1] = 1;
    testArr[1][0] = testArr[1][2] = 2;
    testArr[2][0] = 3;
    testArr[1][1] = 4;
    testArr[0][2] = 6;

    int **resArr = (int**)malloc(size * sizeof(int*));
    for(i = 0; i < size; i++)
        resArr[i] = malloc(size * sizeof(int));
    /*initialize resArr*/
    resArr[0][0] = resArr[2][2] = 0;
    resArr[0][1] = resArr[1][2] = 1;
    resArr[1][0] = resArr[2][1] = 2;
    resArr[0][2] = 3;
    resArr[1][1] = 4;
    resArr[2][0] = 6;
    DiagonalSortArr(testArr, size, size);
    assert(testArr == resArr);
    /*free memory*/
    for (i = 0; i < size; i++)
    {
        free(testArr[i]);
        free(resArr[i]);
    }
    free(testArr);
    free(resArr);
    
}
#undef main

int main()
{
    test_DiagonalSorting();
}
