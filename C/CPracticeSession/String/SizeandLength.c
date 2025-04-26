// size and length of string
#include<stdio.h>

int main(){
    char str[15];
    // int arr[5];

    printf("\nEnter string: ");
    gets(str);

    int i = 0, j = 0;
    while(str[i]!='\0'){
        i++;
    }
    printf("The length of string: %d\n", i);

    int size = sizeof(str);
    printf("The size of string is: %d", size);
    return 0;
}