// print max and min of an array

#include<stdio.h>

int main(){
    int min=999999, max=-99999, a[10];
    for (int i = 0; i < 10;i++){
        printf("\nenter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10;i++){
        if(min>a[i]){
            min = a[i];
        }
    }

    printf("The min number is %d\n", min);

    for (int i = 0; i < 10;i++){
        if(max<a[i]){
            max = a[i];
        }
    }

    printf("The max number is %d", max);

    return 0;
}