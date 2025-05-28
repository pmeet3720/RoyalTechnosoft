// to check number between 1 to 5;

#include<stdio.h>

int main(){
    int no;
    printf("enter n0=> ");
    scanf("%d", &no);

    switch(10)
        ;

    switch(no){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Number between 1 to 5");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            printf("number between 6 to 10");
            break;
        default:
            printf("number more than 10");
        };
    return 0;
}