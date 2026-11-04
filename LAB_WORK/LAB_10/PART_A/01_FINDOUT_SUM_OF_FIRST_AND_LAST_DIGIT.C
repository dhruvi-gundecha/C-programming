// 1. Find out sum of first and last digit of a given number.

#include <stdio.h>
int main(){
    int n, first_digit, last_digit;
    
    last_digit=0;
    first_digit=0;

    printf("enter the num:");
    scanf("%d",&n);

    last_digit = n%10;

    while(n>9){
        n=n/10;
    }

    first_digit=n;

    int ans;
    ans=0;

    ans=first_digit+last_digit;
    printf("%d",ans);

    return 0;
}