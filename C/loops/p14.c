// odd even

#include<stdio.h>

int main(){
    printf("Even: ");
    for (int i = 2; i <= 10;i+=2){
        printf("%d ", i);
    }

    printf("\n");

    printf("Odd: ");

    for (int i = 1; i <= 10;i+=2){
        printf("%d ", i);
    }
        return 0;
}