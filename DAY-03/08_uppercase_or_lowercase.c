#include <stdio.h>
int main()
{
    char ch;

    printf("enter the character : ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z'))
    {
        printf("given character is UPPERCASE.");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("given character is LOWERCASE.");
    }
    return 0;
}