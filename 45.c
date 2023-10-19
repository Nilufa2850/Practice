
#include<stdio.h>
int main ()
{
    int x , n , fact = 1 ;

    printf("Enter a number : ") ;
    scanf ("%d" , &n) ;
    
    for (x=n ; x>=1 ; x--)
        fact = fact*x ;

    printf("factorual is %d" , fact) ;
        

    return 0 ;
}
