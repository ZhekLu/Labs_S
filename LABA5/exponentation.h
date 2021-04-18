#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct item {
    int digit;
    struct item* ptrNext;
    struct item* ptrPrev;
} Item;

typedef struct multiNum {
    Item* head; 
    Item* tail;
    int size;
} MultiNum;

MultiNum CreateNum(char* str);
void push_front(MultiNum* num, int digit);
MultiNum ThreePower(int pow);
void ShowNum(const MultiNum* num);
void Delete(MultiNum* num);
void Multiply(MultiNum* first, MultiNum* second);
MultiNum BinPow(MultiNum num, int pow);
