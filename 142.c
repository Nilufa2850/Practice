/*9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.*/

#include<stdio.h>
int main ()
{
    int a[3][3] ;

    int i , j , c1=0 , c2=0 ;

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

    
    for (i=0 ; i<=2 ; i++)
    {
        for (j=0 ; j<=2 ; j++)
        {
            if (a[i][j] == 0)
                c1++ ;

            else
                c2++ ;
        }
    }

    if (c1 > c2)
        printf("\nits a sparse matrix") ;
    else
        printf("not") ;

    
    

    return 0 ;
}
