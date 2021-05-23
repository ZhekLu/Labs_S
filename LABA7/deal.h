#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef struct deal
{
    int booksQuantity;
    int* buyedBooks;    // ARR[] = {QUANTITY, NUM, NUM, ..., NUM}; 
    struct deal *ptrNext, *ptrPrev; 
}Deal; 

#define NEWDEAL(X) (Deal* X = (Deal*)malloc(sizeof(Deal)); *X = (Deal){0, NULL, NULL, NULL})