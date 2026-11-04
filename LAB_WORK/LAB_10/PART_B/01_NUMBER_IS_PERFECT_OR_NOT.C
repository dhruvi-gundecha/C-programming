// 1. Check whether the given number is perfect or not.

#include<stdio.h>
void main(){
    int i,n,sum;
    sum=0;
    i=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            sum=sum+i;
        }
        i++;
    }
    if(sum==n){
    printf("perfect number");
}
else{
    printf("not perfect number");
}
}