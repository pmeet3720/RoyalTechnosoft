// print odd number and its sum from the entered digit

#include<stdio.h>

int main(){
    int no, temp, sum = 0;
    printf("enter digit: \n");
    scanf("%d", &no);

    while(no>0){
        temp = no % 10;
        if(temp%2!=0){
            sum += temp;
            printf("%d ", temp);
        }
        no /= 10;
    }

    printf("\n");
    printf("The sum of odd numbers: %d\n", sum);
    return 0;
}