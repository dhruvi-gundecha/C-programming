#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Programming";
    char str2[20];

    strncpy(str2, str1, 5);
    str2[5] = '\0'; // => NUMBER YOU WANT COPY LAST INDEX MUST BE \0
    printf("%s", str2);
    return 0;
}
