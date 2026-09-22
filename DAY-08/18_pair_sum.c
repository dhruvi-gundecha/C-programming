// array = [3, 5, 8, 2, 10]
// target = 13

#include <stdio.h>
int main()
{

    int size;

    printf("enter the size of array : ");
    scanf("%d", &size);

    int array[size], sum = 0, target, pair[2], flag = 0;

    for (int i = 0; i < size; i++)
    {
        printf("enter the array element : ");
        scanf("%d", &array[i]);
    }

    printf("enter the target: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] + array[j] == target)
            {
                pair[0] = array[i];
                pair[1] = array[j];
                flag = 1;
                break;
            }
        }
        if (flag > 0)
        {
            printf(" target achived = %d  ", target);
            printf(" pair first element = %d  ", pair[0]);
            printf(" pair second element = %d  ", pair[1]);
            break;
        }
    }
    if (flag == 0)
    {
        printf(" target not achived = %d  ", target);
    }
    return 0;
}