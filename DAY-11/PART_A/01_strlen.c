#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int len;

    printf("Enter the String : ");
    scanf("%s", string);

    len = strlen(string);

    printf("len =%d", len);

    return 0;
}