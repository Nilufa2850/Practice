/*6. Write a program in C to find the sum of rows and columns of a Matrix.*/

#include<stdio.h>
int main ()
{
    int a[3][3] ;

    int i , j , sum1=0 ;

    printf("Enter 3x3 values of a[] : ") ;
    for (i=0 ; i<=2 ; i++)
        for (j=0 ; j<=2 ; j++)
            scanf("%d" , &a[i][j]) ;

    printf("\nInput Matrix\n") ;
    for (i=0 ; i<=2 ; i++)
    {
           for (j=0 ; j<=2 ; j++)
            printf("%d   " , a[i][j]) ;

        printf("\n") ;
    }

    printf("\nSum of rows : \n.................\n") ;
    for (i=0 ; i<=2 ; i++)
    {
        sum1=0 ;
        for (j=0 ; j<=2 ; j++)
        {
            sum1 = sum1 + a[i][j] ;
        }
        printf("Row %d sum %d \n" , i+1 , sum1) ;
    }

    printf("\nSum of colmnn : \n.................\n") ;
    for (i=0 ; i<=2 ; i++)
    {
        sum1=0 ;
        for (j=0 ; j<=2 ; j++)
        {
            sum1 = sum1 + a[j][i] ;
        }
        printf("column %d sum %d \n" , i+1 , sum1) ;
    }
    

    return 0 ;
}
