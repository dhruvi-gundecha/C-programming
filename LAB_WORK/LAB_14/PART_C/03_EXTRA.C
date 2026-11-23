// 3. Given an integer array nums sorted in non-decreasing order, remove the duplicates inplace such that each unique element appears only once.
// The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
// Change the array nums such that the ƒirst k elements of nums contain the unique elements in the order they were present in nums initially.
// The remaining elements of nums are not important as well as the size of nums.
// Return k.

#include <stdio.h>
int main()
{
    int n;

    printf("ENTER THE ARRAY SIZE : ");
    scanf("%d", &n);

    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        printf("ENTER THE ARRAY ELEMENT : ");
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr1[i] == arr1[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    arr1[k] = arr1[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("  %d  ", arr1[i]);
    }
    return 0;
}