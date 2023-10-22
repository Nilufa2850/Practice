/*Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
function.*/

#include <stdio.h>
int fact (int) ;
float sum (int) ;

int main ()
{
    int n ;
    printf("Enter number : ") ;
    scanf("%d" , &n) ;

    printf("Sum is %.2f" , sum(n)) ;
    return 0 ;
}

int fact (int n)
{
    int i , f=1 ;
    for(i=n ; i>=1 ; i--)
        f = f*i ;

    return f ;
}

float sum (int n)
{
    int i , sum=0 ;
    for (i=1 ; i<=n ;i++)
    {
        sum = sum + (fact(i)/i) ;

        printf("%d!/%d+" , i,i) ;
    }
    printf("\n") ;
    return sum ;
}
