#include<stdio.h>

void swap(int *, int *);

void main(){
    int no1, no2;

    no1 = 10;
    no2 = 20;
    printf("\nBefore swapping: ");
    printf("\nNo1: %d", no1);
    printf("\nNo2: %d", no2);

    swap(&no1, &no2);

    printf("\nAfter swapping: ");
    printf("\nNo1: %d", no1);
    printf("\nNo2: %d", no2);
}

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}