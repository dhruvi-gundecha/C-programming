// 1. Print all uppercase and lowercase alphabets.

#include<stdio.h>
void main(){
    char ch;
    printf("UPPER CASE ALEPABETS :\n");
    ch='A';
    while(ch<='Z'){
            printf("%c ",ch);
            ch++;
    }
    printf("LOWER CASE ALEPABETS :\n");
    ch='a';
    while(ch<='z'){
            printf("%c ",ch);
            ch++;
    }
}
