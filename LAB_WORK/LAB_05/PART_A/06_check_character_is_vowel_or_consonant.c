#include<stdio.h>
int main(){
    char ch;

    printf("enter the character : ");
    scanf(" %c",&ch);

    if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U'){
        printf("GIVEN CHARACTER IS VOWEL...");
    }
    else{
        printf("GIVEN CHARACTER IS CONSONANT...");
    }
    return 0;
}