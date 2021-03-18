#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getIteration(double x,int n);
double getRecursia(double x,int n);
double factorial(int n);

int main(){
    double x,E;
    unsigned long long n = 1;
    printf("Put x and E :\n");
    scanf("%lg%lg",&x,&E);
    double sub;
    double sumIteration;
    do
    {
        sumIteration = getIteration(x,n);
        sub = fabs(sumIteration - sin(x));
        n++;
    } while (sub>E);
    printf("n = %u\n",n);
    double sumRecusia = getRecursia(x,n);
    printf("TeilorIteration: %lg\nSin(x): %lg\nTeilorRecursia: %lg\n",sumIteration,sin(x),sumRecusia);
    system("pause");
}

double factorial(int n){//факториал
    if (n == 1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

double getIteration(double x,int n){//через итерации
    double sum=0;
    while (n > 0)
    {
        sum += pow(-1,n-1)*pow(x,2*n-1)/factorial(2*n-1);
        n--;
    }
    return sum;
}

double getRecursia(double x,int n){//рекурсией
    if(n == 1){
        return x;
    }
    return (pow(-1,n-1)*pow(x,2*n-1)/factorial(2*n-1)) + getRecursia(x , n-1);
}