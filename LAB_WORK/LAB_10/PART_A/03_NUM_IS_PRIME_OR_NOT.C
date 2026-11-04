// 3. Find whether the given number is prime or not.

#include<stdio.h>
#include<stdbool.h>
int main(){
    int i,n,count;
    bool flag=true;
    i=2;
    printf("enter the number:");
    scanf("%d",&n);

    while(i<n){
        if(n%i==0){
            flag=false;
            break;
        }
        i++;
    }
    if(flag == true){
        printf("%d is prime number",n);   
    }
    else{
        printf("%d is not prime number",n);
        
    }
}