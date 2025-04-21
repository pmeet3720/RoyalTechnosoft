#include<stdio.h>

int main(){
    int days;
    printf("Enter number of days: \n");
    scanf("%d", &days);

    int months = days / 30;
    int reDays = days % 30;

    printf("The number of months and remaining days is: %d and %d", months, reDays);
    return 0;
}