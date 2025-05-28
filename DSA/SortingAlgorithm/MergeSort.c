#include<stdio.h>

#define SIZE 5

void main(){
    int i, j, k,size1;
    size1 = SIZE * 2;
    int a[SIZE];
    int b[SIZE];
    int c[size1];

    printf("Enter sorted Array1: \n");

    for (i = 0; i < SIZE;i++){
        printf("Array1: ");
        scanf("%d", &a[i]);
    }

    printf("Enter sorted Array2: \n");

    for (i = 0; i < SIZE;i++){
        printf("Array2: ");
        scanf("%d", &b[i]);
    }

    i = 0;
    j = 0;
    k = 0;
    while(i<SIZE && j<SIZE){
        if(a[i]<b[j]){
            c[k] = a[i];
            i++;
        }else{
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while(i<SIZE){
        c[k] = a[i];
        i++;
        k++;
    }
    while(j<SIZE){
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Sorted Merged Array: \n");

    for (i = 0; i < size1;i++){
        printf("%d ", c[i]);
    }
}