#include<stdio.h>
int main ()
{
    
    int a , b ;
    int i ;

    printf("Enter two number : ") ;
    scanf("%d%d" , &a, &b) ;

    for(i = a>b?a:b ; i<=a*b ; i++)
    {
        if (i%a==0 && i%b==0)
            break ;
    }
    printf("LCM is %d" , i) ;

}
