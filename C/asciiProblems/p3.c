#include<stdio.h>

int main(){
    char ch;
    char val;
    printf("enter val: \n");
    scanf("%c", &val);

    if(val>=65 && val<=90){
        ch = val + 32;
        printf("val changed to small alpha: %c", ch);
    }else if(val>=97 && val<=122){
        ch = val - 32;
        printf("val changed to capital alpha: %c", ch);
    }else{
        printf("entered val is not alpha");
    }
}