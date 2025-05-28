// character stack implementation
#include<stdio.h>
#define SIZE 5
int charTop = -1;
char Stack[SIZE];

void pushChar();
void popChar();
void displayChar();

void main(){
    int choice;

    while(1){
        printf("\n1: push");
        printf("\n2: pop");
        printf("\n3: display");
        printf("\n4: exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                pushChar();
                displayChar();
                break;
            case 2:
                popChar();
                displayChar();
                break;
            case 3:
                displayChar();
                break;
            case 4:
                exit(0);
                break;
        }
    }
}

void pushChar(){

    char charValue;
    if(charTop == SIZE-1){
        printf("\nStack is overflow");
    }else{
        charTop++;
        printf("\nEnter the character to be pushed: ");
        scanf(" %c", &charValue);
        Stack[charTop] = charValue;
    } //end of if else
} // end of push

void popChar(){
    if(charTop == -1){
        printf("\nStack is empty");
    }else{
        printf("Character popped: %c\n", Stack[charTop]);
        charTop--;
        
    } // end of if else
} // end of pop

void displayChar(){
    int i;
    if(charTop==-1){
        printf("\nStack is empty");
    }else{
        for (i = charTop; i >= 0;i--){
            printf("%c \n", Stack[i]);
        }
    } // end of if else
}// end of display