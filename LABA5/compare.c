#include "compare.h"
int CompareNums(const MultiNum* num1, const MultiNum* num2){
    if(num1->size != num2->size){
        return FALSE;
    }
    else {
        int i;
        Item* cur1 = num1->head, * cur2 = num2->head;
        for(i = 0; i < num1->size; i++){
            if(cur1->digit != cur2->digit)
                return FALSE;
            cur1 = cur1->ptrNext;
            cur2 = cur2->ptrNext;
        }
    }
    return TRUE;
}