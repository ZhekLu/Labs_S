#include "bintree.h"
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#include <sys/resource.h>
#include <sys/time.h>

/*#include <errno.h>*/

int main()
{
    pid_t pid; 
    struct rlimit rl;
    int finished = 0;
    int limits = 1;  
    int rv; 

    bintree* root = NULL; 
    char str[] = "5 2 7 4 9 10 3 2 0"; 
    while(!finished)
    {
        switch(pid = fork())
        {
            case -1: printf("Error!\n");
                return 0; 
            case 0:
                rl.rlim_cur = limits;
                setrlimit(RLIMIT_AS, &rl); 
                rv = createTree(str, &root);
                freeTree(&root);
                exit(rv);
            default:
                wait(0);
                /*WEXITSTATUS*/
                if(WEXITSTATUS(rv))
                    finished = 1;

        }
        limits += 1; 
    }
    printf("Require memory: %d\n", limits); 
    return 0;
}