#include <stdio.h>
int main()
{
    int age;

    printf("enter the age : ");
    scanf("%d", &age);

    if (age >= 18)
        printf("user is eligible for vote");
    else
        printf("user is not eligible for vote");

    return 0;
}

// ------------- Key Point's -------------

// for example :- age = 20
// if ( num >= 18) --> 20 >= 18
// yes then eligible for vote
// no then not eligible for vote