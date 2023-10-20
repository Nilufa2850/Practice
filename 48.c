#include<stdio.h>
int main ()
{
    int x , sum=0 ;

    do
    {
        printf("Enter a number : ") ;
        scanf ("%d" , &x) ;
        sum = sum+x ;
    } while (x) ;
    printf("Sum is %d" , sum) ;
}
