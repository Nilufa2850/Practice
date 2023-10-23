
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
        N_print(n-1) ;
        printf(" %d" , n) ;
    }
    
    
}
