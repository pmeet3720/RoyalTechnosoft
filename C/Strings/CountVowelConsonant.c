// count vowel and consonant in string
#include<stdio.h>
#include<string.h>

int main(){
    char str[30];

    printf("\nEnter string: ");
    gets(str);

    int flag = 1;
    int i = 0, v = 0, c = 0;

    strlwr(str);

    while(str[i]!='\0'){
        if(str[i]=='a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            v++;
        }else if(str[i]==' '){
            // continue;
        }else{
            c++;
        }
        i++;
    }

    printf("Number of vowels in string is: %d\n", v);
    printf("Number of consonants is: %d", c);

    return 0;
}