#include<stdio.h>

void insertionSort(int[], int);

void main(){

    int arr[] = {15, 6, 19, 25, 30, 7, 18};

    int n = sizeof(arr) / 4;

    printf("\nBefore Sorting: ");
    for (int i = 0; i < n;i++){
        printf("%d ", arr[i]);
    }

    insertionSort(arr, n);

    printf("\nAfter Sorting: ");
    for (int i = 0; i < n;i++){
        printf("%d ", arr[i]);
    }
}

void insertionSort(int arr[], int size){
    int i = 1, j = 0, min, tmp = 0,cnt=0;

    while(i<size){
        j = i - 1;
        tmp = arr[i];
        while(j>=0 && arr[j] > tmp){
            arr[j + 1] = arr[j];
            arr[j] = tmp;
            j--;
        }
        

        i++;
    }
}