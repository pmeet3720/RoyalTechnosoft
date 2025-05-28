#include<stdio.h>

void main(){
    FILE *fp;
    char name[50];
    int age;
    int marks;

    fp = fopen("./FileHandling/earth.txt", "r");

    fscanf(fp, "%s %d %d", &name, &age, &marks);

    fclose(fp);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Marks: %d\n", marks);
}