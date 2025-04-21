#include<stdio.h>

int main(){

    int a, b, sub;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    sub = a - b;

    printf("The subtraction of %d and %d is %d\n", a, b, sub);
    return 0;
}