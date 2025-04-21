// 4 - parts of function:
/**
1. returnType
2. funName
3. arguments
4. operationPart
 */

/*
4 types of funtions:
1. NA-NR
2. NA-WR
3. WA-NA
4. WA-WR
*/

#include<stdio.h>

void addFun(); // declarationPart

int main(){
    addFun(); // calling part

    printf("\n___________________________");

    addFun(); // calling again
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