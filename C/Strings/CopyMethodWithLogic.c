// implement copy method with logic
#include<stdio.h>

void copyStringFun(char[]);

int main(){
    char name1[20];

    printf("\nEnter name 1: ");
    gets(name1);

    copyStringFun(name1);
    return 0;
}

void copyStringFun(char name1[]){
    char name2[20];

    int i = 0, j = 0;
    for (i = 0; name1[i] != '\0';i++){
        name2[i] = name1[i];
    }

    name2[i] = '\0';

    printf("Name 2: %s", name2);
}