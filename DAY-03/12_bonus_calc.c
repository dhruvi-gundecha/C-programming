// find grade :-
#include <stdio.h>

int main()
{
    float gross_sal, bouns, sal, b;

    printf("enter the salary : ");
    scanf("%f", &sal);
    printf("enter the bouns(don't enter '%') : ");
    scanf("%f", &bouns);

    bouns = bouns / 100; // for convert in to percent
    b = sal * bouns;     // count how much bouns
    gross_sal = sal + b; // total sal
    printf("salary = %0.2f\n", sal);
    printf("bouns = %0.2f\n", (bouns * 100));
    printf("total salary = %0.2f\n", gross_sal);

    return 0;
}