// => IMPORTENT DETAILS OF THIS PROGRAM :-

// => strtok uses for Split a String.
// => strtok() divides a string into smaller pieces called tokens.
// => The comma , is called the delimiter.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = " NAME , DETAILS , AGE , ROLLNO";

    char *token = strtok(str, ",");

    while (token != NULL) // => when str end's check this str where , is coming and that prints.
    {
        printf("%s\n", token); // => token print after that next token

        token = strtok(NULL, ","); // => Start from str and split wherever you find ,.
    }

    return 0;
}

// => OUTPUT :-
//  NAME
//  DETAILS
//  AGE
//  ROLLNO