// implement function to count palindrome words in a string
#include<stdio.h>

int countPalindromeWords(char[]);
int checkPalindrome(char[]);

void main(){
    char str[100];
    printf("\nEnter string: ");
    gets(str);

    int countPal = countPalindromeWords(str);

    printf("Number of palindromes: %d", countPal);
}

int countPalindromeWords(char str[]){
    int len = strlen(str);
    char words[10];
    int i=0, j, k=0,cp=0;
    str[len] = '\0';
    // str[len + 1] = '\0';
    while(str[i]!='\0'){
        j = i;
        k = 0;
        while(str[j]!=' '){
            if(str[j]!='!'){
                words[k] = str[j];
                k++;
                j++;
            }else{
                break;
            }
        }
        words[k] = '\0';
        i = j+1;
        if(checkPalindrome(words) == 1){
            printf("%s\n", words);
            cp++;
        }
    }
    return cp;
}

int checkPalindrome(char word[]){
    int flag = 1;
    int i = 0, j = 0, len = 0;

    while(word[i]!='\0'){
        i++;
    }
    len = i;

    for (i = 0, j = len - 1; i<=j;i++,j--){
        if(word[j]=='!' || word[j]=='.'){
            j = j - 1;
            flag = 1;
            continue;
        }else if(word[i]=='!'){
            flag = 1;
            continue;
        }
        else if(word[i]!=word[j]){
            flag = 0;
            break;
        }
    }
    if(flag==1){
        return 1;
    }else{
        return 0;
    }
}