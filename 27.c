#include<stdio.h>
int main ()
{
    int x ;
    printf("enter a number : ") ;
    scanf("%d" , &x) ;
    int c=0 , y ;

    while (x)
    {
        y = x%10 ;
        c++ ;
        x = x/10 ;
    }
    if (c==3)
        printf("three digit") ;
    else    
        printf("not") ;


    return 0 ;
}
