#include <assert.h>
#include "answer.h"
int main()
{
    printf("Push s, 0, 4 and then 3!");  
    assert(getAnswer(1, 3) == 3); 
    printf("\nNice, bro"); 
}