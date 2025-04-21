// is prime number with WR_WA

#include<stdio.h>

int isPrime(int num);

int main(){
    int num,ans;
    printf("\nEnter number: ");
    scanf("%d", &num);

    ans = isPrime(num);

    if(ans==1){
        printf("is prime");
    }else{
        printf("not a prime");
    }

    return 0;
}

int isPrime(int num){
    int flag = 1;

    for (int i = 2; i <= num / 2;i++){
        if(num%i==0){
            flag = 0;
            break;
        }
    }

    if(flag && num!=1){
        return 1;
    }
    return 0;
}