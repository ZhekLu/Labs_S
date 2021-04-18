#include "declensionOfNumber.h"

#include <sys/resource.h>
#include <sys/time.h>
#include <unistd.h>


int main()
{
   
    struct rlimit rl;
    rl.rlim_cur = 3000000;
   
    /* setrlimit(RLIMIT_CPU, &rl);*/
    setrlimit(RLIMIT_AS, &rl); 
    
    /*
    // RLIMIT_RSS //ulimit -m //ps -aux // 
    */
    int num, cases;
    GetParams(&num, &cases);
    char* number = NumberDeclension(num, HowManyDigits(num), cases);
    if(number)
        printf("|Result| %s\n", number);
    else  
        printf("\nThere's no enought memory for complete program.\n"); 
    free(number);

    return 0;
}

