#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "deal.h"

// #include "book.h"

typedef struct book
{
    char name[30];
    char author[30];
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
    // int revenue; //общая выручка

    int bookTypeQuantity;
    Book** books; 

    Deal* deals; 
    Deal* currDeal; 
}Shop; 

#define NEWSHOP(X) Shop X = {0, 0, 0, 0, 0, NULL, NULL, NULL}

// void ShowBook(const Book* bk);
// void ShowDeal(const Deal* dl);

void CheckOutDeal(Shop* sh);
int AddBooks(char* filename, Shop* sh); 
