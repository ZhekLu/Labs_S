#include <sys/time.h>
#include <sys/resource.h>
#include <assert.h>
#include "bookshop.h"


int main()
{
    NEWSHOP(sh);
    //----------------------Test function AddBooks()------------------------
    //part without rlimits//
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
    //then...
    struct rlimit lim, softlim;
    getrlimit(RLIMIT_AS, &softlim); 
    //printf("\nLims:%ld-------%ld", softlim.rlim_max, softlim.rlim_cur);
    lim.rlim_cur = 1; 
    lim.rlim_max = sizeof(Book*) * 5; 
    setrlimit(RLIMIT_AS, &lim); 
    
    //first malloc break
    assert(AddBooks("booksfortest.txt", &sh) == 0);  

    //restore..
    setrlimit(RLIMIT_AS, &softlim);
    assert(AddBooks("books.txt", &sh) == 1); 
    assert(sh.books != NULL);
    
    lim.rlim_max = sizeof(Book*) * 4; 
    setrlimit(RLIMIT_AS, &lim);
    //secmalloc
    AddBooks("books.txt", &sh); 
    assert(sh.books == NULL);
    printf("LOL srabotalo"); 
}
