#include<stdio.h>

int main(){
    
        int a, b, mul;
    
        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);
    
        mul = a * b;
    
        printf("The multiplication of %d and %d is %d\n", a, b, mul);
        return 0;
}