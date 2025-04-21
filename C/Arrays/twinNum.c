// twin numbers
#include<stdio.h>

int main(){
    int a[10], i, j, temp = 0,sum=0,mul=1,no,flag=0,c=0;
    for (i = 0; i < 10;i++){
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10;i++){

        sum = 0;
        mul = 1;
        no = a[i];

        while(no>0){
            temp = no % 10;
            sum += temp;
            mul *= temp;
            no /= 10;
        }

        if(sum == mul){
            printf("The twin num: %d\n", a[i]);
            flag = 1;
        }

        else{
            c++;
        }


    }

    printf("The count of non twin num is : %d", c);

    return 0;
}