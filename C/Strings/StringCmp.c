// built in method to cmp strings
#include<stdio.h>
#include<strings.h>

int main(){
    char str1[20], str2[20];
    int flag = 0;

    printf("\nEnter string 1: ");
    gets(str1);

    printf("\nEnter string 2: ");
    gets(str2);

    flag = strcmp(str1, str2);
    // if both same it returns - 0 else +1/-1

    if(flag==0){
        printf("Both string are same!\n");
    }else{
        printf("Both strings are not same");
    }

    return 0;
}