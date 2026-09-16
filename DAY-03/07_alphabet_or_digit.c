#include <stdio.h>
int main()
{
    char ch;

    printf("enter the character : ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("given character is alphabet.");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("given character is digit.");
    }
    return 0;
}