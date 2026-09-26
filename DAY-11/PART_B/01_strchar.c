// => Detail of this program :-

// => strchr use for find first character.
// => Find the first occurrence of a character. and also it prints after the character all string.

#include <stdio.h>
#include <string.h> // =>import strchr
int main()
{
    char str[] = "THE CODING IS GOOD AND HELPFUL ALSO IT HELPS IN LOGIC DEVELOPMENT...";

    char *result = strchr(str, 'G');

    if (result != NULL)
        printf("FOUND: %s", result);
    else
    {
        printf("NOT FOUND THIS CHARACTER...");
    }
    return 0;
}

// =>HERE THE OUTPUT WILL BE (FOUND: G IS GOOD AND HELPFUL ALSO IT HELPS IN LOGIC DEVELOPMENT...)
// => strchr() returns the address where the character was found.