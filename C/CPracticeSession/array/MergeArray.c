// implement merge array 
#include<stdio.h>

void mergeArray(int[], int[]);

void main(){

    int arr1[11],arr2[5];

    for (int i = 0; i < 5;i++){
        printf("Enter arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 5;i++){
        printf("Enter arr2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    mergeArray(arr1, arr2);
}

void mergeArray(int arr1[],int arr2[]){
    int i, j = 0;

    for (i = 0; i < 5;i++){
        j++;
    }

    for (i = 0; i < 5;i++){
        arr1[j] = arr2[i];
        j++;
    }

    printf("Mergerd array: ");
    for (i = 0; i < 10;i++){
        printf("%d ", arr1[i]);
    }
}