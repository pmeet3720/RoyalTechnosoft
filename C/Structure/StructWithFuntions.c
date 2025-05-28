// implement structure with function
#include<stdio.h>

struct Student scanData(struct Student);

void displayData(struct Student);

struct Student{
    int rno, marks, std;
    char name[50];
};

struct Student scanData(struct Student s){
    printf("\nEnter Roll No.: ");
    scanf("%d", &s.rno);

    printf("\nEnter Name: ");
    scanf("%s", &s.name);

    printf("\nEnter marks: ");
    scanf("%d", &s.marks);

    printf("\nEnter std: ");
    scanf("%d", &s.std);

    return s;
}

void displayData(struct Student s){
    printf("Stduent details: ");
    printf("Roll No. %d\tName: %s\tMarks: %d\tStd. %d", s.rno, s.name, s.marks, s.std);
    printf("\n");
}

void main(){

    struct Student s[5];

    for (int i = 0; i < 5;i++){

        s[i] = scanData(s[i]);

    }

    for (int i = 0; i < 5;i++){
        displayData(s[i]);
    }
}