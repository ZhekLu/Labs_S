#include "deal.h"

Deal* CleanDealsHistory(Deal* dl)
{
    if(!dl)
        return NULL; 
    if(dl->ptrNext)
        dl->ptrNext = CleanDealsHistory(dl->ptrNext);
    if(dl->buyedBooks)
        free(dl->buyedBooks);
    free(dl);
    return NULL;
}