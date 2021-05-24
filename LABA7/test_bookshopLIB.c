#include <assert.h>
#include "bookshop.h"


int main()
{
    NEWSHOP(sh);
    //----------------------Test function AddBooks()------------------------
    //without rlimits//
    //br 0-1
    assert(AddBooks("unexistfile.txt", &sh) == 0);
    assert(AddBooks("empty.txt", &sh) == 0);
    //br 2
    AddBooks("books.txt", &sh); 
    assert(sh.bookTypeQuantity == 3);
    assert(sh.booksQuantity == 10 + 15 + 5);
    assert(sh.totalCost == 10*1 + 15*3 + 5*10);
    //br 3
    AddBooks("books.txt", &sh); 
    assert(sh.bookTypeQuantity == 3);
    assert(sh.booksQuantity == 10 + 15 + 5);
    assert(sh.totalCost == 10*1 + 15*3 + 5*10);
    //----------------------Test function CheckOutDeal(Shop*)-------------------------
    int quantity = 4; 
    //branch1
    CheckOutDeal(&sh); 
    assert(sh.deals == NULL); 
    
    Deal* testdeal = (Deal*)malloc(sizeof(Deal));
    testdeal->booksQuantity = 5; 
    testdeal->buyedBooks = (int*)malloc(sizeof(int)*quantity);
    int i; 
    for(i = 0; i < quantity; i++)
        testdeal->buyedBooks[i] = 0;
    testdeal->buyedBooks[3] = 5; 
    testdeal->ptrNext = testdeal->ptrPrev = NULL; 
    sh.currDeal = testdeal;
    //branch2
    CheckOutDeal(&sh);
    assert(sh.currDeal == NULL);
    assert((sh.deals) == testdeal); 

    testdeal = (Deal*)malloc(sizeof(Deal));
    testdeal->booksQuantity = 1; 
    testdeal->buyedBooks = (int*)malloc(sizeof(int)*quantity);
    for(i = 0; i < quantity; i++)
        testdeal->buyedBooks[i] = 0;
    testdeal->buyedBooks[2] = 1; 
    testdeal->ptrNext = testdeal->ptrPrev = NULL; 
    sh.currDeal = testdeal;
    //branch3
    CheckOutDeal(&sh);
    assert(sh.currDeal == NULL);
    assert((sh.deals->ptrNext) == testdeal); 

    testdeal = (Deal*)malloc(sizeof(Deal));
    testdeal->booksQuantity = 3; 
    testdeal->buyedBooks = (int*)malloc(sizeof(int)*quantity);
    for(i = 0; i < quantity; i++)
        testdeal->buyedBooks[i] = 0;
    testdeal->buyedBooks[1] = 3; 
    testdeal->ptrNext = testdeal->ptrPrev = NULL; 
    sh.currDeal = testdeal;
    //branch4
    CheckOutDeal(&sh);
    assert(sh.currDeal == NULL);
    assert((sh.deals->ptrNext->ptrNext) == testdeal); 
//--------------------------------------------------------------------------------------------
    
    printf("Complete"); 
}