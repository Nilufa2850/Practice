//Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>

float area_circle (int) ;
int main ()
{
    int x ;
    printf("Enter radius : ") ;
    scanf("%d" , &x) ;

    printf("Area is %.2f" , area_circle(x)) ;
    return 0 ;
}
float area_circle (int r)
{
    return 3.14*r*r ;
}
