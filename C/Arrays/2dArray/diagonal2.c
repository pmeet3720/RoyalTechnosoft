// display 3 5 7 diagonally

#include<stdio.h>

int main(){
    int a[3][3], i, j;

    for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            printf("enter a[%d][%d]: ", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            if(i+j==2){
                printf("%d\t", a[i][j]);
            }
            else{
                printf(" \t");
            }
        }
        printf("\n");

    }
    return 0;
}