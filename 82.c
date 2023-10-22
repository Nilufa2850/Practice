/*Write a function to check whether a given number is Prime or not. (TSRS)*/

#include <stdio.h>
int prime (int ) ;

int main ()
{
    int n ;
    printf("Enter a number : ") ;
    scanf("%d" , &n) ;

    if (prime(n))
        printf("prime") ;
    else
        printf("not") ;

    return 0 ;
}

int prime (int x)
{
    int i ;

    for (i=2 ; i<x ; i++)
    {
        if (x % i ==0)
            return 0 ;

    }
    if (i==x)
        return 1 ;
            
    
}
