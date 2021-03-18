#include "1_2_22.h"
#include <assert.h>
int test_is_sequence_ofpairs()
{
    char testNum[] = "110011";
    assert(is_sequence_ofpairs(testNum, 6) == TRUE);
    char testNum2[] = "11001001";
    assert(is_sequence_ofpairs(testNum2, 8) == FALSE);
}

int test_howManyDigits()
{
    assert(HowManyDigits(2, 3) == 2);
    assert(HowManyDigits(2, 1323) == 11);
}
#undef main
int main()
{
    test_is_sequence_ofpairs();
    test_howManyDigits(); 
}