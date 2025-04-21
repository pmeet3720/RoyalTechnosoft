// display only prime numbers in matrix else underscore
#include<stdio.h>

int main(){
    int a[3][3], i, j,flag=0;

    for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            printf("enter a[%d][%d]: ", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            flag = 0;
            for (int k = 2; k <= a[i][j] / 2;k++){
                if(a[i][j]%k==0){

                    flag = 1;
                    break;
                }
            }
            if(!flag && a[i][j]!=1){
                printf("%d\t", a[i][j]);
            }
            else{
                printf("_\t");
            }
        }
        printf("\n");

    }
    return 0;
}