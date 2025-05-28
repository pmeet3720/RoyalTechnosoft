// print multiplication table from 1 to 12
#include<stdio.h>

void main(){
    int i = 1, j = 1,x,row=1,col=1;
    printf("\n");

    printf("               Multiplication Table            \n");
    printf("\n----------------------------------------------------\n");

    while(i<=12){
        j = 1;
        while(j<=10){

            x = i * j;
            printf("%4d ", x);
            j++;
        }
        printf("\n");
        i++;
    }

    printf("\n------------------------------------------------------");

}