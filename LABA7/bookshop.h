#pragma once
#include <stdio.h>
#include "deal.h"
// #include "book.h"

typedef struct book
{
    char author[30];
    char name[30];
    unsigned int quantity;
    unsigned int purchasePrice;
    unsigned int salesPrice;
}Book; 
#define NEWBOOK(X) Book X = {"", "", 0, 0, 0}
typedef struct shop
{
    unsigned int booksQuantity;
    unsigned int totalCost; 
    unsigned int dealsQuantity; 
    unsigned int buyedBooksQuantity;
    int revenue; //общая выручка

    int bookTypeQuantity;
    Book** books; 

    Deal* deals; 
    Deal* currDeal; 
}Shop; 

#define NEWSHOP(X) Shop X = {0, 0, 0, 0, 0, 0, NULL, NULL, NULL}