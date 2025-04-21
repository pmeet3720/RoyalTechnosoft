// digit length using do-while..

#include<stdio.h>

int main(){
    int temp = 0, sum = 0, no,c=0;
    printf("enter digit: \n");
    scanf("%d", &no);

    do{

        temp = no % 10;
        printf("%d ", temp);
        no /= 10;
        c++;

    } while (no > 0);

    printf("\n");

    printf("The length of digit: %d", c);
    return 0;
}