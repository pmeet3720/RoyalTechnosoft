// NR-WR

#include<stdio.h>

// void addFun(int a, int b);

void checkPrime(int no);

int main(){
    int n;
    printf("enter number: \n");
    scanf("%d", &n);

    checkPrime(n);
    
    return 0;
}

void checkPrime(int no){
    int flag = 1;
    for (int i = 2; i <= no / 2;i++){
        if(no%i==0){
            flag = 0;
            break;
        }
    }
    if(flag && no!=1){
        printf("The number %d is prime", no);
    }else{
        printf("Number %d is not prime", no);
    }
}

// void addFun(int a,int b){
//     int ans;
//     ans = a + b;
//     printf("The result is: %d", ans);
// }