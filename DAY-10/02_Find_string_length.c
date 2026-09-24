// => FIND STRING LENGTH :-
#include <stdio.h>
int main()
{
    char str[100];
    int len = 0;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    printf("LENGTH = %d", len);
    return 0;
}
