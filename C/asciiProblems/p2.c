// 48-57 is numerical values
// 65-90 is captical alphabet
// 97-121 is small alphabet

#include<stdio.h>

int main(){
    char val;
    printf("enter value: \n");
    scanf("%c", &val);

    if(val>=97 && val<=122){
        printf("val is small alpha");
    }else{
        printf("val is not small alpha");
    }
    return 0;
}