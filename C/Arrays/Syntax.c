#include<stdio.h>

void main(){
    // int sum[]; 
    // int m[2,4] = {{0,0,0,0},{1,2,3,4}};
    int A[5][4];
    float B[4];

    int i, j;
    // for (i = 1; i <= 5;i++)
    //     for (j = 1; j <= 4;j++)
    //         A[i][j] = 0;

    // for (i = 4; i >= 0;i--)
    //     for (j = 0; j < 4;j++)
    //         A[i][j] = B[j] + 1.0;

    int m[] = {1, 2, 3, 4, 5};
    int x,y = 0;

    for (i = 0; i < 5;i++)
        y = y + m[i];
    printf("%d", y);
}