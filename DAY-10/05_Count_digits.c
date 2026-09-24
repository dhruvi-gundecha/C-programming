//  => COUNT DIGIT'S :-

#include <stdio.h>
int main()
{
    char str[100];
    int count = 0;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= '0' && str[i] <= '9'))
        {
            count++;
        }
    }

    printf("digit count = %d", count);
    return 0;
}