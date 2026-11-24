// 3. Read and store the roll no and marks of 20 students using 2D array.

#include <stdio.h>
void main()
{
    int students[20][2];
    int i, j;
    for (i = 0; i < 20; i++)
    {
        printf("enter the rollno:");
        scanf("%d", &students[i][0]);
        printf("enter the marks:");
        scanf("%d", &students[i][1]);
    }
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("  %d  ", students[i][j]);
        }
        printf("\n");
    }
}