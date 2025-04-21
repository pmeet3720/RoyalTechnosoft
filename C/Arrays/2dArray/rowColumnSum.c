// display both row and column sum
#include<stdio.h>

int main(){
    int a[3][3], i, j,sum1=0,sum2=0;

    for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            printf("enter a[%d][%d]: ", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    for (i = 0; i < 3;i++){
        sum1 = 0;
        for (j = 0; j < 3;j++){
            sum1 += a[i][j];
            printf("%d\t", a[i][j]);
        }
        printf("= %d", sum1);
        printf("\n");
    }

    for (i = 0; i < 3;i++){
        sum2 = 0;
        for (j = 0; j < 3;j++){
            sum2 += a[j][i];
        }
        printf("= %d\t", sum2);
    }
        return 0;
}