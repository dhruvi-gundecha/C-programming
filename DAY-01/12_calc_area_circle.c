// ------------- Key Point's -------------
// calculate area of circle :-

// area of circle = pie * radius * radius
// scan the radius
// print result 
// ' %f ' ==> this indicate's a format specifier used as a placeholder for signed decimal floating numbers.
// floating number means = 10.1000 , 2032.2434

// ------------------------------------------
#include<stdio.h> 
int main(){
    float radius,pie,area;
    pie=3.14;

    printf("ENTER THE RADIUS : ");
    scanf("%f",&radius);

    area =pie * radius * radius;

    printf("area = %0.2f",area);

    return 0;
}

// ------------------------------------------
#include<stdio.h> 
int main(){
    float radius,pie,perimeter;
    pie=3.14;

    printf("ENTER THE RADIUS : ");
    scanf("%f",&radius);

    perimeter = 2 * pie * radius;

    printf("perimeter = %0.2f",perimeter);

    return 0;
}

// ------------- Key Point's -------------
// calculate peri of circle :-

// peri of circle = 2 * pie * radius
// scan the radius
// print result 
// ' %f ' ==> this indicate's a format specifier used as a placeholder for signed decimal floating numbers.
// floating number means = 10.1000 , 2032.2434 

