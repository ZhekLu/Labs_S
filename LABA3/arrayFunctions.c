#include "arrayFunctions.h"

void RandFill(int** array, int rows, int cols)
{
    /*randomize();*/
    int i, j;
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            array[i][j] = rand()/(RAND_MAX/100);
            /*array[i][j] = random(100);*/
}

void HandFill(int** array, int rows, int cols)
{
    int input, correctInput = FALSE;
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("\nElement[%d][%d] = ", i, j);
            do
            {
                if(scanf("%d", &input) != 1)
                {
                    while(getchar() != '\n') {}
                    printf("\nUncorrect input, try again: ");
                }   
                else
                {  
                    correctInput = TRUE;
                }
            } while (!correctInput);
            array[i][j] = input;
            correctInput = FALSE; 
        }
    }
}

void DiagonalSortArr(int** array, int rows, int cols)
{
    int startDot;
    /*Upper than main diagonal*/
    for(startDot = cols - 1; startDot > 0; startDot--)
    {
        int diagonalLen = (startDot >= rows)? rows : startDot + 1;
        int n;
        /*sort*/
        for(n = 0; n < diagonalLen - 1; n++)
        {
            int i, j;
            /*diagonal condition*/
            for(i = 0, j = startDot; i < rows - 1 && j > 0; i++, j--)
            {
                if(array[i][j] > array[i + 1][j - 1])
                {
                    int temp = array[i + 1][j - 1];
                    array[i + 1][j - 1] = array[i][j];
                    array[i][j] = temp;
                }
            }
        }
    }
    /*Lower*/
    if(rows > 1)
        for(startDot = 1; startDot < rows - 1; startDot++)
        {
            int diagonalLen = (rows - 1 - startDot <= cols)? rows - startDot : cols; 
            int n;
            for (n = 0; n < diagonalLen - 1; n++)
            {
                int i, j;
                for(j = cols - 1, i = startDot; i < rows - 1 && j > 0; i++, j--)
                {
                    if(array[i][j] > array[i + 1][j - 1])
                    {
                        int temp = array[i + 1][j - 1];
                        array[i + 1][j - 1] = array[i][j];
                        array[i][j] = temp;
                    }
                }
            }
        }
}

int Menu()
{
    printf("Do u want to fill array by urself?\n\
    1. No, fill it with random.\n\
    2. Yes, I want.\n");
    int input, correctInput = FALSE;   
    do
    {
        if(scanf("%d", &input) != 1)
        {
            while(getchar() != '\n') {}
            printf("\nUncorrect input, try again: ");
        } 
        else if (input != 1 && input != 2)
        {
            printf("\nUncorrect input. U should choose 1 or 2, try again: ");
        }  
        else
        {  
            correctInput = TRUE;
        }
    } while (!correctInput);
    return input;
    
}

void ShowArr(int** array, int rows, int cols)
{
    printf("\nUr array now:\n");
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
