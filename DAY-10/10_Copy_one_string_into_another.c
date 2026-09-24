#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];

    printf("ENTER THE STRING : ");
    scanf("%s", str1);

    int n, i = 0;

    n = strlen(str1);

    while (i < n)
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    fputs(str1, stdout);
    printf("\n");
    fputs(str2, stdout);
    return 0;
}