#include<stdio.h>

/*
int no; // normal number decalaration
no = 10
&no = 65520-21

int *ptr; //pointer declaration
ptr = &no // it stores address of no as value in it
ptr has it's own address

*/

void main(){

    int no, *ptr;

    no = 10;
    printf("\nNo.: %d", no);
    printf("\nAddress of No.: %u", &no);

    printf("\n---------------------");

    ptr = &no;
    printf("\nptr: %u", ptr);
    printf("\nAddress of ptr: %u", &ptr);
    printf("\nValue of ptr: %d", *ptr);

    printf("\n---------------------");

    *ptr = 1000;
    printf("\nUpdated value of ptr: %d", *ptr);
    printf("\nIt also updates value of No.: %d", no);
}