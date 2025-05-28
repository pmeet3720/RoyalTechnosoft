#include<stdio.h>
#include<stdlib.h>

#define SIZE 20
int top = -1;
char stack[SIZE];

char push(char);
char pop();
void display();

void main(){
    char stringValue[30];
    char pushValue;
    char popValue;
    int choice;

    printf("\nenter string: ");
    gets(stringValue);

    for (int i = 0; stringValue[i] != '\0';i++){
        pushValue = push(stringValue[i]);
    }
    if (pushValue == -1)
    {
        printf("\nStack Overflow");
    }else{
        display();
    }

    

    // while (1)
    // {
    //     printf("\n1__push");
    //     printf("\n2__pop");
    //     printf("\n3__display");
    //     printf("\n4__exit");

    //     printf("\nEnter choice: ");
    //     scanf("%d", &choice);

        

    //     switch (choice)
    //     {
    //         case 1:
    //             // char ch;
    //             // printf("\nEnter character: ");
    //             // scanf(" %c", &ch);

    //             printf("\nenter string: ");
    //             for (int i = 0; stringValue[i] != '\0';i++){
    //                 scanf(" %c", &stringValue[i]);
    //             }

    //             for (int i = 0; stringValue[i] != '\0';i++){
    //                 pushValue = push(stringValue[i]);
    //             }
    //             if (pushValue == -1)
    //             {
    //                 printf("\nStack Overflow");
    //             }
    //             break;
    //         case 2:
    //             popValue = pop();
    //             if(popValue == -1){
    //                 printf("\nStack Underflow");
    //             }else{
    //                 printf("\npopValue: %c\n", popValue);
    //                 printf("After pop: ");
    //                 display();
    //             }
    //             break;
    //         case 3:
    //             display();
    //             break;
    //         case 4:
    //             exit(0);
    //     }
    // }
}

char push(char ch){
    if(top == SIZE-1){
        return -1;
    }else{
        top++;
        stack[top] = ch;
        return stack[top];
    }
}

char pop(){
    if(top == -1){
        return -1;
    }else{
        int n;
        n = stack[top];
        top--;
        return n;
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty");
    }else{
        for (int i = top; i >= 0;i--){
            printf("%c", stack[i]);
        }
    }
}