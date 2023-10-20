#include<stdio.h>
int main ()
{
    
    int a=-1 , b=1 , c ;
    int i , n ;
    printf("Enter a number for series : ") ;
    scanf ("%d" , &n) ;
    
    for(i=1 ; i<=n ; i++)
    {
        c = a+b ;
        a = b  ;
        b = c ;

        printf("%d\n" , c) ;
    }

}
