#include<stdio.h>

/*Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/

int even_odd (int) ;

int main ()
{
    int a ;
    printf("Enter a number  : ") ;
    scanf("%d" , &a) ;

    if (even_odd(a))
        printf("Even") ;
    else
        printf("odd") ;
    return 0 ;
}
int even_odd (int x )
{
    if (x %2==0)
        return 1 ;
    else
        return 0 ;
}
