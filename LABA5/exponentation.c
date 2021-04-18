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

void push_back(MultiNum* num, int digit){
    Item*x = (Item*)malloc(sizeof(Item)); 
    if(!x)
        return;
    x->digit = digit; 
    x->ptrPrev = x->ptrNext = NULL;
    if(!num->head){
        num->head = num->tail = x;
    }
    else{
        x->ptrPrev = num->tail;
        num->tail->ptrNext = x;
        num->tail = x;
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

MultiNum BinPow(MultiNum num, int pow){
    MultiNum res = CreateNum("1"); 
    while(pow){
        if(pow & 1)
            Multiply(&res, &num); 
        Multiply(&num, &num);
        pow >>= 1; 
    }
    return res; 
}

void Multiply(MultiNum* first, MultiNum* second){
    int digit, rem = 0;
    MultiNum* res = (MultiNum*)malloc(sizeof(MultiNum) * (second->size + 1));
    if(!res)
        return;
    int i, j;
    for(i = 0; i <= second->size; i++){
        res[i].size = 0;
        res[i].head = NULL;
        res[i].tail = NULL;
    }
    Item* firstcurr = first->tail, * secondcurr; 
    
    for(i = 0; i < first->size; i++){
        secondcurr = second->tail;
        while(secondcurr){
            digit = (firstcurr->digit * secondcurr->digit + rem) % 10; 
            rem = (firstcurr->digit * secondcurr->digit + rem) / 10; 
            push_front(&res[i], digit);
            secondcurr = secondcurr->ptrPrev;
        }
        if(rem)
            push_front(&res[i], rem);
        rem = 0;
        firstcurr = firstcurr->ptrPrev;
        for(j = 0; j < i; j++)
            push_back(&res[i], 0);
    }

    for(i = 0; i < second->size; i++){
        firstcurr = res[second->size].tail;
        secondcurr = res[i].tail; 
        int n = (res[i].size > res[second->size].size)? res[i].size : res[second->size].size;
        int x, y, rem = 0, digit;
        for (j = 0; j < n; j++){
            x = (firstcurr)? firstcurr->digit : 0;
            y = (secondcurr)? secondcurr->digit : 0;

            digit = (x + y + rem) % 10;
            rem = (x + y + rem) / 10;
            if(firstcurr)
                firstcurr->digit = digit;
            else{
                push_front(&res[second->size], digit);
                firstcurr = res[second->size].head;
            }

            if(firstcurr)
                firstcurr = firstcurr->ptrPrev;
            if(secondcurr)
                secondcurr = secondcurr->ptrPrev;
        }
        if(rem)
            push_front(&res[second->size], rem);
    }

    Delete(first);
    *first = res[second->size]; 
}
