// ------------- Key Point's -------------

// perimeter means the outside edge or limit of an area of land 
// perimeter means the circumference of any plane area

// calculate peri of rectangle :-

// peri of rectangle =2 *(width + length)
// scan the width and length
// print result  

#include<stdio.h> 
int main(){
    int length,width,perimeter;
    
    printf("ENTER THE LENGTH : ");
    scanf("%d",&length);
    printf("ENTER THE WIDTH : ");
    scanf("%d",&width);

    perimeter = 2* (length+width);

    printf("perimeter = %d",perimeter);
    
    return 0;
}