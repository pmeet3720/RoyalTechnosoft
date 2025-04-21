// WA_WR

#include<stdio.h>

int moduloFun(int no1, int no2);

int main(){
    int no1, no2,ans;
    printf("\nEnter NO1: ");
    scanf("%d", &no1);

    printf("\nEnter NO2: ");
    scanf("%d", &no2);

    ans = moduloFun(no1, no2);

    printf("The result of modulo is %d", ans);

    return 0;
}

int moduloFun(int no1,int no2){
    return (no1 % no2);
}