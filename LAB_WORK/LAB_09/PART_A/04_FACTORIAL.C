// 4. Find factorial of the given number.

#include<stdio.h>
void main(){
    int n,ans;
    ans=1;
    printf("enter the factorial number :");
    scanf("%d",&n);
    while(n!=0){
        ans=ans*n;
        n--;
    }
    printf("ans:%d",ans);
}