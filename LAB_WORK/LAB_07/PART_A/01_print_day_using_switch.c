#include<stdio.h>
int main(){

    int day;

    printf("enter the number : ");
    scanf("%d",&day);

    switch(day){
        case 1:
        printf("Sunday...");
        break;
        case 2:
        printf("monday...");
        break;
        case 3:
        printf("tuesday...");
        break;
        case 4:
        printf("wednesday...");
        break;
        case 5:
        printf("thrusday...");
        break;
        case 6:
        printf("friday...");
        break;
        case 7:
        printf("saturday...");
        break;
        default:
        printf("invalid choice...");
        break;
    }

    return 0;
}
