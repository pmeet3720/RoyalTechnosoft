#include<stdio.h>

int main(){
    char color;
    scanf("%c", &color);

    if(color=="r"){
        printf("stop");
    }else if(color=="g"){
        printf("go");
    }else if(color=="y"){
        printf("wait");
    }
    return 0;
}