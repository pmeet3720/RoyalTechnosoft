// calculator using WR_NA type function

#include<stdio.h>

int addFun(); // declarationPart
int subFun();
int mulFun();
float divFun();
int moduloFun();

int main(){

    int ans;
    float divResult;

    printf("___CALCULATOR___\n");

    printf("\n___________________________");

    int n=1;
    
    while(n<=5){
        printf("\nEnter choice: ");
        scanf("%d", &n);
        switch(n){
            case 1:
                ans = addFun();
                printf("The result of addition is %d", ans);
                break;
            case 2:
                ans = subFun();
                printf("The result of subtraction is %d", ans);
                break;
            case 3:
                ans = mulFun();
                printf("The result of multiplication is %d", ans);
                break;
            case 4:
                divResult = divFun();
                printf("The result of division is %.2f", divResult);
                break;
            case 5:
                ans = moduloFun();
                printf("The result of modulo is %d", ans);
                break;
            defaut:
                printf("Funtion not valid\n");
        }    
    }
    return 0;
}

// definition Part
int addFun(){
    int no1, no2, result;
    printf("\nEnter NO1: ");
    scanf("%d", &no1);

    printf("\nEnter NO2: ");
    scanf("%d", &no2);

    result = no1 + no2;

    return result;
}

int subFun(){
    int no1, no2, result;

    printf("\nEnter NO1: ");
    scanf("%d", &no1);

    printf("\nEnter NO2: ");
    scanf("%d", &no2);

    result = no1 - no2;

    return result;
}

int mulFun(){
    int no1, no2, result;

    printf("\nEnter NO1: ");
    scanf("%d", &no1);

    printf("\nEnter NO2: ");
    scanf("%d", &no2);

    result = no1*no2;

    return result;
}

float divFun(){
    int no1;
    float no2,result;

    printf("\nEnter NO1: ");
    scanf("%d", &no1);

    printf("\nEnter NO2: ");
    scanf("%f", &no2);

    if(no2==0){
        return -1;
    }

    result = no1 / no2;

    return result;
}

int moduloFun(){
    int no1, no2, result;

    printf("\nEnter NO1: ");
    scanf("%d", &no1);

    printf("\nEnter NO2: ");
    scanf("%d", &no2);

    result = no1 % no2;

    return result;
}
