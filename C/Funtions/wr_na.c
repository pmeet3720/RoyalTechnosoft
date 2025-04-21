// WR_NA

#include<stdio.h>

int addFun();

int main(){

    int ans;

    ans = addFun();

    printf("The result of addition is %d", ans);

    return 0;
}

int addFun(){
    int no1, no2,ans;
    printf("\nEnter NO1: ");
    scanf("%d", &no1);

    printf("\nEnter NO2: ");
    scanf("%d", &no2);

    ans = no1 + no2;

    return ans;
}