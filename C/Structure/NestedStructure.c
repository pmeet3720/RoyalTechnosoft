// implement nested structure
#include<stdio.h>

struct Student scanData(struct Student);

void displayData(struct Student);

struct Address{
    char city[50], state[50], pin[50];
};

struct Student{
    int rno, marks, std;
    char name[50];
    struct Address a;
};

void main(){

    struct Student s[5];

    for (int i = 0; i < 5;i++){

        s[i] = scanData(s[i]);

    }

    for (int i = 0; i < 5;i++){
        displayData(s[i]);
    }
}

struct Student scanData(struct Student s){
    printf("\nEnter Roll No.: ");
    scanf("%d", &s.rno);

    printf("\nEnter Name: ");
    scanf("%s", &s.name);

    printf("\nEnter marks: ");
    scanf("%d", &s.marks);

    printf("\nEnter std: ");
    scanf("%d", &s.std);

    printf("\nEnter city: ");
    scanf("%s", &s.a.city);

    printf("\nEnter state: ");
    scanf("%s", &s.a.state);

    printf("\nEnter pin: ");
    scanf("%s", &s.a.pin);

    return s;
}

void displayData(struct Student s){
    printf("Stduent details: ");
    printf("Roll No. %d\tName: %s\tMarks: %d\tStd. %d\tCity: %s\tState: %s\tPin: %s", s.rno, s.name, s.marks, s.std,s.a.city,s.a.state,s.a.pin);
    printf("\n");
}

