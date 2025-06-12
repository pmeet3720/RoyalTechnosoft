#include<stdio.h>

//optimized solution of bubbleSort
void bubbleSort(int[], int);

void main(){
    int arr[] = {34, 56, 78, 90, 2};
    int size = sizeof(arr)/4;

    printf("\nOriginal array: ");

    for (int i = 0; i < size;i++){
        printf("%d ", arr[i]);
    }

    // printf("\n");

    bubbleSort(arr, size);

    printf("\nArray after sorting: ");

    for (int i = 0; i < size;i++){
        printf("%d ", arr[i]);
    }
}

void bubbleSort(int arr[], int size){
    int i = 0, j = 0,tmp=0,cnt=0;
    int swap = 1;

    for (j = 0; j < size-1 && swap == 1;j++){

        swap = 0;

        printf("\nPass %d Original Series:", j + 1);
        for (int x = 0; x < size; x++)
        {
            printf(" %d", arr[x]);
        }
        for (i = 0; i < size - 1 - j; i++)
        {
            cnt++;

            if(arr[i]>arr[i+1]){
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                swap = 1;
            }

            printf("\nSubPass %d: ", i + 1);
            for (int x = 0; x < size; x++)
            {
                printf(" %d", arr[x]);
            }
        }
    }

    printf("\nNumber of times subpass excecutes: %d", cnt);
}