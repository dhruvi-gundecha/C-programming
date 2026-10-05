#include<stdio.h>
int main(){
    int num;

    printf("enter the number : ");
    scanf("%d",&num);

    if(num >=0){
        printf("given number is positive...");
    }
    else{
        printf("given number is negative...");
    }
    return 0;
}