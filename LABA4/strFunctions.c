#include "strFunctions.h"

char* GetWords(char* str, char determine)
{
    static char* lastPtr = NULL;
    if(str == NULL)
    {
        if(!lastPtr)
            return NULL;
        str = lastPtr + 1;
    }
    int i = 0;
    for(i = 0;; i++) 
    {
        if(*(str + i) == determine || *(str + i) == '\0')
            break;
    }
    if(!*(str + i))
    {
        lastPtr = NULL;
    }
    else 
    {
        lastPtr = str + i;
        *lastPtr = '\0';
    }
    return str;    
}

int ToDecimal(char* number)
{

    int decnum = 0, digit;
    int size = Length(number);
    int  i, j;
    for(i = size - 1, j = 0; i >= 0; i--, j++)
    {
        digit = number[i] - '0';
        decnum += digit * pow(8, j);
    }    
    return decnum;
}

int Length(char* str)
{
    int counter = 0;
    while(*str)
    {
        counter++;
        str++;
    }
    return counter;
}

int is_eight_digit(char* number)
{
   while(*number)
    {
        if(*number < '0' || *number > '7')
            return FALSE;
        number++;
    }
    return TRUE;
}
