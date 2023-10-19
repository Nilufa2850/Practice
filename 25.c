#include<stdio.h>
int main ()
{
    int x ;
    printf("enter a number : ") ;
    scanf("%d" , &x) ;

    if (x % 5 ==0 )
        printf("divisible") ;
    else 
        printf("Not divisible") ;


    return 0 ;
}
