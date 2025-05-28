// implement selection sort 
#include<stdio.h>
#define SIZE 10

void selectionSort(int[]);

void main(){
    int arr[SIZE];

    for (int i = 0; i < SIZE;i++){
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    selectionSort(arr);
}

void selectionSort(int arr[]){
    int min, i, j;

    i = 0;
    min = i;
    while(i<SIZE){
        j = i + 1;
        while(j<SIZE){
            if(arr[j]<arr[min]){
                min = j;
            }
            j++;
        }
        if(min!=i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        printf("PASS %d: ",i+1);
        for (int k = 0; k < SIZE;k++){
            printf("%d ", arr[k]);
        }
        printf("\n");
        i++;
        min = i;
    }
    printf("Sorted Array: \n");
    for (int k = 0; k < SIZE;k++){
        printf("%d ", arr[k]);
    }
}