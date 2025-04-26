// palindrome program using string
#include<stdio.h>

int main(){
    char str[30];

    printf("\nEnter string: ");
    gets(str);

    int flag = 1;
    int i = 0, j = 0, len = 0;

    while(str[i]!='\0'){
        i++;
    }
    len = i;

    for (i = 0, j = len - 1; str[i] != '\0';i++,j--){
        if(str[i]!=str[j]){
            flag = 0;
            break;
        }
    }
    if(flag==1){
        printf("is palindome\n");
    }else{
        printf("not palindrome");
    }
        return 0;
}