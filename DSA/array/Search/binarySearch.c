#include<stdio.h>

int binarySearch(int[], int, int);

void main(){
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(a) / 4;
    // printf("%d", n);
    int search = 100;

    int index = binarySearch(a, n, search);
    printf(" %d", index);
}

int binarySearch(int a[], int n, int search){

    int min, mid, max;
    min = 0;
    max = n - 1;
    while(min <= max){
        
        mid = (min + max) / 2;

        if(a[mid] == search){
            return mid;
        }else if(search > a[mid]){
            min = mid + 1;
        }else{
            max = mid - 1;
        }
    }

    return -1;
}