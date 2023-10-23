

#include <stdio.h>
void even (int n) ;

int main ()
{
    int n ;
    printf("Enter number : ") ;
    scanf("%d" , &n) ;

    even(n) ;

    return 0 ;
}

void even (int n)
{
    if (n>0)
    {
        printf(" %d" , 2*n) ;
        even (n-1) ;
    }
    
    
}
