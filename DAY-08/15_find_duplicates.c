// => remove duplicate....

#include <stdio.h>
int main()
{
    int size, size_of_dup = 0, flag = 0;

    printf("enter the array size : ");
    scanf("%d", &size);

    int array[size], duplicate[size_of_dup];

    for (int i = 0; i < size; i++)
    {
        printf("enter the array size : ");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                for (int k = 0; k < size_of_dup; k++)
                {
                    if (array[i] == duplicate[k])
                    {
                        flag++;
                        break;
                    }
                }
                if (flag == 0)
                {
                    duplicate[size_of_dup] = array[i];
                    size_of_dup++;
                }
                else
                {
                    flag = 0;
                }
            }
        }
    }

    for (int i = 0; i < size_of_dup; i++)
    {
        printf("  %d  ", duplicate[i]);
    }
    return 0;
}