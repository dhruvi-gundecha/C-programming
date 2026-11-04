// 5. Find factors of the given number.

#include<stdio.h>
void main(){
    int i,n;
    i=1;
    printf("enter the factor number :");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            printf("%d  ",i);
        }
        i++;
    }
}
