// implement push pop and display for different data types
#include<stdio.h>
#define SIZE 5
int Stack1[SIZE];
char Stack2[SIZE];
float Stack3[SIZE];
int top = -1;
int stackChoice;
void pushInt();
void popInt();
void displayInt();
void pushChar();
void popChar();
void displayChar();
void pushFloat();
void popFloat();
void displayFloat();

int main(){
    int stackChoice,choice;

    while(1){
        printf("\n1: Integer stack");
        printf("\n2: Character stack");
        printf("\n3: Floating value stack");
        printf("\n4: exit");
        printf("\nEnter stack choice: ");
        scanf("%d", &stackChoice);
        switch (stackChoice){
            case 1:
                while(1){
                    printf("\n1: push");
                    printf("\n2: pop");
                    printf("\n3: display");
                    printf("\n4: exit");
                    printf("\nEnter choice: ");
                    scanf("%d", &choice);
                    switch(choice){
                        case 1:
                            pushInt();
                            displayInt();
                            break;
                        case 2:
                            popInt();
                            displayInt();
                            break;
                        case 3:
                            displayInt();
                            break;
                        case 4:
                            exit(0);
                            break;
                    }
                }
            case 2:
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
            case 3:
                while(1){
                    printf("\n1: push");
                    printf("\n2: pop");
                    printf("\n3: display");
                    printf("\n4: exit");
                    printf("\nEnter choice: ");
                    scanf("%d", &choice);
                    switch(choice){
                        case 1:
                            pushFloat();
                            displayFloat();
                            break;
                        case 2:
                            popFloat();
                            displayFloat();
                            break;
                        case 3:
                            displayFloat();
                            break;
                        case 4:
                            exit(0);
                            break;
                    }
                }
        } // end of switch case
    } // end of while
    return 0;
}

void pushInt(){

    int num;
    if(top == SIZE-1){
        printf("\nStack is overflow");
    }else{
        top++;
        printf("\nEnter the element to be pushed: ");
        scanf("%d", &num);
        Stack1[top] = num;
    } //end of if else
} // end of push

void popInt(){
    if(top == -1){
        printf("\nStack is empty");
    }else{
        printf("\nElement popped: %d", Stack1[top]);
        top--;
    } // end of if else
} // end of pop

void displayInt(){
    int i;
    if(top==-1){
        printf("\nStack is empty");
    }else{
        for (i = top; i >= 0;i--){
            printf("\n %d: ", Stack1[i]);
        }
    } // end of if else
}// end of display

void pushChar(){

    char charValue;
    if(top == SIZE-1){
        printf("\nStack is overflow");
    }else{
        top++;
        printf("\nEnter the element to be pushed: ");
        scanf(" %c ", &charValue);
        Stack2[top] = charValue;
    } //end of if else
} // end of push

void popChar(){
    if(top == -1){
        printf("\nStack is empty");
    }else{
        printf("\nElement popped: %d", Stack2[top]);
        top--;
    } // end of if else
} // end of pop

void displayChar(){
    int i;
    if(top==-1){
        printf("\nStack is empty");
    }else{
        for (i = top; i >= 0;i--){
            printf("\n %c: ", Stack2[i]);
        }
    } // end of if else
}// end of display

void pushFloat(){

    float floatValue;
    if(top == SIZE-1){
        printf("\nStack is overflow");
    }else{
        top++;
        printf("\nEnter the element to be pushed: ");
        scanf("%.2f", &floatValue);
        Stack3[top] = floatValue;
    } //end of if else
} // end of push

void popFloat(){
    if(top == -1){
        printf("\nStack is empty");
    }else{
        printf("\nElement popped: %c", Stack3[top]);
        top--;
    } // end of if else
} // end of pop

void displayFloat(){
    int i;
    if(top==-1){
        printf("\nStack is empty");
    }else{
        for (i = top; i >= 0;i--){
            printf("\n %.2f: ", Stack3[i]);
        }
    } // end of if else
}// end of display