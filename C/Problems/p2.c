// WAP to interchange or swap two numbers using third variable

#include<stdio.h>

int main(){
    int a, b, temp;

    printf("enter two numbers a and b: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("values of a and b after interchange is: %d and %d", a, b);
    return 0;
}