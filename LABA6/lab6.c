#include "bintree.h"

int main(){
    bintree* root = NULL; 
    int is_created = 0, exit = 0;
    char* nums = (char*)malloc(128);
    if(!nums){
        printf("Not enought memory.\n");
        return 0; 
    }  
    while(!exit)
        switch (Menu()){
        case 2:
            is_created = 0; 
	        /*@fallthrough@*/
        case 1:
            if(is_created){
                printf("U have already create a tree\n");
                break; 
            }
            printf("Enter str with nums: ");
            (void)getchar(); 
            if(scanf("%[^\n]%*c", nums) != 1){
                printf("Smthing went wrong..\n");
                break;
            }
            createTree(nums, &root);
            is_created = 1; 
            break;
        case 3:
            if(is_created)
                LeftOrder(root); 
            else  
                printf("U should create a tree before. \n");
            break;
        case 4:
            if(is_created)
                RightOrder(root);  
            else  
                printf("U should create a tree before. \n");
            break;
        case 5:
	        exit = 1;
            break;
        }
    free(nums);
    freeTree(&root);
	return 0;
    
}
