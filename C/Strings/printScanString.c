// scan and print string value

#include<stdio.h>

int main(){
    char value[5];
    printf("\n Enter value: ");
    // scanf("%s", &value);
    // printf("\nName: %s", value);

    scanf("%[^\n]s", value);
    printf("\nName: %s", value);

    // gets(value);
    // printf("\nName: %s", value);
    return 0;
}