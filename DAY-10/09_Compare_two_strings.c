// => WITH BUILT-IN FUNCTION :-

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];

    printf("ENTER THE FIRST STRING : ");
    scanf("%s", str1);

    printf("ENTER THE SECOND STRING : ");
    scanf("%s", str2);

    if (strcmp(str2, str1) == 0)
    {
        printf("GIVEN STRING'S IS SAME.\n");
    }
    else
    {
        printf("GIVEN STRING'S IS NOT SAME.\n");
    }
    return 0;
}

// => WITH OUT BUILT-IN FUNCTION :-

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int len1 = 0, len2 = 0, flag = 0;
    printf("ENTER THE FIRST STRING : ");
    scanf("%s", str1);

    printf("ENTER THE SECOND STRING : ");
    scanf("%s", str2);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        len2++;
    }
    if (len1 == len2)
    {
        for (int j = 0; j < len1; j++)
        {
            if (str1[j] != str2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("given string is same...");
        }
        else
        {
            printf("given string is not same...");
        }
    }
    else
    {
        printf("given string is not same...");
    }
    return 0;
}