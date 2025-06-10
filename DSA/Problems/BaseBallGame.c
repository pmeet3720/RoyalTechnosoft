/*
Input: ops = ["5","2","C","D","+"]
Output: 30
Explanation:
"5" - Add 5 to the record, record is now [5].
"2" - Add 2 to the record, record is now [5, 2].
"C" - Invalidate and remove the previous score, record is now [5].
"D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
"+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
The total sum is 5 + 10 + 15 = 30.
 */

#include<stdio.h>
#include<stdlib.h>
#define SIZE 30
char Stack[SIZE];
int top = -1;

void push(int);
int pop();
void display();
char currChar();
char prevChar();

void main(){

    char ops[30];
    int c,p;
    gets(ops);

    for (int i = 0; ops[i] != '\0';i++){
        if((ops[i] >= '0' && ops[i] <= '9')){
            int num;
            num = ops[i] - '0';
            push(num);
        }else if(ops[i] == 'C'){
            c = pop();
        }else if(ops[i] == 'D'){
            c = currChar();
            push(c * 2);
        }else if(ops[i] == '+'){
            c = currChar();
            p = prevChar();
            push(c + p);
        }else{
            int num = atoi(ops[i]);
            push(num);
        }
    }
    printf("Total: %d\n", sumStack());
    display();
}

void push(int ch){
    if(top == SIZE-1){
        printf("Stack overflow");
    }else{
        top++;
        Stack[top] = ch;
        printf("Pushed Value: %d\n", Stack[top]);
    }
}

char currChar(){
    return Stack[top];
}
char prevChar(){
    return Stack[top - 1];
}
int pop(){
    if(top == -1){
        return -1;
    }else{
        int pch;
        pch = Stack[top];
        top--;
        return pch;
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty");
    }else{
        for (int i = top; i >= 0;i--){
            printf("%d ", Stack[i]);
        }
    }
}


int sumStack(){
    int sum = 0;
    for (int i = top; i >= 0;i--){
        sum += Stack[i];
    }
    return sum;
}