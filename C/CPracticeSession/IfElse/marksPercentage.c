/*
Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/

#include<stdio.h>

int main(){
    int m1, m2, m3, m4, m5, m6,per;
    printf("Enter physics marks: \n");
    scanf("%d", &m1);
    printf("Enter chemistry marks: \n");
    scanf("%d", &m2);
    printf("Enter mathematics marks: \n");
    scanf("%d", &m3);
    printf("Enter Biology marks: \n");
    scanf("%d", &m4);
    printf("Enter computer marks: \n");
    scanf("%d", &m5);

    per = ((m1 + m2 + m3 + m4 + m5) / 5) * 100;

    if(per >= 90){
        printf("A");
    }
    else if(per >= 80 && per < 90){
        printf("B");
    }
    else if(per >= 70 && per < 80){
        printf("C");
    }
    else if(per >= 60 && per < 70){
        printf("D");
    }
    else if(per >=40 && per <60){
        printf("E");
    }
    else{
        printf("F");
    }

    return 0;
}