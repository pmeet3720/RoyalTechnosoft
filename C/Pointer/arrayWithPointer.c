#include<stdio.h>

void main(){
    int arr[5];
    int *ptr;

    ptr = &arr[0];

    for (int i = 0; i < 5;i++){
        printf("Enter arr[%d]: ", i);
        scanf("%d", ptr);
        ptr = ptr + 1;
    }
    ptr = &arr[0];

    for (int i = 0; i < 5;i++){
        printf("arr[%d]: %d\n", i, *ptr);
        ptr = ptr + 1;
    }
}