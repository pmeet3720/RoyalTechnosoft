// scan and print 2d array
#include<stdio.h>

int main(){
    int a[2][3], i, j;

    for (i = 0; i < 2;i++){
        for (j = 0; j < 3;j++){
            printf("enter a[%d][%d]: ", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    for (i = 0; i < 2;i++){
        for (j = 0; j < 3;j++){
            printf("a[%d][%d]: %d\t", i, j, a[i][j]);
        }
        printf("\n");

    }
    return 0;
}