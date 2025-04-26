#include<stdio.h>
#include<string.h>
int checkPalli(char word[]){
    int i,j;
    int flag=1;
    int len=strlen(word);
    for(i=0,j=len-1;word[i]!='\0';i++,j--){
        if(word[i]!=word[j]){
            flag=0;
            break;
        }
    }return flag;
}

int partString(char str[]){
    int i=0,j=0,k=0;
    int con=0;
    char word[40];
    
    while(str[i]!='\0'){
        j=i;
        k=0;
        while(str[j]!=' '){
            word[k]=str[j];
            k++;
            j++;
        }
        word[k]='\0';
        i=j+1;
        // printf("%s\n",word);
        if(checkPalli(word)==1){
            printf("%s\n",word);
            con++;
        }
    }
    return con;
}
int main(){
    char str[40];
    printf("Enter string to check Pallindrom :");
    scanf("%[^\n]s",&str);
    int count=partString(str);
    printf("%d",count);
    return 0;
}