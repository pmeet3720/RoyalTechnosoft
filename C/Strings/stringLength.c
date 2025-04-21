// return string length

#include<stdio.h>
int getLength(char[]);

int main(){
    char value[5];
    int len;
    printf("\nEnter value: ");

    scanf("%[^\n]s", &value);
    // gets(value);

    // len = strlen(value); //inbuilt function

    len = getLength(value);
    printf("\nName: %s", value);
    printf("\nThe length of string: %d", len);

    return 0;
}

int getLength(char value[]){
    int len = 0;
    for (int i = 0; value[i] != '\0';i++){
        len++;
    }
    return len;
}