// => using while loop
#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// => using for loop
#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}

// => using do while loop
#include <stdio.h>

int main()
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    return 0;
}
