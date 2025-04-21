// check armstrong 
#include<stdio.h>
#include<math.h>

void isArmstrong(int num);

int digitLen(int num);

int main(){
    int no;
    printf("\nEnter number: ");
    scanf("%d", &no);

    isArmstrong(no);
    
    return 0;
}

int digitLen(int num){
    int digit = 0, temp = 0;
    while(num>0){
        temp = num % 10;
        num /= 10;
        digit++;
    }
    return digit;
}

void isArmstrong(int num){
    int digit = digitLen(num), temp = 0, sum = 0;
    int no = num;
    while(num>0){
        temp = num % 10;
        sum = sum + pow(temp, digit);
        num /= 10;
    }
    
    if(no == sum){
        printf("Armstrong number\n");
    }else{
        printf("Not a armstrong\n");
    }
}