// 2. Find the sum and average of different numbers which are accepted by user as many as user wants.

#include<stdio.h>
int main(){
    
    int sum=0,j,count=0;
    float ave;

    while(1) {

        printf("enter the num:");
        scanf("%d",&j);

        if(j == -1){
            break;
        }
        
        sum=sum+j;
        count++;

    }
    printf("sum :%d\n",sum);
    ave=sum/count;
    printf("ave :%0.2f\n",ave);

    return 0;
}