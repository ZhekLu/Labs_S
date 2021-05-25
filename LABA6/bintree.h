#include <stdio.h>
#include <stdlib.h>

typedef struct bintree{
    struct bintree* left; 
    struct bintree* right;
    int digit;
} bintree;

int AddNode(int digit, /*@null@*/bintree** root); 
void LeftOrder(/*@null@*/bintree* root);  
void RightOrder(/*@null@*/bintree* root);
int Menu();
int createTree(char* str, bintree** root); 
void freeTree(bintree** root);
