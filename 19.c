#include<stdio.h>
int main ()
{
    int x ;
    printf("Enter a numbers : ") ;
    scanf("%d", &x) ;

    int sum=0 , y ;

    while (x)
    {
        y = x%10 ;
        sum = y + sum ;
        x = x/10 ;        
    }
    printf("Sum is %d" , sum) ;

    return 0 ;
}
