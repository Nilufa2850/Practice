/*Write a function to calculate hcf of two numbers. (TSRS)*/

#include <stdio.h>
int hcf (int x , int y) ;

int main ()
{
    int n ,m;
    printf("Enter two number : ") ;
    scanf("%d%d" , &n,&m) ;

    printf("hcf is %d", hcf(n , m)) ;

    return 0 ;
}

int hcf (int x , int y)
{
    int i , min ;

    min = x<y?x:y ;

    for (i = min ; i>=1 ; i--)
        if (x%i==0 && y%i==0)
            return i ;
            
    
}
