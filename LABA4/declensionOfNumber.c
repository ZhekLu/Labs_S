#include "declensionOfNumber.h"

int HowManyDigits(int number)
{
    if(!number)
        return 1; 
    int counter = 0;
    while(number)
    {
        number /= 10; 
        counter++;
    }
    return counter;

}

void Add(char** to, int* to_len, char from[], int from_len)
{
    char* newTo = (char*)malloc((*to_len) + from_len + 2);
    if(!newTo)
        return;
    int i, j;
    for(i = 0; i < from_len; i++)
    {
        newTo[i] = from[i];
    }
    newTo[i++] = ' ';
    for(j = 0; j < *to_len; j++, i++)
    {
        newTo[i] = *(*to + j);
    }
    newTo[i] = '\0';
    if(to)
        free(*to);
    *to = newTo;
    *to_len += from_len + 1;
}

void GetParams(int* num, int* cases)
{
    printf("Enter a number that u want: ");
    while(1)
    {
        if(scanf("%d", &(*num)) == 1)
        {
            if(*num >= 1 && *num < 1000)
                break;
            else  
                printf("Ur number should be higher that 0 and lower than 1000. Try again.\n");
        }
        else  
        {
            while(getchar() != '\n'){}
            printf("Uncorrect input. Try again.\n");
        }
    }
    printf("Enter a case that u want ur number be in:\n"
    "1. Im.\n2. Rod.\n3. Dat.\n4. Vin.\n5. Tvor.\n6. Pred.\n");
    while(1)
    {
        if(scanf("%d", &(*cases)) == 1)
        {
            if(*cases >= 1 && *cases <= 6)
	    {
		    *cases -= 1;
		    break;
	    } 
            else  
                printf("Ur number should be higher that 1 and lower than 6. Try again.\n");
        }
        else  
        {
            while(getchar() != '\n'){}
            printf("Uncorrect input. Try again.\n");
        }
    }

}
