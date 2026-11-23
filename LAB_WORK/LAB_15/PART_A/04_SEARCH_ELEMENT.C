#include <stdio.h>
int main()
{
    int Search, i, found;
    found = 0;
    int array[5];

    for (i = 0; i < 5; i++)
    {
        printf("enter the num:");
        scanf("%d", &array[i]);
    }
    printf("enter the search:");
    scanf("%d", &Search);
    for (i = 0; i < 5; i++)
    {
        if (Search == array[i])
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("sucessfuly  found");
    }
    else
    {
        printf("not found");
    }
    return 0;
}