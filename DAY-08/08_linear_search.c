#include <stdio.h>
int main()
{
    int size, num;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &size);

    int array[size], found = 0;

    for (int i = 0; i < size; i++)
    {
        printf("ENTER THE ARRAY ELEMENT : ");
        scanf("%d", &array[i]);
    }

    printf("ENTER THE NUMBER YOU WANT TO SEARCH : ");
    scanf("%d", &num);

    for (int i = 0; i < size; i++)
    {
        if (array[i] == num)
        {
            printf("GIVEN NUMBER IS FOUND.....\n");
            printf(" INDEX =  %d  ", i);
            printf(" NUMBER =  %d  ", array[i]);

            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("GIVEN NUMBER IS NOT FOUND.....\n");
    }
    return 0;
}