// wap to find whether a digit is twin number or not (twin no. - the sum of digit = the mul of digit)

#include<stdio.h>

int main(){
    int no, temp,sum=0,mul=1;
    printf("enter digit: \n");
    scanf("%d", &no);

    while(no>0){
        temp = no % 10;
        sum = sum + temp;
        mul = mul * temp;
        no /= 10;
    }

    printf("The sum and mul is: %d and %d\n", sum, mul);

    if(sum==mul){
        printf("The digit is a twin\n");
    }else{
        printf("not a twin");
    }
    return 0;
}