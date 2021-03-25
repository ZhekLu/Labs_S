#include <stdio.h>
#include <stdlib.h>
#include "1_2_22.h"

int main()
{
    int m;
    printf("Enter ur value to check if it is a sequence of pairs: ");
    if(scanf("%d", &m) == 1)
    {
        int size;
        char* bin_m = ToBinary(m, &size);
        if(!bin_m)
        {
            printf("\nThere's some problems with memory...\n");
            return 0;
        }
        if(is_sequence_ofpairs(bin_m, size))
        {
            printf("|| %d is a sequence of pairs: %s\n", m, bin_m);
        }
        else 
        {
            printf("|| %d is NOT a sequence of pairs: %s\n", m, bin_m);
        }
        free(bin_m);
    }
    else 
    {
        printf("|Error||Uncorrect input.\n");
    }
    system("pause");
}
// size = size of future digit array
/*@null@*/char* ToBinary(int num, int* size)
{
    *size = HowManyDigits(2, num);
    //there u should check if malloc do smth
    char* binaryNum = (char *)malloc(*size + 1); //free(binaryNum)
    if(!binaryNum)
        return NULL;
    int digit = 0;
    for(int i = 0; i < *size; i++)
    {
        digit = num % 2;
        binaryNum[i] = digit + '0';
        num /= 2;
    }
    binaryNum[*size] = '\0';
    Upend(binaryNum, *size);
    return binaryNum;
}

void Upend(char* arr, int length)
{
    char temp;
    for(int i = 0; i < length / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }
}

int is_sequence_ofpairs(char* num, int length)
{
    if(length % 2 == 1)
    {
        return FALSE;
    }
    else 
    {
        int findPair = FALSE;
        for (int i = 0; i < length; i += 2)
        {
            findPair = (num[i] == num[i + 1])? TRUE : FALSE; 
        }
        return findPair;
    }
}
//n - radix
int HowManyDigits(int n, int number)
{
    int counter = 0;
    while(number)
    {
        number /= n;
        counter++;
    }
    return counter;
}
