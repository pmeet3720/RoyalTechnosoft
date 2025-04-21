// 48-57 is numerical values
// 65-90 is captical alphabet
// 97-121 is small alphabet

#include<stdio.h>

int main(){
    char val;
    printf("enter value: \n");
    scanf("%c", &val);

    if(val>=65 && val<=90){
        printf("val is capital");
    }else{
        printf("val is not capital");
    }
    return 0;
}