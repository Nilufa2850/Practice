/*1. Write a program to calculate the sum of two matrices each of order 3x3.*/

#include<stdio.h>
int main ()
{
    int a[3][3] , b[3][3] ;
    int c[3][3] ;

    int i , j ;


    printf("Enter 3x3 values of a[] : ") ;
    for (i=0 ; i<=2 ; i++)
        for (j=0 ; j<=2 ; j++)
            scanf("%d" , &a[i][j]) ;



    printf("Enter 3x3 values of b[] : ") ;
    for (i=0 ; i<=2 ; i++)
        for (j=0 ; j<=2 ; j++)
            scanf("%d" , &b[i][j]) ;



    printf("\na[] matrix is : \n") ;
    for (i=0 ; i<=2 ; i++)
    {
        for (j=0 ; j<=2 ; j++)
            printf("%d  " ,a[i][j]) ;

        printf("\n") ;
    }


    printf("\nb[] matrix is : \n") ;
    for (i=0 ; i<=2 ; i++)
    {
        for (j=0 ; j<=2 ; j++)
            printf("%d  " ,b[i][j]) ;

        printf("\n") ;
    }



    // sum
    for (i=0 ; i<=2 ; i++)
        for (j=0 ; j<=2 ; j++)
            c[i][j] = a[i][j] + b[i][j] ;



    printf("\nSum matrix is : \n") ;
    for (i=0 ; i<=2 ; i++)
    {
        for (j=0 ; j<=2 ; j++)
            printf("%d  " ,c[i][j]) ;

        printf("\n") ;
    }


}
