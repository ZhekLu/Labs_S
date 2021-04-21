#include "bintree.h"
#include <assert.h>

int test_AddNode(){
    bintree* root = NULL;
    AddNode(2, &root);
    assert(root->digit == 2);
    AddNode(1, &root);
    assert(root->left->digit == 1);
    AddNode(3, &root);
    assert(root->right->digit == 3);
}

int test_CreateTree(){
    char str[] = "2 1 3";
    bintree* root = NULL;
    createTree(str, &root);
    assert(root->digit == 2);
    assert(root->left->digit == 1);
    assert(root->right->digit == 3);
}

#undef main 
int main(){
    test_AddNode();
    test_CreateTree();
    printf("Passed.\n");
}