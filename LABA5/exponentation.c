#include "exponentation.h"

MultiNum CreateNum(char* str){
    MultiNum num = {NULL, NULL, 0};
    int i;
    for(i = strlen(str) - 1; i >= 0; i--)
        push_front(&num, str[i] - '0');
    return num;
}

void push_front(MultiNum* num, int digit){
    Item*x = (Item*)malloc(sizeof(Item)); 
    if(!X)
        return; 
    x->digit = digit; 
    x->ptrPrev = x->ptrNext = NULL;
    if(!num->head){
        num->head = num->tail = x;
    }
    else{
        x->ptrNext = num->head;
        num->head->ptrPrev = x;
        num->head = x;
    }
    num->size++;
}

MultiNum ThreePower(int pow){
    MultiNum newNum = {NULL, NULL, 0};
    Item* current;
    push_front(&newNum, 3);
    int digit, rem = 0; 
    int i;
    for(i = 1; i < pow; i++){
        current = newNum.tail;
        while(current){
            digit = (current->digit * 3 + rem) % 10;
            rem = (current->digit * 3 + rem) / 10;
            current->digit = digit;
            current = current->ptrPrev;
        }
        if(rem)
            push_front(&newNum, rem);
        rem = 0;
    }
    
    return newNum;
}

void ShowNum(const MultiNum* num){
    Item* temp = num->head;
    printf("Number = ");
    int i;
    for(i = 0; i < num->size; i++)
    {
        printf("%d", temp->digit);
        temp = temp->ptrNext;
    }
}

void Delete(MultiNum* num){
    Item* temp = num->head;
    while(temp->ptrNext){
        temp = temp->ptrNext;
        free(temp->ptrPrev);
    }
    free(temp);
   
}
