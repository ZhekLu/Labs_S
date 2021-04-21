#include <stdio.h>
#include <stdlib.h>

typedef struct bintree{
    struct bintree* left; 
    struct bintree* right;
    int digit;
} bintree;

void AddNode(int digit, bintree** root); 
void LeftOrder(bintree* root);  
void RightOrder(bintree* root);
int Menu();
void createTree(char* str, bintree** root); 