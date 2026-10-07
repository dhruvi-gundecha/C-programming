#include<stdio.h>
int main(){
    int number;

    printf("enter the number : ");
    scanf("%d",&number);

    switch(number){
        case 1:
        printf("JANUARY : 31 ");
        break;
        case 2:
        printf("FEBRUARY : 28/29 ");
        break;
        case 3:
        printf("MARCH : 31 ");
        break;
        case 4:
        printf("APRIL : 30 ");
        break;
        case 5:
        printf("MAY : 31 ");
        break;
        case 6:
        printf("JUNE : 30 ");
        break;
        case 7:
        printf("JULY : 31 ");
        break;
        case 8:
        printf("AUGUST : 31 ");
        break;
        case 9:
        printf("SEPTEMBER : 30 ");
        break;
        case 10:
        printf("OCTOMBER : 31 ");
        break;
        case 11:
        printf("NOVEMBER : 30 ");
        break;
        case 12:
        printf("DECEMBER : 31 ");
        break;
        default:
        printf("invalid choice...");
        break;
    }
    return 0;
}