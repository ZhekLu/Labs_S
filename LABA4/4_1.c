#include "declensionOfNumber.h"
/*#include <locale.h>*/

int main()
{
    /*setlocale(LC_ALL, "Rus");*/
    int num, cases;
    GetParams(&num, &cases);
    char* number = NumberDeclension(num, HowManyDigits(num), cases);
    if(number)
        printf("|Result| %s\n", number);
    free(number);
    return 0;
}
