// 2. In digital world colors are specified in RGB format, with values of R, G, and B varying on integer scale 
// from 0 to 255. Colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format with values of C, M, 
// Y and K varying on a real scale from 0.0 to 1.0. Convert RGB color to CMYK as per formula: - 
// White=Max(red/255,green/255,blue/255) - Cyan=(white - red/255)/white - Magenta=(white - 
// green/255)/white - Yellow=(white - blue/255)/white - Black=1 - white Note: if RGB values are all 0, then 
// the CMY values are all 0 and the K value is 1. 
#include <stdio.h>

int main()
{
    int R, G, B;
    float r, g, b;
    float white, C, M, Y, K;

    printf("enter the R value : ");
    scanf("%d",&R);
    printf("enter the G value : ");
    scanf("%d",&G);
    printf("enter the B value : ");
    scanf("%d",&B);

    r = R / 255.0;
    g = G / 255.0;
    b = B / 255.0;

    if (R == 0 && G == 0 && B == 0)
    {
        C = 0;
        M = 0;
        Y = 0;
        K = 1;
    }
    else
    {
        white = r;

        if (g > white)
            white = g;

        if (b > white)
            white = b;

        C = (white - r) / white;
        M = (white - g) / white;
        Y = (white - b) / white;
        K = 1 - white;
    }

    printf("Cyan    = %.2f\n", C);
    printf("Magenta = %.2f\n", M);
    printf("Yellow  = %.2f\n", Y);
    printf("Black   = %.2f\n", K);

    return 0;
}