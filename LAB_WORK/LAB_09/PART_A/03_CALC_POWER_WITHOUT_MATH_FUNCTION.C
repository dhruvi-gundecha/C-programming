// 3. Calculate 𝑥𝑦 without using power function.

#include<stdio.h>
void main(){
    int i,base ,power,ans;
    i=1;
    ans=1;
    printf("enter the base:");
    scanf("%d",&base);
    printf("enter the power:");
    scanf("%d",&power);
    while(i<=power){
        ans=ans*base;
        i++;
    }
    printf("ans:%d",ans);
}
