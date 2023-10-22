//Write a function to print first N prime numbers (TSRN)

#include <stdio.h>
void prime (int ) ;

int main ()
{
    int n ;
    printf("Enter a number : ") ;
    scanf("%d" , &n) ;

    prime (n) ;
    return 0 ;
}
void prime (int n)
{
    int i , x=2;

    while(n)
    {
        for (i=2 ; i < x ; i++)
        {
            if(x%i==0)
                break ;
        }
        if (i==x)
        {
            printf("%d " ,i) ;
            n-- ;
        }
        x++ ;
    }

    
            
    
}
