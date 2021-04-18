#include "exponentation.h"

int main() {
    printf("Enter the power of 3(>0): ");
    int pow;
    while(scanf("%d", &pow) != 1 || pow <= 0)
    {
        printf("Try again.\n");
        while(getchar() != (int)'\n'){}
    }
    MultiNum num1 = ThreePower(pow);
    printf("|ThreePower||Result: "); 
    ShowNum(&num1);

    MultiNum temp = CreateNum("3");
    MultiNum num2 = BinPow(temp, pow);
    printf("\n|BinaryPower||Result: "); 
    ShowNum(&num2);

    Delete(&num1);
    Delete(&num2);
    return 0;
}
