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
    int limits = 0;  
    int rv = 0; 

    bintree* root = NULL; 
    char str[] = "5 2 7 4 9 10 3 2 0 1 2 3 4 5 6 8 10 55 6 7"; 
    while(!finished)
    {
        limits += 1;
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
                wait(&rv);
                /*WEXITSTATUS*/
                if(rv)
                    finished = 1;

        } 
    }
    printf("Require memory: %d\n", limits); 
    return 0;
}