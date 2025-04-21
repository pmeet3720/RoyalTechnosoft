// WAP to find simple interest. SI = (P*R*N)/100;

#include<stdio.h>

int main(){
    int p, r, n, si;
    printf("enter values of p,r and n: \n");
    scanf("%d", &p);
    scanf("%d", &r);
    scanf("%d", &n);

    si = (p * r * n) / 100;

    printf("The simple interest value is: %d", si);
    return 0;
}