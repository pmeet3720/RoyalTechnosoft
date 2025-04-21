// scan 10 size array and print sum of each digit
#include<stdio.h>

int main(){
    int a[10], i, j, sum = 0,temp=0,no;
    for (i = 0; i < 10;i++){
        printf("enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10;i++){

        no = a[i];

        sum = 0;

        while(no>0){
            temp = no % 10;
            sum += temp;
            no /= 10;
        }

        printf("The sum of digit %d is %d\n", a[i], sum);
    }
        return 0;
}