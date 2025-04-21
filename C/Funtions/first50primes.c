// print 1 to 50 primes and print count
#include<stdio.h>

int isPrime(int num);

int main(){
    int num,ans,pc=0;
    
    for (int i = 1; i <= 50;i++){
        ans = isPrime(i);
        if(ans==1){
            pc++;
            printf("prime %d: %d\n", pc, i);
        }
    }

    printf("Total prime: %d", pc);

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
