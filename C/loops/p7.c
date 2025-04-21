// armstrong number or not

#include<stdio.h>

int main(){
    int no,no1, temp, sum = 0;
    printf("enter the digit: \n");
    scanf("%d", &no);

    no1 = no;

    while(no>0){
        temp = no % 10;
        sum = sum + (temp * temp * temp);
        no /= 10;
    }

    printf("The sum is: %d\n", sum);

    if(sum==no1){
        printf("The digit is armstrong\n");
    }else{
        printf("Not an armstrong");
    }
    return 0;
}