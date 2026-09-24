// => IS PALINDROME WITH POINTER :-

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], *P1, *P2;

    printf("ENTER THE STRING : ");
    scanf("%s", str1);

    int n, i = 0;

    n = strlen(str1);

    P1 = str1;
    P2 = str2;

    while (n >= 0)
    {
        *(P2 + i) = *(P1 + n - 1);
        i++;
        n--;
    }

    if (strcmp(str2, str1) == 0)
    {
        printf("GIVEN STRING IS PALINDROME.\n");
    }
    else
    {
        printf("GIVEN STRING IS NOT PALINDROME.\n");
    }
    return 0;
}

// => WITHOUT POINTER :-

#include <stdio.h>
int main()
{
    char str[100], rev[100];
    int len = 0, i = 0, flag = 0;

    printf("Enter the string : ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    while (len > 0)
    {
        rev[i] = str[len - 1];
        i++;
        len--;
    }
    // => now i becomes total len of str and len becomes zero
    // =>that' why we have to use j integer variable
    for (int j = 0; j < i; j++)
    {
        if (str[j] != rev[j])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("given string is palindrome...");
    }
    else
    {
        printf("given string is not palindrome...");
    }

    return 0;
}