#include "declensionOfNumber.h"
#include <sys/resource.h>
#include <sys/time.h>
#include <unistd.h>
/*#include <locale.h>*/

int main()
{
    /*setlocale(LC_ALL, "Rus");*/
    
    struct rlimit rl;
    getrlimit(RLIMIT_CPU, &rl);
    rl.rlim_cur = 1; 
    setrlimit(RLIMIT_CPU, &rl);
    
    int num, cases;
    GetParams(&num, &cases);
    char* number = NumberDeclension(num, HowManyDigits(num), cases);
    if(number)
        printf("|Result| %s\n", number);
    free(number);
    return 0;
}
