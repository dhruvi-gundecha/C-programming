#include<stdio.h>
int main(){

    int DAYS,WEEKS=0,YEAR=0;

    printf("ENTER THE DAY'S : ");
    scanf("%d",&DAYS);

    while(DAYS >= 7){
        WEEKS = WEEKS+1;
        DAYS = DAYS - 7;
    }

    while(WEEKS >= 52){
        YEAR = YEAR+1;
        WEEKS = WEEKS - 52;
    }

    printf("YEAR : WEEK : DAY = %d : %d : %d ",YEAR,WEEKS,DAYS);
    return 0;
}