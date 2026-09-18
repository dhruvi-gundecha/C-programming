// USING COUNT VARIABLE :

#include <stdio.h>
int main()
{
    int number, count;
    count = 0;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("GIVEN NUMBER IS PRIME NUMBER....");
    }
    else
    {
        printf("GIVEN NUMBER IS NOT PRIME NUMBER....");
    }
    return 0;
}

// USING BOOLEAN :

#include <stdio.h>
int main()
{
    int number, count;
    is_prime = 0;

    printf("ENTER THE NUMBER : ");
    scanf("%d", &number);

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            is_prime++;
            break;
        }
    }

    if (is_prime == 0)
    {
        printf("GIVEN NUMBER IS PRIME NUMBER....");
    }
    else
    {
        printf("GIVEN NUMBER IS NOT PRIME NUMBER....");
    }
    return 0;
}