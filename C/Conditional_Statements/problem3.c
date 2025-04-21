// wap to print grades according to marks oobtained
#include<stdio.h>

int main(){
    int marks;

    printf("enter marks: \n");
    scanf("%d", &marks);

    if(marks>=90){
        printf("A");
    }else if(marks<90 && marks>=70){
        printf("B");
    }else if(marks<70 && marks>=60){
        printf("C");
    }else if(marks<60 && marks>=40){
        printf("D");
    }else{
        printf("fail");
    }
    return 0;
}