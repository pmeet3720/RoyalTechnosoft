// count palindrome in array
#include<stdio.h>

int main(){
    int i, j, flag = 0, pc = 0,no,temp,rev=0,no1;
    int a[10];

    for (i = 0; i < 10;i++){
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10;i++){

        rev = 0;

        no = a[i];
        while(no>0){
            temp = no % 10;
            rev = (rev * 10) + temp;
            no /= 10;
        }
        if(rev==a[i]){
            pc++;
        }else{
            printf("non palindrome: %d\n", a[i]);
        }
    }
    printf("count of palindrome is %d", pc);

    return 0;
}