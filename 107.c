#include<stdio.h>
int main ()
{
    int a[10] ;
    int i, sum_even=0 , sum_odd=0 ;

    printf("Enter 10 number : ") ;
    
    for(i=0 ; i<=9 ; i++)
        scanf("%d" , &a[i]) ;

    for (i=0 ; i<=9 ; i++)
    {
        if (a[i] % 2 ==0)
            sum_even = sum_even+a[i] ;
        else
            sum_odd = sum_odd+a[i] ;
    }

    printf("Sum of even num is %d" , sum_even) ;
    printf("\nSum of odd num is %d" , sum_odd) ;

}
