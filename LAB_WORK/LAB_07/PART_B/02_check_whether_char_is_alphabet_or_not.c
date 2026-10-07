#include<stdio.h>
int main(){
    char ch;

    printf("enter the character : ");
    scanf(" %c",ch);

    ((ch >='A' && ch<='Z')||(ch >='a' && ch<='z'))?printf("char is an alphabet..."):printf("char is not an alphabet...");
    return 0;
}