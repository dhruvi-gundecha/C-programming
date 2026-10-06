// 3. Three sides of a triangle are entered through the keyboard, WAP to check whether the triangle is 
// isosceles, equilateral, scalene or right-angled triangle. 
#include <stdio.h>
int main()
{
    int a, b, c;

    printf("enter the first number : ");
    scanf("%d",&a);
    printf("enter the second number : ");
    scanf("%d",&b);
    printf("enter the third number : ");
    scanf("%d",&c);

    if (a + b > c && b + c >a && c +a > b)
    {
        if (a == b && b == c)
        {
            printf("Equilateral Triangle");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Isosceles Triangle");
        }
        else
        {
            printf("Scalene Triangle");

            if ((a * a + b * b == c * c) ||
                (a * a + c * c == b * b) ||
                (b * b + c * c == a * a))
            {
                printf("\nAlso Right-Angled Triangle");
            }
        }
    }
    else
    {
        printf("Not a valid triangle");
    }

    return 0;
}