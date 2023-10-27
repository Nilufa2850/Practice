/*4. Write a program in C to find the sum of right diagonals of a matrix.*/

#include<stdio.h>
int main ()
{
    int a[3][3] ;

    int i , j , sum=0 ;

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

    /******************************************/
    for (i=0 ; i<=2 ; i++)
    {
        for (j=0 ; j<=2 ; j++)
        {
            if (i+j==2)
                sum = sum + a[i][j] ;
        }
    }
    printf("\nSum is %d" , sum) ;

    /******************************************/

    int sum1 = 0 ;
    for (i=0 ; i<=2 ; i++)
    {
        for (j=0 ; j<=2 ; j++)
        {
            if (i==j)
                sum1 = sum1 + a[i][j] ;
        }
    }
    printf("\nSum is %d" , sum1) ;

    return 0 ;
}
