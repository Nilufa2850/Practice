//3. Write a recursive function to print first N odd natural numbers

#include <stdio.h>
void odd (int n) ;

int main ()
{
    int n ;
    printf("Enter number : ") ;
    scanf("%d" , &n) ;

    odd(n) ;

    return 0 ;
}

void odd (int n)
{
    if (n>0)
    {
        odd (n-1) ;
        printf(" %d" , 2*n-1) ;
    }
    
    
}
