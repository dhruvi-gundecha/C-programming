// 1. Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.

#include<stdio.h>
void main(){
    int i,n,count;
    count=0;
    i=1;
    printf("enter the number  : ");
    scanf("%d",&n);

    while(i<=n){
        if(i%2!=0){
            count=count+i;
        }
        else{
            count=count-i;
        }
        i++;
    }
    printf("sum of series : %d",count);
}
