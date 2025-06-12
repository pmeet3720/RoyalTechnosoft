#include<stdio.h>

void selectionSort(int[], int);

void main(){
    int arr[] = {34, 56, 78, 90, 2};
    int size = sizeof(arr)/4;

    printf("\nOriginal array: ");

    for (int i = 0; i < size;i++){
        printf("%d ", arr[i]);
    }

    // printf("\n");

    selectionSort(arr, size);

    printf("\nArray after sorting: ");

    for (int i = 0; i < size;i++){
        printf("%d ", arr[i]);
    }
}

void selectionSort(int arr[], int size){
    int min = -1, i = 0, j = 0, tmp = 0,cnt=0;

    for (j = 0; j < size;j++){
        min = j;
        
        for (i = j+1; i < size ;i++){
            cnt++;
            if(arr[i] < arr[min]){
                min = i;
            }
        }

        if(min != j){
            tmp = arr[min];
            arr[min] = arr[j];
            arr[j] = tmp;
        }
    }

    printf("\nNumber of times code executed: %d", cnt);
}