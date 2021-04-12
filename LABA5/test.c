
#include "compare.h"
#include <assert.h>

int push_test(){
    MultiNum x = CreateNum("12345");
    MultiNum y = CreateNum("2345");
    push_front(&y, 1);
    assert(CompareNums(&x, &y));
}

int power_test(){
    MultiNum x = CreateNum("91297581665113611259115979754590511595360241199911147");
    MultiNum y = ThreePower(111);
    assert(CompareNums(&x, &y) == TRUE);
}

#undef main 
int main(){
    push_test();
    power_test();
    printf("PASSED"); 
}