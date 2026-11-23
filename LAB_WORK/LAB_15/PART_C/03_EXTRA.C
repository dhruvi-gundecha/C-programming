// 3. Given an integer array nums and an integer val, remove all occurrences of val in nums inplace.
// The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
// Consider the number of elements in nums which are not equal to val be k, to get accepted,
// you need to do the following things:Change the array nums such that the first k elements of nums
// contain the elements which are not equal to val. The remaining elements of nums are not important
// as well as the size of nums.Return k.
#include <stdio.h>
int main()
{
    int size, val, count = 0;

    printf("enter the array size : ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter the array elements : ");
        scanf("%d", &array[i]);
    }

    printf("enter the value you want : ");
    scanf("%d", &val);

    for (int i = 0; i < size; i++)
    {
        if (array[i] == val)
        {
            for (int k = i; k < size - 1; k++)
            {
                array[k] = array[k + 1];
            }
            count++;
            i--;
        }
    }

    printf("the num of elements are not equal to val = %d\n", (size - count));

    for (int i = 0; i < (size - count); i++)
    {
        printf(" %d ", array[i]);
    }
    return 0;
}