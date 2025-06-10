#include<stdio.h>

int linearSearch(int[], int, int);

void main(){

    int a[] = {20, 30, 40, 45, 56, 70, 80, 99};
    int n = sizeof(a) / 4;
    printf("%d\n", linearSearch(a, 45, n));
    printf("%d\n", linearSearch(a, 045, n));
}

int linearSearch(int a[], int key, int n){

    int i;
    for (i = 0; i < n;i++){
        if(a[i] == key){
            return i;
        }
    }
    return -1;
}