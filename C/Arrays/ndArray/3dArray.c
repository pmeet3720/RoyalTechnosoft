// scan and print 3d array
// 3 students na 2 semester na 5 subjects na marks

#include<stdio.h>

int main(){
    int i, j, k, a[3][2][5];

    for (i = 0; i < 3;i++){
        for (j = 0; j < 2;j++){
            for (k = 0; k < 5;k++){
                printf("\nEnter a[%d][%d][%d]: ", i, j, k);
                scanf("%d", &a[i][j][k]);
            }
        }
    }

    for (i = 0; i < 3;i++){
        printf("Student: %d\n", i + 1);
        for (j = 0; j < 2;j++){
            printf("Semester: %d\t", j + 1);
            for (k = 0; k < 5;k++){
                printf("%d\t",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
        return 0;
}