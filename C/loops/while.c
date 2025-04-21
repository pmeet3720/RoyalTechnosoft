#include<stdio.h>

int main(){
    int no, i=1,sum=0;
    printf("enter number: \n");
    scanf("%d", &no);

    while(i<=no){
        printf("%d ", i);
        sum = sum + i;
        i++;
    }
    

    printf("\n");
    printf("%d", sum);
    printf("\n");

    // reverse order
    int j = no;

    while(j>=1){
        printf("%d ", j);
        j--;
    }
    return 0;
}