// calculator using function definition

#include<stdio.h>

void addFun(); // declarationPart
void subFun();
void mulFun();
void divFun();
void moduloFun();

int main(){

    printf("___CALCULATOR___\n");

    printf("\n___________________________");

    int n=1;
    

    while(n<=5){
        printf("\nEnter choice: ");
        scanf("%d", &n);
        switch(n){
            case 1:
                addFun();
                break;
            case 2:
                subFun();
                break;
            case 3:
                mulFun();
                break;
            case 4:
                divFun();
                break;
            case 5:
                moduloFun();
                break;
            defaut:
                printf("Funtion not valid\n");
        }    
    }
    return 0;
}

// definition Part
void addFun(){
    int no1, no2, result;
    printf("\nEnter NO1: ");
    scanf("%d", &no1);

    printf("\nEnter NO2: ");
    scanf("%d", &no2);

    result = no1 + no2;

    printf("Addition of %d and %d is %d\n", no1, no2, result);
}

void subFun(){
    int no1, no2, result;

    printf("\nEnter NO1: ");
    scanf("%d", &no1);

    printf("\nEnter NO2: ");
    scanf("%d", &no2);

    result = no1 - no2;

    printf("Subtraction of %d and %d is %d\n", no1, no2, result);

}

void mulFun(){
    int no1, no2, result;

    printf("\nEnter NO1: ");
    scanf("%d", &no1);

    printf("\nEnter NO2: ");
    scanf("%d", &no2);

    result = no1*no2;

    printf("Multiplication of %d and %d is %d\n", no1, no2, result);
}

void divFun(){
    int no1, no2, result;

    printf("\nEnter NO1: ");
    scanf("%d", &no1);

    printf("\nEnter NO2: ");
    scanf("%d", &no2);

    result = no1 / no2;

    printf("Division of %d and %d is %d\n", no1, no2, result);
}

void moduloFun(){
    int no1, no2, result;

    printf("\nEnter NO1: ");
    scanf("%d", &no1);

    printf("\nEnter NO2: ");
    scanf("%d", &no2);

    result = no1 % no2;

    printf("Multiplication of %d and %d is %d\n", no1, no2, result);
}
