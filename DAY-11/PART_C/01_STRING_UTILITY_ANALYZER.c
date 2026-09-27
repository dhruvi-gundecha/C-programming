#include <stdio.h>
#include <string.h>
#include <ctype.h>

void STR_LENGTH()
{
    char str[100];

    printf("ENTER THE STRING : ");
    fgets(str, sizeof(str), stdin);

    int length;

    length = strlen(str);

    printf("STRING LENGTH = %d  \n", length);
}
void STR_COPY()
{
    char str[100], str_copy[100];

    printf("ENTER THE STRING : ");
    fgets(str, sizeof(str), stdin);

    strcpy(str_copy, str);
    printf("STRING COPYED = ");
    fputs(str_copy, stdout);
}
void STR_COMPARE()
{
    char str1[100], str2[100];

    printf("ENTER THE FIRST STRING : ");
    fgets(str1, sizeof(str1), stdin);
    printf("ENTER THE SECOND STRING : ");
    fgets(str2, sizeof(str2), stdin);

    if (strcmp(str1, str2) == 0)
    {
        printf("BOTH STRING'S ARE SAME...");
    }
    else if (strcmp(str1, str2) < 0)
    {
        printf("FIRST STRING IS SMALLER...");
    }
    else
    {
        printf("SECOND STRING IS SMALLER...");
    }
}
void STR_CONCATENATE()
{
    char str1[100], str2[100];

    printf("ENTER THE FIRST STRING : ");
    fgets(str1, sizeof(str1), stdin);
    printf("ENTER THE SECOND STRING : ");
    fgets(str2, sizeof(str2), stdin);

    strcat(str1, str2);

    printf("STRING CONCATENATION : \n");
    printf("FIRST STRING  : \n");
    fputs(str1, stdout);
    printf("SECOND STRING  : \n");
    fputs(str2, stdout);
}
void STR_FIND_CHAR()
{
    char str[100], find_ch;

    printf("ENTER THE STRING : ");
    fgets(str, sizeof(str), stdin);

    printf("ENTER THE CHARACTER YOU WANT TO FIND : ");
    scanf(" %c", &find_ch);
    char *result = strchr(str, find_ch);

    if (result != NULL)
        printf("FOUND: %s", result);
    else
    {
        printf("NOT FOUND THIS CHARACTER...");
    }
}
void STR_FIND_SUBSTRING()
{
    char str[100], find_str[100];

    printf("ENTER THE STRING : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("ENTER THE STRING YOU WANT TO FIND : ");
    fgets(find_str, sizeof(find_str), stdin);
    find_str[strcspn(find_str, "\n")] = '\0';

    char *result = strstr(str, find_str);

    if (result != NULL)
        printf("FOUND: %s", result);
    else
    {
        printf("NOT FOUND THIS CHARACTER...");
    }
}
void COUNT_SUB_STR_OCCURRENCES()
{
    char str[100], sub[50];
    char *ptr;
    int count = 0;

    printf("ENTER THE STRING : ");
    fgets(str, sizeof(str), stdin);

    printf("ENTER THE SUBSTRING : ");
    fgets(sub, sizeof(sub), stdin);

    // Remove newline from substring
    sub[strcspn(sub, "\n")] = '\0';

    ptr = str;

    while ((ptr = strstr(ptr, sub)) != NULL)
    {
        count++;

        // Move forward by one character
        ptr++;
    }

    printf("OCCURRENCES = %d\n", count);
}
void CONVERT_UPPER()
{
    char str[100];

    printf("ENTER THE STRING : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper((unsigned char)str[i]);
    }

    fputs(str, stdout);
}
void CONVERT_LOWER()
{
    char str[100];

    printf("ENTER THE STRING : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower((unsigned char)str[i]);
    }

    fputs(str, stdout);
}
void REVARSE_STR()
{
    char str[100], rev[100];

    printf("ENTER THE STRING : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len;

    len = strlen(str);

    for (int i = len - 1; i >= 0; i--)
    {
        rev[len - i - 1] = str[i];
    }
    rev[len] = '\0';
    fputs(rev, stdout);
}

int main()
{
    int number;
    printf("---------------------STRING UTILITY ANALYZER---------------------\n");
    printf("1  ] find length : \n");
    printf("2  ] copy string : \n");
    printf("3  ] compare two strings : \n");
    printf("4  ] concatenate strings : \n");
    printf("5  ] find character : \n");
    printf("6  ] find substring : \n");
    printf("7  ] count substring occurrences : \n");
    printf("8  ] convert to uppercase : \n");
    printf("9  ] convert to lowercase : \n");
    printf("10 ] reverse string : \n");
    printf("11 ] exit : \n");
    printf("----------------------------------------------------------------\n");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        STR_LENGTH();
        break;
    case 2:
        STR_COPY();
        break;
    case 3:
        STR_COMPARE();
        break;
    case 4:
        STR_CONCATENATE();
        break;
    case 5:
        STR_FIND_CHAR();
        break;
    case 6:
        STR_FIND_SUBSTRING();
        break;
    case 7:
        COUNT_SUB_STR_OCCURRENCES();
        break;
    case 8:
        CONVERT_UPPER();
        break;
    case 9:
        CONVERT_LOWER();
        break;
    case 10:
        REVARSE_STR();
        break;
    case 11:
        return 0;
    }
    return 0;
}