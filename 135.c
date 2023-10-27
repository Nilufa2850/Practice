/*3. Write a program in C to find the transpose of a given matrix.*/
#include<stdio.h>
int main ()
{
    int a[3][3] ;

    int i , j , k , sum=0 ;

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

    printf("\nTranspose matrix\n") ;
    for (i=0 ; i<=2 ; i++)
    {
        for (j=0 ; j<=2 ; j++)
            printf("%d   " , a[j][i]) ;
        
        printf("\n") ;
    }

    return 0 ;
}
