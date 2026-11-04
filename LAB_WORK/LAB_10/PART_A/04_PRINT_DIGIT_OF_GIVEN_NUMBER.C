// 4. Print digits of given number.

#include<stdio.h>
void main(){
    int i,n,digit=0;

    printf("enter the number:");
    scanf("%d",&n);

    while(n!=0){
        digit++;
        n=n/10;
    }

    printf("DIGIT =  %d",digit);
}