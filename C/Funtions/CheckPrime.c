// ask user to input a number and check

#include<stdio.h>

void checkPrime();

int main(){

    checkPrime();

    return 0;
}

void checkPrime(){
    int flag = 1,n;
    printf("enter number: \n");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2;i++){
        if(n%i==0){
            flag = 0;
            break;
        }
    }
    if(flag && n!=1){
        printf("The number %d is prime", n);
    }else{
        printf("Number %d is not prime", n);
    }
}