// string built in method to reverse string
#include<stdio.h>
#include<string.h>

int main(){
    char str1[20], str2[20];
    int flag = 0;

    printf("\nEnter string 1 in same order: ");
    gets(str1);

    strrev(str1);
    printf("Reverse order of string 1: %s", str1);

    printf("\nEnter string 2 in reverse order: ");
    gets(str2);

    

    flag = strcmp(str1, str2);

    if(flag==0){
        printf("both strings are equal");
    }else{
        printf("both strings are not equal");
    }
    return 0;
}