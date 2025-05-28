#include<stdio.h>

#define SIZE 5
int top = -1;
int stack[SIZE];

void push(int);
void pop();
void display();

void main(){
    push(10);
    push(20);
    push(30);
    pop();
    pop();
    push(40);
    push(50);
    pop();
    push(100);
    display();
}

void push(int num){
    if(top == SIZE){
        printf("Stack is full");
    }else{
        top++;
        stack[top] = num;
    }
}

void pop(){
    if(top == -1){
        printf("Stack is empty");
    }else{
        printf("\n%d popped", stack[top]);
        top--;
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