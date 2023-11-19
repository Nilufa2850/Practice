//9. Write a program to print the elements of an array in reverse order.

#include<stdio.h>
int main ()
{
    int a[10] ;
    int *p = NULL ;
    int i , sum=0 ;

    p = a ;

    printf("Enter 10 numbers : ") ;

    for (i=0 ; i<10 ; i++)
        scanf("%d" , & p[i]) ;

    for (i=9 ; i>=0 ; i--)
    {
        printf("%d " , p[i]) ;
    }

}
