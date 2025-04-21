// to check consonants and vowels

#include<stdio.h>

int main(){
    char val;
    printf("enter character=> ");
    scanf("%c", &val);

    switch(val){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("The entered character is vowel");
            break;
        default:
            printf("The entered char is consonant");
            break;
    }
    return 0;
}