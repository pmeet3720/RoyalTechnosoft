#include<stdio.h>

int main(){
    
        int a, b, div;
    
        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);
    
        div = a / b;
    
        printf("The division of %d and %d is %d\n", a, b, div);
        return 0;
}