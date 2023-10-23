//2. Write a recursive function to print first N natural numbers in reverse order
#include <stdio.h>
void N_print (int n) ;

int main ()
{
    int n ;
    printf("Enter number : ") ;
    scanf("%d" , &n) ;

    N_print(n) ;

    return 0 ;
}

void N_print (int n)
{
    if (n>0)
    {
        printf(" %d" , n) ;
        N_print(n-1) ;
    }
    
    
}
