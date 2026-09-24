// => REVERSE STRING :-

#include <stdio.h>
int main()
{
    char str[100];
    int len = 0;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = 0; i <= len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("%s", str);
    return 0;
}

//  => ALTERNATIVE PROGRAM :-

#include <stdio.h>
int main()
{
    char str[100], rev[100];
    int len = 0, i = 0;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

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

    printf("%s", rev);
    return 0;
}