// print total sum of marks and avg in next positions of array

#include<stdio.h>

int main(){
    int i, j, k, a[2][2][7],sum=0,avg=0; // 2 students, 2 semester, 5 marks and 1-total sum, 1 - avg
    // int b[];

    for (i = 0; i < 2;i++){ // student
        for (j = 0; j < 2;j++){ // Semester
            for (k = 0; k < 5;k++){ // marks
                printf("\nEnter a[%d][%d][%d]: ", i, j, k);
                scanf("%d", &a[i][j][k]);
            }
        }
    }

    for (i = 0; i < 2;i++){
        sum = 0;
        for (j = 0; j < 2;j++){
            sum = 0;
            for (k = 0; k < 7;k++){
                if(k<5){
                    sum += a[i][j][k];
                }
                a[i][j][5] = sum;
                avg = sum / 5;
                a[i][j][6] = avg;
                
            }
        }
    }

    for (i = 0; i < 2;i++){
        
        printf("Student: %d\n", i + 1);
        for (j = 0; j < 2;j++){
            printf("Semester: %d\t", j + 1);
            for (k = 0; k < 7;k++){
                printf("%d\t", a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}