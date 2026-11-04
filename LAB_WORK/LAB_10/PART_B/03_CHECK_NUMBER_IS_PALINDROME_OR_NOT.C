// 3. Check whether the given number is palindrome or not.

#include<stdio.h>
void main(){
    int i,n,rem,ans,ori;
    ans=0;
    rem=0;
    printf("enter the number:");
    scanf("%d",&n);
    ori=n;
    while(n!=0){
        rem=n%10;
        ans=(ans*10)+rem;
        n=n/10;
    }

    if(ans==ori){
        printf("given number is palindrome...");
    }
    else{
        printf("given number is not palindrome...");
    }
}