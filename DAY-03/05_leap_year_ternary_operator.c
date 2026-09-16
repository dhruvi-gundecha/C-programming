#include <stdio.h>
int main()
{
    int year;

    printf("Enter the year : ");
    scanf("%d", &year);

    ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) ? printf("given year is leap year.") : printf("given year is not leap year.");
    return 0;
}