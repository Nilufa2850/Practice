/*Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/

#include <stdio.h>
int prime_factor (int n ) ;

int main ()
{
    int num ;
    printf("Enter a number : ") ;
    scanf("%d" , &num) ;

    prime_factor (num) ;

    return 0 ;
}

int prime_factor (int n )
{
    int i , count=0 ;

    for(i=2 ; n > 1 ; i++)
    {
        if (n%i==0)
        {
            count ++ ;
            printf  ("%d " , i) ;  

            n = n / i ;
        }
            
    }
    if (count==0)
        printf("no factor") ;
    
}
