//  => SOME DETAILS OF THIS PROGRAM :-

// =>strcspn => Find Where a Character Appears.
// => It counts characters until it encounters any character from the specified set.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "helloworld ! from c programming, here comma is the char we want to found...";

    int result = strcspn(str, ",");

    printf("Comma position: %d", result);

    return 0;
}

// =>OUTPUT :-
// => Comma position: 31