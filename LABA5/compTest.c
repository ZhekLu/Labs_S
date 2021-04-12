#include "compare.h"
#include <assert.h>

int compNum_test(){
    MultiNum num1 = CreateNum("123456");
    MultiNum num2 = CreateNum("123456");
    MultiNum num3 = CreateNum("123756");
    MultiNum num4 = CreateNum("12345");

    assert(CompareNums(&num1, &num2) == TRUE);
    assert(CompareNums(&num1, &num3) == FALSE);
    assert(CompareNums(&num4, &num2) == FALSE);
}

#undef main 
int main(){
    compNum_test();
    printf("Compare function works well"); 
}