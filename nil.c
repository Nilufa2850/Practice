/*8. Write a program to compute the sum of all elements in an array using pointers.*/

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

    for (i=0 ; i<10 ; i++)
    {
        sum = sum+p[i] ;
    }

    printf("Sum is %d" , sum) ;

    

}
