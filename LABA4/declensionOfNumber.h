#include <stdio.h>
#include <stdlib.h>

enum Cases
{
    Im, Rod, Dat, Vin, Tvor, Pred
};

void GetParams(/*@out@*/int* , /*@out@*/int* );
int HowManyDigits(int number);
char* NumberDeclension(int number, int size, int cases);
void Add(char** to, int* to_len, char from[], int from_len);