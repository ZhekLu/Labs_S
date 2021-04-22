#include "bintree.h"
#include <string.h>

void freeTree(bintree** root){
    if((*root)->left)
        freeTree(&((*root)->left)); 
    if((*root)->right)
        freeTree(&((*root)->right));
    free(*root);
}

void createTree(char* str, bintree** root){
    char delimiters[] = " ,./!?;";
    char* ptr = strtok(str, delimiters);
    int temp = 0;
    while(ptr){
        temp = atoi(ptr); 
        if(temp)
            AddNode(temp, root); 
        ptr = strtok(NULL, delimiters); 
    } 
}

void AddNode(int digit, bintree** root){
    if(!*root){
        *root = (bintree*)malloc(sizeof(bintree));
        (*root)->left = NULL;
        (*root)->right = NULL;
        (*root)->digit = digit; 
    }
    else{
        if ((*root)->digit > digit)
            AddNode(digit, &((*root)->left));
        if ((*root)->digit < digit)
            AddNode(digit, &((*root)->right)); 
    }
}

void LeftOrder(bintree* root){
    if(!root)
        return; 
    if(root->left)
        LeftOrder(root->left);
    printf("%d\t", root->digit);
    if(root->right)
        LeftOrder(root->right);
}

void RightOrder(bintree* root){
    if(!root)
        return;
    if(root->right)
        RightOrder(root->right);
    printf("%d\t", root->digit);
    if(root->left)
        RightOrder(root->left);
}

int Menu(){
    printf("\nWhat u want to do?\n"
    "1. Enter digit string.\n"
    "2. Add new digits to ur string.\n"
    "3. Show ascending.\n"
    "4. Show descending.\n"
    "5. Exit.\n");
    int input;
    while(1){
        if(scanf("%d", &input) != 1){
            while(getchar() != (int)'\n');
            printf("Uncorrect input. Try again.\n");
        }
        else if (input < 1 || input > 5){
            printf("U should enter digit from 1 to 5\n");
        }
        else{
            return input; 
        }
    }
}