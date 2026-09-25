// strncat(destination, source, n);

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30] = "Hello ";
    char str2[] = "Programming";

    strncat(str1, str2, 4);
    printf("%s", str1);
    return 0;
}