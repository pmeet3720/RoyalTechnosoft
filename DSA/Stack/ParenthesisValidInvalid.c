// check string validation using stack
#include<stdio.h>
#include<stdlib.h>

#define SIZE 50
int top = -1;
char stack[SIZE];

void push(char);
char pop();
void display();

void main(){
    int flag = 1;
    char x;
    char str[50];
    printf("\nEnter string: ");
    gets(str);

    for (int i = 0; str[i] != '\0';i++){
        // flag = 1;
        if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
            push(str[i]);
        }else{
            // closing bracket
            x = pop();
            if(str[i] == ')' && x == '('){
                continue;
            }else if(str[i] == ']' && x == '['){
                continue;
            }else if(str[i] == '}' && x == '{'){
                continue;
            }else{
                flag = 0;
                break;
            }
        }
    }
    if(flag == 0 || top != -1){
        printf("\nInvalid Expression");
    }else if(flag==1 && top==-1){
        printf("\nValid Expression");
    }
}

void push(char ch){
    if(top == SIZE-1){
        // return -1;
    }else{
        top++;
        stack[top] = ch;
        // return stack[top];
    }
}

char pop(){
    if(top == -1){
        return -1;
    }else{
        char c;
        c = stack[top];
        top--;
        return c;
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


