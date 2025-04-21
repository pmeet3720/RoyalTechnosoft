#include<stdio.h>

int main(){
    int no, i=1,sum=0;
    printf("enter number: \n");
    scanf("%d", &no);

    while(i<=no){
        if(i%2!=0){
            printf("%d ", i);
        }
        i++;
    }
    

    printf("\n");
    // printf("%d", sum);
    printf("\n");

   
    return 0;
}