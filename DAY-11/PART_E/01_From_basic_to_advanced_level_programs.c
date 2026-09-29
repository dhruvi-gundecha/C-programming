#include <stdio.h>
#include <string.h>
#include <ctype.h>

void STRING_LENGTH()
{
    char str[100];
    int i = 0;

    printf("\nENTER STRING: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            break;
        }
        i++;
    }

    printf("LENGTH = %d\n", i);
}

void STRING_COPY()
{
    char str[100], copy[100];
    int i = 0;

    printf("\nENTER STRING: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
    {
        copy[i] = str[i];
        i++;
    }

    copy[i] = '\0';

    printf("COPIED STRING = %s\n", copy);
}

void STRING_COMPARE()
{
    char str1[100], str2[100];
    int i = 0, result = 0;

    printf("\nENTER FIRST STRING: ");
    fgets(str1, sizeof(str1), stdin);

    printf("ENTER SECOND STRING: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] == '\n' || str2[i] == '\n')
        {
            break;
        }

        if (str1[i] != str2[i])
        {
            result = 1;
            break;
        }

        i++;
    }

    if (result == 0)
    {
        printf("STRINGS ARE EQUAL.\n");
    }
    else
    {
        printf("STRINGS ARE NOT EQUAL.\n");
    }
}

void STRING_CONCAT()
{
    char str1[200], str2[100];
    int i = 0, j = 0;

    printf("\nENTER FIRST STRING: ");
    fgets(str1, sizeof(str1), stdin);

    printf("ENTER SECOND STRING: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str1[i] != '\n')
    {
        i++;
    }

    str1[i] = ' ';

    i++;

    while (str2[j] != '\0' && str2[j] != '\n')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("CONCATENATED STRING = %s\n", str1);
}

void STRING_REVERSE()
{
    char str[100], temp;
    int i = 0, length = 0;

    printf("\nENTER STRING: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    str[length] = '\0';

    printf("REVERSE = %s\n", str);
}

void STRING_PALINDROME()
{
    char str[100];
    int i = 0, length = 0, palindrome = 1;

    printf("\nENTER STRING: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
    {
        printf("PALINDROME.\n");
    }
    else
    {
        printf("NOT PALINDROME.\n");
    }
}

void VOWELS_CONSONANTS()
{
    char str[100];
    int i, vowels = 0, consonants = 0;

    printf("\nENTER STRING: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            if (str[i] == 'a' || str[i] == 'e' ||
                str[i] == 'i' || str[i] == 'o' ||
                str[i] == 'u' || str[i] == 'A' ||
                str[i] == 'E' || str[i] == 'I' ||
                str[i] == 'O' || str[i] == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("VOWELS = %d\n", vowels);
    printf("CONSONANTS = %d\n", consonants);
}

void COUNT_CHARACTERS()
{
    char str[100];
    int i, digits = 0, spaces = 0, special = 0;

    printf("\nENTER STRING: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]))
        {
            digits++;
        }
        else if (str[i] == ' ')
        {
            spaces++;
        }
        else if (!isalpha(str[i]) && str[i] != '\n')
        {
            special++;
        }
    }

    printf("DIGITS = %d\n", digits);
    printf("SPACES = %d\n", spaces);
    printf("SPECIAL CHARACTERS = %d\n", special);
}

void CHARACTER_FREQUENCY()
{
    char str[100], ch;
    int i, count = 0;

    printf("\nENTER STRING: ");
    fgets(str, sizeof(str), stdin);

    printf("ENTER CHARACTER: ");
    scanf("%c", &ch);
    getchar();

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    printf("FREQUENCY = %d\n", count);
}

void FIRST_OCCURRENCE()
{
    char str[100], ch;
    int i, position = -1;

    printf("\nENTER STRING: ");
    fgets(str, sizeof(str), stdin);

    printf("ENTER CHARACTER: ");
    scanf("%c", &ch);
    getchar();

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            position = i;
            break;
        }
    }

    if (position == -1)
    {
        printf("CHARACTER NOT FOUND.\n");
    }
    else
    {
        printf("FIRST OCCURRENCE AT INDEX = %d\n", position);
    }
}

void REMOVE_SPACES()
{
    char str[100];
    int i, j = 0;

    printf("\nENTER STRING: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("STRING WITHOUT SPACES = %s", str);
}

void LOWER_TO_UPPER()
{
    char str[100];
    int i;

    printf("\nENTER STRING: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("UPPERCASE = %s", str);
}

void UPPER_TO_LOWER()
{
    char str[100];
    int i;

    printf("\nENTER STRING: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("LOWERCASE = %s", str);
}

void COUNT_WORDS()
{
    char str[200];
    int i, words = 0, insideWord = 0;

    printf("\nENTER SENTENCE: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n' && insideWord == 0)
        {
            words++;
            insideWord = 1;
        }
        else if (str[i] == ' ')
        {
            insideWord = 0;
        }
    }

    printf("NUMBER OF WORDS = %d\n", words);
}

void LONGEST_WORD()
{
    char str[200];
    char current[100], longest[100];
    int i = 0, j = 0, max = 0, length;

    printf("\nENTER SENTENCE: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        j = 0;

        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            current[j] = str[i];
            i++;
            j++;
        }

        current[j] = '\0';
        length = j;

        if (length > max)
        {
            max = length;
            strcpy(longest, current);
        }

        if (str[i] == '\0' || str[i] == '\n')
        {
            break;
        }

        i++;
    }

    printf("LONGEST WORD = %s\n", longest);
}

void SHORTEST_WORD()
{
    char str[200];
    char current[100], shortest[100];
    int i = 0, j, length;
    int min = 1000;

    printf("\nENTER SENTENCE: ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        j = 0;

        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            current[j] = str[i];
            i++;
            j++;
        }

        current[j] = '\0';
        length = j;

        if (length > 0 && length < min)
        {
            min = length;
            strcpy(shortest, current);
        }

        if (str[i] == '\0' || str[i] == '\n')
        {
            break;
        }

        i++;
    }

    printf("SHORTEST WORD = %s\n", shortest);
}

void MOST_FREQUENT_CHARACTER()
{
    char str[100];
    int frequency[256] = {0};
    int i, max = 0;
    char most;

    printf("\nENTER STRING: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            frequency[(unsigned char)str[i]]++;
        }
    }

    for (i = 0; i < 256; i++)
    {
        if (frequency[i] > max)
        {
            max = frequency[i];
            most = i;
        }
    }

    printf("MOST FREQUENT CHARACTER = %c\n", most);
    printf("FREQUENCY = %d\n", max);
}

void REMOVE_DUPLICATES()
{
    char str[100];
    int i, j, k;

    printf("\nENTER STRING: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                for (k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }

                j--;
            }
        }
    }

    printf("AFTER REMOVING DUPLICATES = %s", str);
}

void REVERSE_EACH_WORD()
{
    char str[200];
    int start = 0, end, i;
    char temp;

    printf("\nENTER SENTENCE: ");
    fgets(str, sizeof(str), stdin);

    i = 0;

    while (str[i] != '\0')
    {
        while (str[i] == ' ')
        {
            i++;
        }

        start = i;

        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            i++;
        }

        end = i - 1;

        while (start < end)
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }
    }

    printf("REVERSED WORDS = %s", str);
}

int main()
{
    int choice;

    do
    {
        printf("\n\n========== DAY-12 STRING PRACTICE ==========\n");
        printf("1.  String Length\n");
        printf("2.  String Copy\n");
        printf("3.  String Compare\n");
        printf("4.  String Concatenate\n");
        printf("5.  String Reverse\n");
        printf("6.  String Palindrome\n");
        printf("7.  Vowels and Consonants\n");
        printf("8.  Digits, Spaces and Special Characters\n");
        printf("9.  Character Frequency\n");
        printf("10. First Character Occurrence\n");
        printf("11. Remove Spaces\n");
        printf("12. Lowercase to Uppercase\n");
        printf("13. Uppercase to Lowercase\n");
        printf("14. Count Words\n");
        printf("15. Longest Word\n");
        printf("16. Shortest Word\n");
        printf("17. Most Frequent Character\n");
        printf("18. Remove Duplicate Characters\n");
        printf("19. Reverse Each Word\n");
        printf("0.  EXIT\n");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
        case 1:
            STRING_LENGTH();
            break;

        case 2:
            STRING_COPY();
            break;

        case 3:
            STRING_COMPARE();
            break;

        case 4:
            STRING_CONCAT();
            break;

        case 5:
            STRING_REVERSE();
            break;

        case 6:
            STRING_PALINDROME();
            break;

        case 7:
            VOWELS_CONSONANTS();
            break;

        case 8:
            COUNT_CHARACTERS();
            break;

        case 9:
            CHARACTER_FREQUENCY();
            break;

        case 10:
            FIRST_OCCURRENCE();
            break;

        case 11:
            REMOVE_SPACES();
            break;

        case 12:
            LOWER_TO_UPPER();
            break;

        case 13:
            UPPER_TO_LOWER();
            break;

        case 14:
            COUNT_WORDS();
            break;

        case 15:
            LONGEST_WORD();
            break;

        case 16:
            SHORTEST_WORD();
            break;

        case 17:
            MOST_FREQUENT_CHARACTER();
            break;

        case 18:
            REMOVE_DUPLICATES();
            break;

        case 19:
            REVERSE_EACH_WORD();
            break;

        case 0:
            printf("\nPROGRAM ENDED.\n");
            break;

        default:
            printf("\nINVALID CHOICE.\n");
        }

    } while (choice != 0);

    return 0;
}