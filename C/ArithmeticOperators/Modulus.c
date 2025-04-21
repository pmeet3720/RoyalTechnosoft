#include<stdio.h>

int main(){
    int a,b,mod;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    mod = a % b;

    printf("The modulus of %d and %d is %d\n", a, b, mod);
    return 0;
}