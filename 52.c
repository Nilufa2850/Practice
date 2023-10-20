#include<stdio.h>
int main ()
{
    
    int a=-1 , b=1 , c ;
    int i , n ;
    printf("Enter a term for search fibonacchi : ") ;
    scanf ("%d" , &n) ;
    
    for(i=1 ; i<=n ; i++)
    {
        c = a+b ;
        a = b  ;
        b = c ; 
    }
    printf("%d term fibonacchi is %d\n" ,n, c) ;

}
