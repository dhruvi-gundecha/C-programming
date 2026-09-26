// => INPUT :-
// student@gmail.com

// =>OUTPUT :-
// Username: student
// Domain: gmail.com

#include <string.h>
#include <stdio.h>

int main()
{
    char ch[100];
    int count = 0; // =>this will help to find username..

    printf("ENTER THE YOUR EMAIL (EXAMPLE : student@gmail.com) : ");
    fgets(ch, sizeof(ch), stdin);

    char *token = strtok(ch, "@");

    while (token != NULL) // => when str end's check this str where , is coming and that prints.
    {
        if (count == 0)
        {
            printf("USERNAME : %s\n", token); // => token print after that next token
        }
        else
        {
            printf("Domain: %s", token);
        }

        count++;

        token = strtok(NULL, "@"); // => Start from str and split wherever you find ,.
    }
}