
// ------------- Key Point's -------------
// calculate area of rectangle :-

// scan the width and length
// area of rectangle = width * length
// print result  


#include<stdio.h> 
int main()
{
    int length,width,area;

    printf("ENTER THE LENGTH : ");
    scanf("%d",&length);
    printf("ENTER THE WIDTH : ");
    scanf("%d",&width);

    area = length * width;

    printf("AREA = %d",area);

    return 0;
}