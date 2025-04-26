// string reverse with logic
#include<stdio.h>
#include<string.h>

void reverseString(char[]);

int main(){
    char str[30];

    printf("\nEnter string: ");
    gets(str);

    int flag = 1;
    int i = 0, v = 0, c = 0;

    reverseString(str);
    return 0;
}

void reverseString(char str[]){
    char revStr[30];
    int i = 0, j = 0;

    for (i = strlen(str) - 1; i >= 0;i--){
        revStr[j] = str[i];
        j++;
    }

    revStr[j] = '\0'; // whenever we add a single character to string add null character at end

    printf("reverse string: %s", revStr);
}

