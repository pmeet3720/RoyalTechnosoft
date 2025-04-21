#include<stdio.h>

int main(){
    float avg;

    int a, b, c,sum=0;
    printf("Enter numbers a,b,c: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    sum = a + b + c;
    avg = sum/ 3;

    printf("The average %f",avg);
    return 0;
}