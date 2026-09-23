// Insertion means:
// => Add a new element while keeping existing elements.

#include <stdio.h>
int main()
{
    int num, location, n;

    printf("ENTER THE ARRAY SIZE :- ");
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE ARRAY ELEMENT : ");
        scanf("%d", &array[i]);
    }

    printf("ENTER THE NUMBER YOU WANT TO INSERT :- ");
    scanf("%d", &num);
    printf("ENTER THE NUMBER YOU WANT TO INSERT AT GIVEN LOCATION :- ");
    scanf("%d", &location);
    n++;

    for (int i = n; i >= location; i--)
    {
        array[i] = array[i - 1];
    }
    array[location] = num;

    for (int i = 0; i < n; i++)
    {
        printf("  %d  ", array[i]);
    }
    return 0;
}