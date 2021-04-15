#include "declensionOfNumber.h"
/*#include <locale.h>*/

int main()
{
    /*setlocale(LC_ALL, "Rus");*/
    int num, cases;
    
    struct rlimit rl;
    getrlimit(RLIMIT_CPU, &rl);
    rl.rlim_cur = 3000000; 
    /*setrlimit(RLIMIT_CPU, &rl);*/
    setrlimit(RLIMIT_AS, &rl); 
    
    GetParams(&num, &cases);
    char* number = NumberDeclension(num, HowManyDigits(num), cases);
    if(number)
        printf("|Result| %s\n", number);
    free(number);
    return 0;
}
