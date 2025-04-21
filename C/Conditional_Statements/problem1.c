// if user is 18+ then he/she can drive or else not

#include<stdio.h>

int main(){
    int age;
    printf("enter age: \n");
    scanf("%d", &age);

    if(age>=18){
        printf("You can drive!\n");
    }else{
        printf("You can'nt drive!\n");
    }
    return 0;
}