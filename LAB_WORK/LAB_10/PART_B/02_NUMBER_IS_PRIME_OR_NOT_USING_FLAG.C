// 2. Find whether the given number is prime or not using flag.

#include<stdio.h>
int main(){
    int i,n,flag;
    i=2;
    printf("enter the number:");
    scanf("%d",&n);

    while(i<n){
        if(n%i==0){
            flag++;
            break;
        }
        i++;
    }
    if(flag==0){
        printf("%d is prime number",n);   
    }
    else{
        printf("%d is not prime number",n);
        
    }
}