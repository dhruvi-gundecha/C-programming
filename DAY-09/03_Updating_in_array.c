// Updating means:
// => Change an existing element.
// Suppose:

// 10 20 30 40 50
// You want to change 30 to 100.

// arr[2] = 100;

// Now:
// 10 20 100 40 50

// Updating means:
// => Change an existing element.
// Suppose:

// 10 20 30 40 50
// You want to change 30 to 100.

// arr[2] = 100;

// Now:
// 10 20 100 40 50

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int size, change_element, replace_element;
    bool flag = false;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("ENTER THE ARRAY ELEMENT : ");
        scanf("%d", &array[i]);
    }

    printf("ENTER THE ARRAY ELEMENT YOU WANT TO CHANGE: ");
    scanf("%d", &change_element);
    printf("ENTER THE ARRAY ELEMENT YOU WANT TO REPLACE: ");
    scanf("%d", &replace_element);

    for (int i = 0; i < size; i++)
    {
        if (array[i] == change_element)
        {
            array[i] = replace_element;
            flag = true;
            break;
        }
    }

    if (flag == false)
    {
        printf("element not found\n");
    }
    for (int i = 0; i < size; i++)
    {
        printf("  %d  ", array[i]);
    }

    return 0;
}