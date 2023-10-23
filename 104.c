//10. Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>

int power(int x , int n)
{
    if (n==0)
        return 1 ;

    return power(x, n-1)*x ;
}

int main ()
{
    int x , n  ;
    printf("Enter number : ") ;
    scanf("%d%d" , &x , &n) ;

    printf("power of %d^%dis %d" ,x,n , power(x,n) ) ;

}

