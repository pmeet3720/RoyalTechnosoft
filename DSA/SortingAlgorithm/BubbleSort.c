#include<stdio.h>

void bubbleSort(int[]);

void main(){
    int arr[10] = {9, 2, 4, 5, 6, 1, 7, 8, 3, 0};

    bubbleSort(arr);
}

void bubbleSort(int arr[]){
    int i, j,temp;

    for (i = 0; i < 10;i++){ // for each pass
        for (j = 0; j < 9;j++){ // for each subpass
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // sorted array

    for (i = 0; i < 10;i++){
        printf("%d ", arr[i]);
    }
}