// implement merge sorted array
#include<stdio.h>

void mergeArray(int[], int[]);

void main(){

    int arr1[5],arr2[5],temp;

    for (int i = 0; i < 5;i++){
        printf("Enter arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < 5;i++){
        printf("Enter arr2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    // sort arrays

    for (int i = 0; i < 5;i++){
        for (int j = 0; j < 5;j++){
            if(arr1[j]>arr1[j+1]){

                temp = arr1[j + 1];
                arr1[j + 1] = arr1[j];
                arr1[j] = temp;

            }
        }
    }

    for (int i = 0; i < 5;i++){
        printf("%d ", arr1[i]);
    }

    printf("\n");

    

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr2[j] > arr2[j + 1])
            {

                temp = arr2[j + 1];
                arr2[j + 1] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5;i++){
        printf("%d ", arr2[i]);
    }

    printf("\n");

    // mergeArray(arr1, arr2);
}

// int* sortedArray(int arr[]){



// }

// void mergeArray(int arr1[],int arr2[]){
//     int i, j = 0;

//     for (i = 0; i < 5;i++){
//         j++;
//     }

//     for (i = 0; i < 5;i++){
//         arr1[j] = arr2[i];
//         j++;
//     }

//     printf("Mergerd array: ");
//     for (i = 0; i < 10;i++){
//         printf("%d ", arr1[i]);
//     }
// }