//Write a program in C to find the square of any number using the function.

#include <stdio.h>
void sqr (int ) ;

int main ()
{
    int n ;
    printf("Enter number : ") ;
    scanf("%d" , &n) ;

    sqr(n) ;
    return 0 ;
}

void sqr(int n)
{
    printf("square of %d is %d" , n , n*n) ;
    
}
