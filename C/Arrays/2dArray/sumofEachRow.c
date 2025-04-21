// display sum of each row within each row
#include<stdio.h>

int main(){
    int a[3][3], i, j,sum=0;

    for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            printf("enter a[%d][%d]: ", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    for (i = 0; i < 3;i++){
        sum = 0;
        for (j = 0; j < 3;j++){
            sum += a[i][j];
            printf("%d\t", a[i][j]);
        }
        printf("= %d\t", sum);
        printf("\n");

    }
    return 0;
}