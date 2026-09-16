#include <stdio.h>
void main()
{
    int feet, inches;

    printf("enter the feet : ");
    scanf("%d", &feet);

    inches = feet * 12;

    printf("result = %d", inches);
}

// inches to feet :-

#include <stdio.h>
void main()
{
    int feet, inches;

    printf("enter the inches : ");
    scanf("%d", &inches);

    feet = inches / 12;

    printf("result = %d", feet);
}