#include<stdio.h>

void main(){
    FILE *fp;

    fp = fopen("./FileHandling/Info.txt", "r");

    fseek(fp, 0, SEEK_END);

    int position = ftell(fp);

    printf("Number of characters or byte in Info.txt file: %d",position);
}