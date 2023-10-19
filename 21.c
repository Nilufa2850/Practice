#include<stdio.h>
int main ()
{
    int x ;
    printf("enter a number : ") ;
    scanf("%d" , &x) ;

    if (x&1)
        printf("ODD" ) ;
    else
        printf("Even") ;

    return 0 ;
}
