// implement different printf formatting

#include<stdio.h>

void main(){
    int n = 43;
    float x = 3.14678;
    printf("Pad with zeros: %05d\n", n);
    printf("Pad with space: %5d\n", n);
    printf("Left align number: %-5d\n", n);
    printf("right align number with 5 digit char number: %+5d\n", n);
    printf("\\%d\n", n);
}