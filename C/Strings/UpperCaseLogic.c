// implement uppercase function logic
#include<stdio.h>

void upperCaseFun(char[]);

int main(){
    char lower[20];
    printf("\nEnter lower case string: ");
    gets(lower);

    upperCaseFun(lower);
    return 0;
}

void upperCaseFun(char lower[]){
    char upper[20];

    int i = 0, j = 0;
    for (i = 0; lower[i] != '\0';i++){
        if(lower[i]>='a' && lower[i]<='z'){
            upper[i] = lower[i] - 32;
        }else{
            upper[i] = lower[i];
        }
    }

    upper[i] = '\0';

    printf("Upper case string: %s", upper);
}