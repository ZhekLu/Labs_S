#include <assert.h>
#include "declensionOfNumber.h"
#include <string.h>

int test_Digits()
{
    assert(HowManyDigits(12345) == 5);
    assert(HowManyDigits(1000) == 4);
    assert(HowManyDigits(9) == 1);
    assert(HowManyDigits(73) == 2);
}

int test_NumDec()
{
    assert(strcmp(NumberDeclension(123, 3, 6), "Ста двадцати трех ") == 0);
}

#undef main 
int main()
{
    test_Digits();
    test_NumDec();
}