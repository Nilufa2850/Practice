//Write a recursive function to calculate sum of first N natural numbers

#include <stdio.h>

int sum (int n)
{
    if(n==1)
        return 1 ;
    return sum(n-1)+n ;
    
}

int main ()
{
    int n ;
    printf("Enter number : ") ;
    scanf("%d" , &n) ;

    printf("Sum is %d" , sum(n)) ;

    return 0 ;
}
