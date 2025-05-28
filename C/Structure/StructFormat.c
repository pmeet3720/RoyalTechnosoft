// implement structure format student
#include<stdio.h>

struct Student{
    int rno, marks, std;
    char name[50];
};

void main(){
    struct Student s1;
    printf("\nEnter Roll No.: ");
    scanf("%d", &s1.rno);

    printf("\nEnter Name: ");
    scanf("%s", &s1.name);
    // gets(s1.name);

    printf("\nEnter marks: ");
    scanf("%d", &s1.marks);

    printf("\nEnter std: ");
    scanf("%d", &s1.std);

    printf("Stduent details: ");
    printf("%d\t%s\t%d\t%d", s1.rno, s1.name, s1.marks, s1.std);
}