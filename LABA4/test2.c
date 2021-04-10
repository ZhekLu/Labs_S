#include <assert.h>
#include "strFunctions.h"

int test_GetWords()
{
    char arr[] = "12 34";
    assert(GetWords(arr, ' ') == arr);
    assert(GetWords(NULL, ' ') == arr + 3);
    assert(GetWords(NULL, ' ') == NULL);
}

int test_ToDecimal()
{
    assert(ToDecimal("12345") == 5349);
    assert(ToDecimal("4321") == 2257);
}

int test_is_eight_digit()
{
    assert(is_eight_digit("1237123") == TRUE);
    assert(is_eight_digit("23832") == FALSE);
    assert(is_eight_digit("111g222") == FALSE);
}

int test_Length()
{
    assert(Length("1234567") == 7);
    assert(Length("123") == 3);
    assert(Length("0123456789") == 10);
}

#undef main 
int main()
{
    test_GetWords();
    test_ToDecimal();
    test_is_eight_digit();
    test_Length();
    printf("Tests are successfully passed.\n");
}