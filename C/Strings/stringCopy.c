// inbuilt string copy function
#include<stdio.h>

int main(){
    char name[20],name1[20];
    printf("\nEnter name: ");
    scanf("%[^\n]s", &name);

    strcpy(name1, name);

    printf("Name: %s\n", name);
    printf("Name1: %s", name1);

    return 0;
}