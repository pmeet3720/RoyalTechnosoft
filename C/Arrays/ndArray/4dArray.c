// scan and print 4d array

#include<stdio.h>

int main(){
    int i, j, k, l, a[2][2][2][5];

    for (i = 0; i < 2;i++){ //section
        for (j = 0; j < 2;j++){ // student
            for (k = 0; k < 2;k++){ // semester
                for (l = 0; l < 5;l++){ // marks
                    printf("\nEnter a[%d][%d][%d][%d]: ", i, j, k, l);
                    scanf("%d", &a[i][j][k][l]);
                }
            }
        }
    }

    for (i = 0; i < 2;i++){ //section
        printf("Section: %d =>\n", i + 1);
        for (j = 0; j < 2;j++){ // student
            printf("Student: %d\n",j+1);
            for (k = 0; k < 2;k++){ // semester
                printf("Semester: %d => ", k + 1);
                for (l = 0; l < 5;l++){ // marks
                    printf("%d\t", a[i][j][k][l]);
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }
        return 0;
}