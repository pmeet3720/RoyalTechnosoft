// wap to find factorial of a number
#include<stdio.h>

int main(){
    int no, fact = 1,result=1;
    printf("enter number: \n");
    scanf("%d", &no);

    while(fact<=no){
        result = result * fact;
        fact++;
    }

    printf("%d! => %d\n", no,result);
    return 0;
}