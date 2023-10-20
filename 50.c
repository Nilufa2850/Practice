#include<stdio.h>
int main ()
{
    
    int a , sum=0 , y ;

    printf("Enter a number : ") ;
    scanf("%d" , &a) ;

    while (a)
    {
        y = a%10 ;
        sum = sum*10+y ;
        a = a/10 ;
    }
    printf("rev-%d" , sum) ;

}
