// => SOME DETAILS OF THIS PROGRAM :-

// strcspn => Count Matching Characters From Beginning
// => It counts how many characters at the beginning belong to a specified set.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "12345abc"; // => HERE 12345 ARE THE SAME

    int result = strspn(str, "0123456789");

    printf("Number of starting digits: %d", result); // => RESULT WILL BE : 5

    return 0;
}