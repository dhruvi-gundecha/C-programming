#include <stdio.h>
#include <string.h>

int main()
{
    char string[100], string_copy[100];

    printf("Enter the String : ");
    fgets(string, sizeof(string), stdin);

    strcpy(string_copy, string); // => the string you want to copy must be second para...

    printf("COPY OF STRING :- \n");
    fputs(string_copy, stdout);
    return 0;
}