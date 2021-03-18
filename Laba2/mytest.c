#include "horoscope.h"
#include <assert.h>
int test_checkFriendship()
{
    assert(CheckFriendship(25, 25) == TRUE); 
    assert(CheckFriendship(25, 64) == FALSE); 
}
int test_checkMarriage()
{
    assert(CheckMarriage(2, 3) == TRUE);
    assert(CheckMarriage(8, 81) == TRUE);
    assert(CheckMarriage(25, 125) == FALSE);
}
int test_checkBusiness()
{
    assert(CheckBusiness(25, 49) == TRUE);
    assert(CheckBusiness(81, 343) == FALSE);
    assert(CheckBusiness(2, 7) == FALSE);
}
#undef main
int main()
{
    test_checkFriendship();
    test_checkMarriage();
    test_checkBusiness();
    
}