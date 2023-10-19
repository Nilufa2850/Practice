//4. WAP to find the area of the circle. Take radius of circle from user as input and print the
//result in below given format.

#include<stdio.h>
int main ()
{
    int r ;
    printf("Enter a radius : ") ;
    scanf ("%d" , &r) ;
    float a ;
    a = 3.141*r*r ;
    printf("Area of %d is %.2f" , r , a) ;
    return 0 ;
}
