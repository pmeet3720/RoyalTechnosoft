// quick sort using recurrsion

#include<stdio.h>

void swap(int *, int *);

void quickSort(int [], int, int);

void main(){
    int nbr;
    printf("Enter number of elements in array: ");
    scanf("%d", &nbr);

    int arr[nbr];

    for (int i = 0; i < nbr;i++){
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, nbr - 1);

    printf("Sorted Array: \n");

    for (int k = 0; k < nbr;k++){

        printf("%d ", arr[k]);
    }
}

void swap(int* a,int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int arr[],int first, int last){
    int pivot, i, j;

    if(first<last){
        pivot = first;
        i = first;
        j = last;
        while(i<j){
            while(arr[i]<=arr[pivot] && i<last){
                i++;
            }
            while(arr[j]>arr[pivot]){
                j--;
            }
            if(i<j){
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[pivot], &arr[j]);
        quickSort(arr, first, j - 1);
        quickSort(arr, j + 1, last);
    }
}