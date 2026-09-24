// INPUT
// ├── scanf() =>  scanf("%s", &name);
// ├── getchar() => ch = getchar();
// └── fgets() => fgets(name, sizeof(name), stdin);

// OUTPUT
// ├── printf() => printf("%s", name);
// ├── putchar() => putchar(ch);
// └── fputs() => fputs(string-name, stdout);

// getchar() → one character
// scanf("%s") → word
// fgets() → line/string

// => Static variable :-
#include <stdio.h>
int main()
{
    char name[] = "Dhruvi";
    printf("%s", name);
    return 0;
}

// => User enter variable :-
#include <stdio.h>
int main()
{
    char name[100];

    printf("Enter the string : ");
    scanf("%s", name);

    puts(name);
    return 0;
}

// => Printing with for loop :-
#include <stdio.h>
int main()
{
    char name[100];

    printf("Enter the string : ");
    scanf("%s", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c", name[i]);
    }
    return 0;
}
