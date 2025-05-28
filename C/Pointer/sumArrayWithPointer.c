#include<stdio.h>

void main(){
    int arr[5],sum=0;
    int *ptr;

    ptr = &arr[0];

    for (int i = 0; i < 5;i++){
        printf("Enter arr[%d]: ", i);
        scanf("%d", ptr);
        ptr = ptr + 1;
    }
    ptr = &arr[0];

    for (int i = 0; i < 5;i++){
        sum = sum + (*ptr);
        ptr++;
    }

    printf("The sum of array using pointer is: %d", sum);
}