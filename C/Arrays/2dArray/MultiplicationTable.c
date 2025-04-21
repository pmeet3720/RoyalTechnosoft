// display multiplication table in matrix format

#include<stdio.h>

int main(){
    int a[5][5], i, j,row,col;

    // for (i = 0; i < 5;i++){
    //     for (j = 0; j < 5;j++){
    //         printf("enter a[%d][%d]: ", i, j);
    //         scanf("%d",&a[i][j]);
    //     }
    // }

    // col = 5;
    // row = 5;

    printf("\n\n");

    printf("      Multiplication Table\n\n    ");
    printf("");

    for (j = 1; j <= 5;j++){
        printf("%4d", j);
    }
    printf("\n");

    printf("______________________________\n");

    for (i = 0; i < 5; i++)
    {
        row = i + 1;
        printf("%2d |", i+1);
        for (j = 0; j < 5; j++)
        {
            col = j + 1;
            printf("%4d", row * col);
        }
        printf("\n");
    }
    return 0;
}