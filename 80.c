/*Write a function to calculate LCM of two numbers. (TSRS)*/

#include <stdio.h>
int lcm (int x , int y) ;

int main ()
{
    int n ,m;
    printf("Enter two number : ") ;
    scanf("%d%d" , &n,&m) ;

    printf("lcm is %d", lcm(n , m)) ;

    return 0 ;
}

int lcm (int x , int y)
{
    int i ;

    for (i = x>y?x:y ; i<=x*y ; i++)
    {
        if (i%x==0 && i%y==0)
            return i ;
    }
}
