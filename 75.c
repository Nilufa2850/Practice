/*Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>
int fact (int x) ;
int comb (int , int ) ;

int main ()
{
    int n , r ;
    printf("Enter two number n , r  : ") ;
    scanf("%d%d" , &n, &r) ;
    
    printf("combination is %d" , comb(n , r)) ;

    return 0 ;
}
int fact (int x)
{
    int i ,f=1 ;
    for(i=x ; i>=1 ; i--)
        f = f*i ;

    return f ;
}
int comb (int n , int r)
{
    int c ;

    c = fact(n) / ( fact(r) * fact(n-r) ) ;
    return c ;
}
