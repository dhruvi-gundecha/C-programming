#include <stdio.h>
int main()
{
    if(printf("Hello, World!")){
        // =>nothing

    }
    return 0;
}

// => all alternamtive of hello world program :-
#include <stdio.h>

void helloFunction()
{
    printf("Hello, World!");
}

int main()
{
    printf("1. Normal printf:\n");
    printf("Hello, World!\n\n");


    printf("2. printf inside if:\n");
    if (printf("Hello, World!"))
    {
    }
    printf("\n\n");


    printf("3. printf inside while:\n");
    while (printf("Hello, World!"))
    {
        break;
    }
    printf("\n\n");


    printf("4. printf inside for:\n");
    for (printf("Hello, World!"); 0; )
    {
    }
    printf("\n\n");


    printf("5. Comma operator:\n");
    printf("Hello, World!"), printf("\n\n");


    printf("6. puts:\n");
    puts("Hello, World!");
    printf("\n");


    printf("7. fputs:\n");
    fputs("Hello, World!", stdout);
    printf("\n\n");


    printf("8. putchar:\n");
    putchar('H');
    putchar('e');
    putchar('l');
    putchar('l');
    putchar('o');
    putchar(',');
    putchar(' ');
    putchar('W');
    putchar('o');
    putchar('r');
    putchar('l');
    putchar('d');
    putchar('!');
    printf("\n\n");


    printf("9. Character format:\n");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",
           'H', 'e', 'l', 'l', 'o', ',', ' ',
           'W', 'o', 'r', 'l', 'd', '!');


    printf("10. Character array:\n");
    char str[] = "Hello, World!";
    printf("%s\n\n", str);


    printf("11. puts with character array:\n");
    puts(str);
    printf("\n");


    printf("12. do-while:\n");
    do
    {
        printf("Hello, World!");
        break;
    }
    while (1);
    printf("\n\n");


    printf("13. switch:\n");
    switch (1)
    {
        case 1:
            printf("Hello, World!");
            break;
    }
    printf("\n\n");


    printf("14. Function:\n");
    helloFunction();
    printf("\n\n");


    printf("15. return with printf:\n");

    printf("Hello, World!\n");

    return 0;
}