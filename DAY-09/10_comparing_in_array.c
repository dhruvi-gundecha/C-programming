
#include <stdio.h>
int main()
{
    int size1, size2, flag = 0;

    printf("ENTER THE FIRST ARRAY SIZE :- ");
    scanf("%d", &size1);
    printf("ENTER THE SECOND ARRAY SIZE :- ");
    scanf("%d", &size2);

    if (size1 == size2)
    {
        int array1[size1], array2[size2];

        for (int i = 0; i < size1; i++)
        {
            printf("ENTER THE FIRST ARRAY ELEMENT : ");
            scanf("%d", &array1[i]);
        }

        for (int i = 0; i < size2; i++)
        {
            printf("ENTER THE SECOND ARRAY ELEMENT : ");
            scanf("%d", &array2[i]);
        }

        for (int i = 0; i < size2; i++)
        {
            if (array1[i] != array2[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("given array's are same.....");
        }
        else
        {
            printf("given array's are not same.....");
        }
    }
    else
    {
        printf("given array's size must be same.....");
    }
    return 0;
}