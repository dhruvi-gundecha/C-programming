#include<stdio.h>
int main(){

    int SECOND,MINUTE=0,HOUR=0;

    printf("ENTER THE SECOND'S : ");
    scanf("%d",&SECOND);

    while(SECOND >= 60){
        MINUTE = MINUTE +1;
        SECOND = SECOND - 60;
    }

    while(MINUTE >= 60){
        MINUTE = MINUTE -60;
        HOUR = HOUR +1;
    }

    printf("HH : MM : SS = %d : %d : %d ",HOUR,MINUTE,SECOND);
    return 0;
}