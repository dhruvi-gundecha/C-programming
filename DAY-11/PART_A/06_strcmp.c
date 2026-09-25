#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "apple";
    char str2[] = "apple";

    if (strcmp(str1, str2) == 0)
    {
        printf("Strings are same");
    }

    return 0;
}