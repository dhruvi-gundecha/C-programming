// 5. Input a string in character array and print string and length of string.
#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int len = 0;
    for (int i = 0; i < 100; i++)
    {
        printf("Enter character (1 to stop): ");
        scanf(" %c", &string[i]);

        if (string[i] == '1')
        {
            string[i] = '\0';
            break;
        }
    }
    len = strlen(string);
    printf("\nString = %s", string);
    printf("\nLength = %d", len);

    return 0;
}