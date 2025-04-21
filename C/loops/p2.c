#include<stdio.h>

// wap to find first number of a digit

int main(){
    int digit;
    printf("enter digit: \n");
    scanf("%d", &digit);

    while(digit>=10){

        digit /= 10;
    }

    printf("first digit is: %d", digit);
}