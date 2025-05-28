#include<stdio.h>

void insertionSort(int[]);

void main(){

    int arr[5] = {8, 2, 4, 1, 3};

    insertionSort(arr);
}

void insertionSort(int arr[]){
    int i, j;
    for (i = 1; i < 5;i++){
        int current = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>current){
            arr[j + 1] = arr[j];
            arr[j] = current;
            j--;
        } //end of while loop
    } //end of for loop

    printf("-----Sorted Array using Insertion Sort-------\n");
    for (i = 0; i < 5;i++){
        printf("%d ", arr[i]);
    }
}