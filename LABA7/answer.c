#include "answer.h"


//without conio.h for linux
int getAnswer(int from, int to)
{
    int correctInput = 0, input = 0;
    while(!correctInput)
    {
        if(scanf("%d", &input) != 1)
        {
            while (getchar() != '\n'){}
            printf("\tUncorrect input. U should enter from %d to %d. \n", from, to);
        } 
        else if(input >= from && input <= to)
            correctInput = 1; 
    }
    return input; 
}


// int getAnswer(int from, int to)
// {
//     int correctInput = 0, input = 0;
//     while(!correctInput)
//     {
//         input = getch(); 
//         if(input >= from + (int)'0' && input <= to + (int)'0')
//         //     printf("Uncorrect input. U should enter from %d to %d. \n", from, to);
//         // else 
//             correctInput = 1; 
//     }
//     return input - '0'; 
// }