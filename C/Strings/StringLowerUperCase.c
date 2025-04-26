// string built in method for lower case and upper case
#include<stdio.h>
#include<string.h>

int main(){
    char str1[20], str2[20];

    printf("\nEnter string 1 in Upper Case: ");
    gets(str1);

    printf("\nEnter string 2 in Lower Case: ");
    gets(str2);

    strlwr(str1);
    strupr(str2);

    printf("Lower case for upper case string 1: %s\n", str1);
    printf("Upper case for lower case string 2: %s", str2);
    return 0;
}