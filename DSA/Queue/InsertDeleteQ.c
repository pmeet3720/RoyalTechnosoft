// implement insert and delete in queue
#include<stdio.h>
#define SIZE 5
int front = -1;
int rear = -1;
int Q[SIZE];
void insertQ();
void deleteQ();
void displayQ();

void main(){
    int choice;
    while(1){
        printf("\n1_____insert");
        printf("\n2_____delete");
        printf("\n3_____display");
        printf("\n4_____exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                insertQ();
                displayQ();
                break;
            case 2:
                deleteQ();
                displayQ();
                break;
            case 3:
                displayQ();
                break;
            case 4:
                exit(0);
                break;
        }
    }
}

void insertQ(){
    int val;
    if(rear == SIZE-1){
        printf("\nQueue is full");
    }else if(front==-1){
        front = 0;
        rear = 0;
        printf("\nEnter the element to insert: ");
        scanf("%d", &val);
        Q[front] = val;
    }else{
        rear++;
        printf("\nEnter the element to insert: ");
        scanf("%d", &val);
        Q[rear] = val;
    }
}

void deleteQ(){
    if(front == -1){
        printf("\nQueue is empty");
    }else if(front == rear){
        front = -1;
        rear = -1;
    }else{
        front++;
    }
}

void displayQ(){
    int i;
    if(front == -1){
        printf("\nQueue is empty");
    }else{
        for (i = front; i <= rear;i++){
            printf("Q[%d]: %d\n", i, Q[i]);
        }
    }
}