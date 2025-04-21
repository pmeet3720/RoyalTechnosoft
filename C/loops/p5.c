// sum of digits

#include<stdio.h>

int main(){
    int no, sum = 0, temp = 0;

    printf("enter digit: \n");
    scanf("%d", &no);

    while (no>0)
    {
        temp = no % 10;
        sum = sum + temp;
        no /= 10;
    }

    printf("sum of digits is: %d", sum);
}