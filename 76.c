/*Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>
int fact (int x) ;
int arrange (int , int ) ;

int main ()
{
    int n , r ;
    printf("Enter two number n , r  : ") ;
    scanf("%d%d" , &n, &r) ;
    
    printf("arrangements is %d" , arrange(n , r)) ;

    return 0 ;
}
int fact (int x)
{
    int i ,f=1 ;
    for(i=x ; i>=1 ; i--)
        f = f*i ;

    return f ;
}
int arrange (int n , int r)
{
    int p ;

    p = fact(n) / fact(n-r) ;
    return p ;
}
