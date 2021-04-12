#include "exponentation.h"

int main() {
    printf("Enter the power of 3(>0): ");
    int pow;
    while(scanf("%d", &pow) != 1 || pow <= 0)
    {
        printf("Try again.\n");
        while(getchar() != (int)'\n'){}
    }
    MultiNum num = ThreePower(pow);
    printf("|||Result: "); 
    ShowNum(&num);
    Delete(&num);
    return 0;
}
