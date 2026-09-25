
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Programming";
    char str2[] = "Program";

    if (strncmp(str1, str2, 7) == 0)
    {
        printf("First 7 characters are same");
    }
    else
    {
        printf("First 7 characters are not same");
    }

    return 0;
}