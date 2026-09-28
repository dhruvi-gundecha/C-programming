#include <stdio.h>
#include <string.h>
#include <ctype.h>

char STR[200];

void COUNT_TYPES()
{
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int special = 0;

    for (int i = 0; STR[i] != '\0'; i++)
    {
        if (isalpha(STR[i]))
        {
            char ch = tolower(STR[i]);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else if (isdigit(STR[i]))
        {
            digits++;
        }
        else if (!isspace(STR[i]))
        {
            special++;
        }
    }

    printf("\nVOWELS     = %d", vowels);
    printf("\nCONSONANTS = %d", consonants);
    printf("\nDIGITS     = %d", digits);
    printf("\nSPECIAL    = %d\n", special);
}

void COUNT_WORDS()
{
    int words = 0;
    int inWord = 0;

    for (int i = 0; STR[i] != '\0'; i++)
    {
        if (!isspace(STR[i]) && inWord == 0)
        {
            words++;
            inWord = 1;
        }
        else if (isspace(STR[i]))
        {
            inWord = 0;
        }
    }

    printf("TOTAL WORDS = %d\n", words);
}

void FREQUENCY()
{
    char ch;
    int count = 0;

    printf("ENTER CHARACTER : ");
    scanf(" %c", &ch);

    for (int i = 0; STR[i] != '\0'; i++)
    {
        if (STR[i] == ch)
        {
            count++;
        }
    }

    printf("FREQUENCY OF '%c' = %d\n", ch, count);
}

void FIRST_LAST()
{
    char ch;
    int first = -1;
    int last = -1;

    printf("ENTER CHARACTER : ");
    scanf(" %c", &ch);

    for (int i = 0; STR[i] != '\0'; i++)
    {
        if (STR[i] == ch)
        {
            if (first == -1)
            {
                first = i;
            }

            last = i;
        }
    }

    if (first == -1)
    {
        printf("CHARACTER NOT FOUND...\n");
    }
    else
    {
        printf("FIRST OCCURRENCE = %d\n", first);
        printf("LAST OCCURRENCE  = %d\n", last);
    }
}

void REMOVE_CHARACTER()
{
    char ch;
    int j = 0;

    printf("ENTER CHARACTER TO REMOVE : ");
    scanf(" %c", &ch);

    for (int i = 0; STR[i] != '\0'; i++)
    {
        if (STR[i] != ch)
        {
            STR[j] = STR[i];
            j++;
        }
    }

    STR[j] = '\0';

    printf("STRING AFTER REMOVING = %s", STR);
}

void REPLACE_CHARACTER()
{
    char oldChar;
    char newChar;

    printf("ENTER CHARACTER TO REPLACE : ");
    scanf(" %c", &oldChar);

    printf("ENTER NEW CHARACTER : ");
    scanf(" %c", &newChar);

    for (int i = 0; STR[i] != '\0'; i++)
    {
        if (STR[i] == oldChar)
        {
            STR[i] = newChar;
        }
    }

    printf("STRING AFTER REPLACE = %s", STR);
}

void CHECK_ALPHABETS()
{
    int onlyAlphabet = 1;

    for (int i = 0; STR[i] != '\0' && STR[i] != '\n'; i++)
    {
        if (!isalpha(STR[i]) && !isspace(STR[i]))
        {
            onlyAlphabet = 0;
            break;
        }
    }

    if (onlyAlphabet)
    {
        printf("STRING CONTAINS ONLY ALPHABETS.\n");
    }
    else
    {
        printf("STRING DOES NOT CONTAIN ONLY ALPHABETS.\n");
    }
}

void CAPITALIZE_WORDS()
{
    int first = 1;

    for (int i = 0; STR[i] != '\0'; i++)
    {
        if (isspace(STR[i]))
        {
            first = 1;
        }
        else if (first)
        {
            STR[i] = toupper(STR[i]);
            first = 0;
        }
    }

    printf("STRING = %s", STR);
}

void REVERSE_WORDS()
{
    int start = 0;
    int end;
    char temp;

    for (int i = 0;; i++)
    {
        if (STR[i] == ' ' || STR[i] == '\n' || STR[i] == '\0')
        {
            end = i - 1;

            while (start < end)
            {
                temp = STR[start];
                STR[start] = STR[end];
                STR[end] = temp;

                start++;
                end--;
            }

            if (STR[i] == '\0' || STR[i] == '\n')
            {
                break;
            }

            start = i + 1;
        }
    }

    printf("STRING AFTER REVERSING WORDS = %s", STR);
}

int main()
{
    int choice;

    printf("--------------- STRING ANALYZER ---------------\n");

    printf("ENTER STRING : ");
    fgets(STR, sizeof(STR), stdin);

    while (1)
    {
        printf("\n\n--------------- MENU ---------------\n");
        printf("1. COUNT VOWELS, CONSONANTS, DIGITS & SPECIAL\n");
        printf("2. COUNT WORDS\n");
        printf("3. FIND FREQUENCY OF A CHARACTER\n");
        printf("4. FIND FIRST & LAST OCCURRENCE\n");
        printf("5. REMOVE ALL OCCURRENCES OF A CHARACTER\n");
        printf("6. REPLACE A CHARACTER\n");
        printf("7. CHECK WHETHER STRING CONTAINS ONLY ALPHABETS\n");
        printf("8. CONVERT FIRST LETTER OF EACH WORD TO UPPERCASE\n");
        printf("9. REVERSE EACH WORD\n");
        printf("10. EXIT\n");

        printf("\nENTER YOUR CHOICE : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            COUNT_TYPES();
            break;

        case 2:
            COUNT_WORDS();
            break;

        case 3:
            FREQUENCY();
            break;

        case 4:
            FIRST_LAST();
            break;

        case 5:
            REMOVE_CHARACTER();
            break;

        case 6:
            REPLACE_CHARACTER();
            break;

        case 7:
            CHECK_ALPHABETS();
            break;

        case 8:
            CAPITALIZE_WORDS();
            break;

        case 9:
            REVERSE_WORDS();
            break;

        case 10:
            printf("PROGRAM ENDED...\n");
            return 0;

        default:
            printf("INVALID CHOICE...\n");
        }
    }

    return 0;
}