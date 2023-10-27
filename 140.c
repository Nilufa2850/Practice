/*8. Write a program in C to print or display an upper triangular matrix.*/

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

    for (i=0 ; i<=2 ; i++)
    {
        for (j=0 ; j<=2 ; j++)
        {
            if(i < j)
                a[i][j] = 00 ;
        }
        
    }
    printf("\n..........................\n") ;
    for (i=0 ; i<=2 ; i++)
    {
        for (j=0 ; j<=2 ; j++)
            printf("%d   " , a[i][j]) ;

        printf("\n") ;
    }

    
    

    return 0 ;
}
