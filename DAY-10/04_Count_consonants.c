// => COUNT CONSONENTS :-

#include <stdio.h>
int main()
{
    char str[100];
    int count = 0;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            switch (str[i])
            {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                break;
            default:
                count++;
                break;
            }
        }
    }

    printf("consonent count = %d", count);
    return 0;
}

// => in built function using library ctype :-

#include <stdio.h>
#include <ctype.h> // Required for isalpha()

int main()
{
    char str[100];
    int count = 0;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        // Check if the character is a letter AND not a vowel
        if (isalpha(str[i]) &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' &&
            str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            count++;
        }
    }

    printf("Consonant count = %d\n", count);
    return 0;
}
