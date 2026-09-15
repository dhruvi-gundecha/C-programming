#include <stdio.h>
int main()
{
    int year;

    printf("enter the year : ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("year is leap year");
    else
        printf("year is not leap year");

    return 0;
}

// ------------- Key Point's -------------

// for example :- year = 2024
// if ((year % 400 == 0) || (year % 4 == 0 && year %100 != 0)) --> 2024 % 400 == 0
// yes then leap year
// no then not leap year