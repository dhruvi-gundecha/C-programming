// find grade :-
#include <stdio.h>

int main()
{
    int a, b, c, d;
    float result;

    printf("enter the first subject marks ");
    scanf("%d", &a);
    printf("enter the second subject marks :");
    scanf("%d", &b);
    printf("enter the third subject marks :");
    scanf("%d", &c);
    printf("enter the forth subject marks :");
    scanf("%d", &d);

    result = (a + b + c + d) / 400.0 * 100.0;

    if (result > 90.00)
    {
        printf("STUDENT PASS WITH DISTINCTION.");
    }
    else if (result > 80.00)
    {
        printf("STUDENT PASS WITH FIRST CLASS.");
    }
    else if (result > 60.00)
    {
        printf("STUDENT PASS WITH SECOND CLASS.");
    }
    else if (result > 35.00)
    {
        printf("STUDENT PASS WITH PASS CLASS.");
    }
    else
    {
        printf("STUDENT IS FAIL");
    }
    return 0;
}