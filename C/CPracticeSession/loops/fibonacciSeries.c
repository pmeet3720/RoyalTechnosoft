// print fibonacci series: 1, 1, 2, 3, 5, 8, 13, ....

#include<stdio.h>

void main(){
    int i = 1, j = 1,fib=0,n=0,temp=0;
    printf("%d %d ", i, j);
   
    while(n<=10){
        fib = i + j;
        i = j;
        j = fib;
        n++;
        printf("%d ", fib);
    }

}