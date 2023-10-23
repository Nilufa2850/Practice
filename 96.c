#include <stdio.h>
void sqr (int n) ;

int main ()
{
    int n ;
    printf("Enter number : ") ;
    scanf("%d" , &n) ;

    sqr(n) ;

    return 0 ;
}

void sqr (int n)
{
    if (n>0)
    {
        sqr(n-1) ;
        printf(" %d ", n*n) ;
    }
    
    
}
