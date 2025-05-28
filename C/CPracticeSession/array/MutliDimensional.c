#include<stdio.h>

void main(){
    int arr[][3] = {};
    float values[10][15];
    int numbers[] = {0, 0, 0, 0, 0};

    
    float item[3][2] = {1, 2, 3, 4, 5};
    printf("%.2f\n", item[2][0]);

    // float result[10] = 0; //error invalid initializer
    // printf("%.2f", result[2]);

   
    // int sum[5][4];
    // for (int i = 0; i < 5;i++)
    //     for (int j = 0; j < 4;j++)
    //         sum[i][j] = 0;

    // for (int i = 0; i < 5;i++)
    //     for (int j = 0; j < 4;j++)
    //         printf("%d\n", sum[i][j]);

    char string[] = "HELLO WORLD";
    int m;
    for (m = 0; string[m] != '\0';m++)
        if(m%2==0)
            printf("%c ", string[m]);

    // printf("%d", arr[0][1]);
}