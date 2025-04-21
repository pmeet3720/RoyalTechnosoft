// fibonacci series: 0,1,1,2,3,5,8,13,.....

#include<stdio.h>

int main(){
    int f = 0, s = 1, temp = 0, c=0, n=10;

    printf("%d %d ", f, s);

    do{

        temp = f + s;
        printf("%d ", temp);
        f = s;
        s = temp;
        c++;

    } while (c <= n);
    return 0;
}