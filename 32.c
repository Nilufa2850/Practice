
#include<stdio.h>
int main ()
{
    int a , b , c, d, e ;
    printf("Enter 5 marks : ") ;
    scanf ("%d%d%d%d%d" , &a, &b ,&c, &d , &e) ;

    if (a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
        printf("passed") ;
    else
        printf("failed" )  ;

    return 0 ;
}
