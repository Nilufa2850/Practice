#include<stdio.h>
//Write a function to calculate the factorial of a number. (TSRS)

int fact (int x) ;

int main ()
{
    int a ;
    printf("Enter a number  : ") ;
    scanf("%d" , &a) ;
    
    printf("Factorial is %d" , fact(a)) ;

    return 0 ;
}
int fact (int x)
{
    int i ,f=1 ;
    for(i=x ; i>=1 ; i--)
        f = f*i ;

    return f ;
}
