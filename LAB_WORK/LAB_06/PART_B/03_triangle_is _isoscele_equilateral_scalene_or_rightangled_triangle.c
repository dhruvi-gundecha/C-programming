// 3. Three sides of a triangle are entered through the keyboard, WAP to check whether the triangle is
// isosceles, equilateral, scalene or right-angled triangle.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the first side: ");
    scanf("%d", &a);

    printf("Enter the second side: ");
    scanf("%d", &b);

    printf("Enter the third side: ");
    scanf("%d", &c);

    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && b + c > a && c + a > b)
    {
        if (a == b && b == c)
        {
            printf("Equilateral Triangle\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Isosceles Triangle\n");
        }
        else
        {
            printf("Scalene Triangle\n");
        }

        if ((a * a + b * b == c * c) ||
            (a * a + c * c == b * b) ||
            (b * b + c * c == a * a))
        {
            printf("Also Right-Angled Triangle\n");
        }
    }
    else
    {
        printf("Not a valid triangle\n");
    }

    return 0;
}
