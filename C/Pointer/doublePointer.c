#include<stdio.h>

/*
      no1                 ptr                  ptrptr
 --- ---- ----      --------------        ---------------
 |     10    |      |    65521  |         |   65523    |
 -------------      --------------        ---------------
    65521-22          65523-24               65525-26

    no1 - 10          ptr - 65521            ptrptr - 65523
    &no1 - 65521      &ptr - 65523           &ptrptr - 65525
                      *ptr - 10              *ptrptr - 65521
                                             **ptrptr - 10
                                             **ptrptr = **ptrptr + 200; // value manupulation with double pointer
*/

void main(){
    int no1;
    int *ptr;
    int **ptrptr;

    no1 = 10;
    ptr = &no1;
    ptrptr = &ptr;

    printf("Address of no1: %u\n", &no1);
    printf("Address of ptr: %u\n", &ptr);
    printf("Address of ptrptr: %u\n", &ptrptr);

    printf("Value of no1: %d\n", no1);
    printf("Value at ptr: %d\n", *ptr);
    printf("Value at ptrptr: %u\n", *ptrptr);

    printf("To access no1 value through ptrptr: %d\n", **ptrptr);
}