/*7. Write a program to demonstrate memory leak in C.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int n ;
    printf("Enter size : ") ;
    scanf("%d" , &n) ;

    int*p = (int*) calloc(n , sizeof(int)) ;

    int i , sum=0 ;

    printf("Enter %d numbers : " , n) ;
    for (i=0 ; i<n ; i++)
        scanf("%d" , &p[i]) ;

    for (i=0 ; i<n-1 ; i++)
    {
        sum = sum + p[i] ;
    }

    printf("sum is %d" , sum) ;

}
