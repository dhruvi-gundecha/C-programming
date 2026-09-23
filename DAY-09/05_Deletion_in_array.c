// Deletion
// => Deletion is the opposite of insertion.

#include <stdio.h>
int main()
{
    int location, n;

    printf("ENTER THE ARRAY SIZE : ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE ARRAY ELEMENT : ");
        scanf("%d", &array[i]);
    }

    printf("ENTER THE LOCATION YOU WANT TO DELETE A NUMBER :- ");
    scanf("%d", &location);

    for (int i = location; i < n; i++)
    {
        array[i] = array[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++)
    {
        printf("  %d  ", array[i]);
    }
    return 0;
}