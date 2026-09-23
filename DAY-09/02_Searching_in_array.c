// Searching means:
// => Find whether a particular element exists in the array.
// Searching = compare each element with target
// two types :-
// 1. linear search
// 2. binary search

// =>LINEAR SEARCH :-
#include <stdio.h>
int main()
{

    int size, search_element, flag = 0;

    printf("Enter the array size : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("ENTER THE ARRAY ELEMENT : ");
        scanf("%d", &array[i]);
    }

    printf("ENTER THE ARRAY ELEMENT YOU WANT TO SEARCH: ");
    scanf("%d", &search_element);

    for (int i = 0; i < size; i++)
    {
        if (array[i] == search_element)
        {
            printf("ELEMENT FOUND =   %d  ", array[i]);
            printf("ELEMENT INDEX =   %d  ", i);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("ELEMENT NOT FOUND");
    }

    return 0;
}

// => BINARY SEARCH :-

// binary search(recursive)

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int n)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == n)
    {
        return mid;
    }
    else if (arr[mid] < n)
    {
        return binarySearch(arr, mid + 1, high, n);
    }
    else
    {
        return binarySearch(arr, low, mid - 1, n);
    }
}
int main()
{
    int size;

    printf("Enter the array size : ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("ENTER THE ARRAY ELEMENT : ");
        scanf("%d", &arr[i]);
    }

    int search_ele;
    printf("Enter the number you want to search : ");
    scanf("%d", &search_ele);

    int result = binarySearch(arr, 0, size - 1, search_ele);
    if (result == -1)
    {
        printf(" not found");
    }
    else
    {
        printf("found at index %d", result);
    }

    return 0;
}