#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
int top = -1;
int stack[SIZE];

int push(int);
int pop();
void display();

void main(){
    int pushValue;
    int popValue;
    int choice;

    while(1){
        printf("\n1__push");
        printf("\n2__pop");
        printf("\n3__display");
        printf("\n4__exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                int num;
                printf("\nEnter number: ");
                scanf("%d", &num);

                pushValue = push(num);
                if(pushValue == -1){
                    printf("\nStack Overflow");
                }else{
                    display();
                }
                break;
            case 2:
                popValue = pop();
                if(popValue == -1){
                    printf("\nStack Underflow");
                }else{
                    printf("\npopValue: %d", popValue);
                }
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
}

int push(int num){
    if(top == SIZE-1){
        return -1;
    }else{
        top++;
        stack[top] = num;
        return stack[top];
    }
}

int pop(){
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
            printf("\n%d", stack[i]);
        }
    }
}