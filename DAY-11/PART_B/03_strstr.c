// => SOME IMPORTENT DETAILS FOR THIS PROGRAM :-

// => strstr Find a Word/String.
// => strstr() searches for one string inside another string.

// Imagine you're checking whether a sentence contains a particular word.
// Instead of manually comparing every character, you can use: strstr => one basic Appliction of this program.

// syntax :-
// strstr(main_string, search_string);

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "I am learning C programming";

    char *result = strstr(str, "learning");

    if (result != NULL)
    {
        printf("Word found\nText from word: %s\n", result);
        // =>instead of using multiple print you can also use \n for new line.
    }
    else
    {
        printf("Word not found");
    }

    return 0;
}

// Word found
// Text from word: learning C programming