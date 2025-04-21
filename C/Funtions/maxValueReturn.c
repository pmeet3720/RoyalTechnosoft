// return max value from an funtion of array
#include<stdio.h>

int maxElement(int[],int);

int main(){
    int a[5],max=-999999,ans=0;

    for (int i = 0; i < 5;i++){
        printf("\nEnter a[%d]: ",i);
        scanf("%d", &a[i]);
    }

    ans = maxElement(a,max);
    printf("The max element from an array is: %d", ans);
    return 0;
}

int maxElement(int a[],int max){

    for (int i = 0; i < 5;i++){
        if(a[i]>max){
            max = a[i];
        }
    }

    return max;
}