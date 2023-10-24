//recursive function to calculate HCF of two numbers

#include <stdio.h>
int hcf (int  , int ) ;

int main ()
{
    int x, y ;
    printf("Enter two number : ") ;
    scanf("%d%d" , &x , &y) ;
    
    printf("hcf is %d " , hcf(x , y)) ;
}

int hcf (int a , int b )
{
    if (a==b)
        return a ;
    
    if (a%b==0)
        return b ;

    if (b%a==0)
        return a ;
    
    if (a>b)
        return hcf(a%b , b) ;
    else
        return hcf(a, b%a) ;
        
}

