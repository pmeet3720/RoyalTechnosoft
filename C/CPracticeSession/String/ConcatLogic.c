// implement concat logic
#include<stdio.h>

void concatString(char[]);

int main(){
    char str[30];

    printf("\nEnter string: ");
    gets(str);

    int flag = 1;
    concatString(str);
    return 0;
}

void concatString(char str[]){

    char nextStr[20];
    printf("\nEnter string to concate: ");
    gets(nextStr);

    int i = 0, j = 0,k=0;
    while(str[j]!='\0'){
        j++;
    }
    str[j] = ' ';
    j += 1;
    for (k=0,i = j; i < strlen(nextStr)*2;i++,k++){
        str[i] = nextStr[k];
    }
    str[i] = '\0';
    printf("Full string length: %s", str);
}