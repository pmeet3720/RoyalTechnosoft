// multiplication table using for loop

#include<stdio.h>

int main(){
    int no;
    printf("enter no: \n");
    scanf("%d", &no);
    for (int i = 1; i <= 10;i++){
        printf("%d x %d = %d", no,i,no*i);
        printf("\n");
    }
    return 0;
}