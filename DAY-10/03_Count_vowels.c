// => COUNT VOWELS :-

#include <stdio.h>
int main()
{
    char str[100];
    int count = 0;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }

    printf("vowel count = %d", count);
    return 0;
}