// sum of array 

#include<stdio.h>

int sumOfArray(int[]);

int main(){
    int a[5],sum=0;

    for (int i = 0; i < 5;i++){
        printf("\nEnter a[%d]: ",i);
        scanf("%d", &a[i]);
    }

    sum = sumOfArray(a);

    printf("The sum of array elements: %d", sum);
    return 0;
}

int sumOfArray(int a[]){
    int sum = 0;

    for (int i = 0; i < 5;i++){
        sum += a[i];
    }

    return sum;
}