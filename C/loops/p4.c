// to count number of digit

#include<stdio.h>

int main(){
    int no, count = 0, rev = 0, temp = 0;

    printf("enter digit: \n");
    scanf("%d", &no);

    while (no>0)
    {
        no /= 10;
        count++;
    }

    printf("length is: %d", count);
}