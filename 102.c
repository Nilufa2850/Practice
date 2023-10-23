#include <stdio.h>

void dtob(int n)
{
    if (n>0)
    {
        dtob(n/2) ;
        printf("%d" , n%2) ;
    }
}

int main ()
{
    int x, y  ;
    printf("Enter number : ") ;
    scanf("%d" , &x) ;

    dtob(x) ;

}

