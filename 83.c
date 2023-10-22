/*4. Write a function to find the next prime number of a given number. (TSRS)*/

#include <stdio.h>
int prime (int ) ;

int main ()
{
    int n ;
    printf("Enter a number : ") ;
    scanf("%d" , &n) ;

    printf("next prime of %d is %d" , n , prime(n)) ;
    return 0 ;
}

int prime (int x)
{
    int i , n ;

    for (n = x+1 ; n ; n++)
    {
        for (i=2 ; i<n ; i++)
        {
            if (n % i ==0)
                break ;

        }
        if (i==n)
            return n ;
    }
            
    
}
