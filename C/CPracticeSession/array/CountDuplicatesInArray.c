// count number of duplicates in array
#include<stdio.h>

int countDuplicates(int[]);

int main(){
    int arr[13] = {1, 2, 3, 1, 0, 0, 2, 3, 4, 5, 6, 7, 1};

    int count = countDuplicates(arr);

    printf("Count of duplicates: %d", count);

    return 0;
}

int countDuplicates(int arr[]){
    int c = 0, flag=0;
    int dup[10];

    for (int i = 0; i < 13;i++){
        dup[i] = arr[i];
    }

    for (int i = 0; i < 13;i++){
        if(arr[i]==dup[i]){



        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", dup[i]);
    }

    return c;
}