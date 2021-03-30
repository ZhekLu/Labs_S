#include "arrayFunctions.h"

int main()
{
    printf("How many rows and cols do u want in ur array?");
    int rows, cols, correctInput = FALSE;
    printf("\n|||rows = ");
    do
    {
        if(scanf("%d", &rows) != 1)
        {
            while(getchar() != '\n') {}
            printf("\nUncorrect input, try again: ");
        }   
        else
        {  
           correctInput = TRUE;
        }
    } while (!correctInput);
    correctInput = FALSE; 
    printf("|||cols = ");
    do
    {
        if(scanf("%d", &cols) != 1)
        {
            while(getchar() != '\n') {}
            printf("\nUncorrect input, try again: ");
        }   
        else
        {  
           correctInput = TRUE;
        }
    } while (!correctInput);
    /*-------------------------*/
    int** array = (int**)malloc(rows * sizeof(int*));
    int i;
    if(array)
	{	
        for(i = 0; i < rows; i++)
            array[i] = (int*)malloc(cols * sizeof(int));
        switch (Menu())
        {
            case 1:
            RandFill(array, rows, cols);
            break;
            case 2:
            HandFill(array, rows, cols);
            break;
        }
        ShowArr(array, rows, cols);
        DiagonalSortArr(array, rows, cols);
        ShowArr(array, rows, cols);
        /*deleted of din array*/
        for(i = 0; i < rows; i++)
            free(array[i]);
        free(array);
    }

    return 0;
}
