//7. Write a function to print first N terms of Fibonacci series (TSRN)

#include <stdio.h>
void fibo (int ) ;

int main ()
{
    int n ;
    printf("Enter number : ") ;
    scanf("%d" , &n) ;

    fibo(n) ;
    return 0 ;
}

void fibo(int n)
{
    int a=-1, b=1 , c , i ;

    for (i=1 ; i<=n ; i++)
    {
        c = a+b ;
        a = b ;
        b = c ;

        printf("%d\n" , c) ;
    }
    
}
