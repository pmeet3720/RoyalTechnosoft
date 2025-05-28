// implement power to number logic
#include<stdio.h>

int main(){
    int count = 1,n;
    int y, x;

    printf("\nEnter the value of x and n: ");
    scanf("%d %d", &x, &n);

    y = 1;

    while(count<=n){
        y = y * x;
        count++;
    }

    printf("\nvalue of %d to the power %d is %d", x, n, y);
    return 0;
}