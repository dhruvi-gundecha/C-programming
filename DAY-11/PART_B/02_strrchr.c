// =>SOME IMPORTENT DETAILS OF THIS PROGRAM :-

// => strrchr use for find the last character
// => Find the last occurrence of a character. key point : last occur..

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "programming is good exercise for logic development this is program and this is for last character";

    char *result = strrchr(str, 'g');

    if (result != NULL)
    {
        printf("Last character found\n");
        printf("Text from last occurrence: %s\n", result);
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}

// =>HERE THE OUTPUT WILL BE

// Last character found
// Text from last occurrence: gram and this is for last character

// => strrchr() returns the address where the last character was found.