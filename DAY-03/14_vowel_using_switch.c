#include <stdio.h>
int main()
{
    char ch;

    printf("enter the character : ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("given char %c is vowel.", ch);
        break;

    default:
        printf("given char %c is consonant.", ch);
        break;
    }
    return 0;
}