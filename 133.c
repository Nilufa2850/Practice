/*9. Write a function in C to merge two arrays of the same size sorted in descending
order.*/

#include<stdio.h>
int main ()
{
    int a[5]  , b[5] , c[10] ;

    int i , j , k ;

    printf("Enter 5 numbers for a[] : " ) ;
    for(i=0 ; i<=4 ; i++)
        scanf("%d" , &a[i]) ;

    printf("Enter 5 numbers for b[] : " ) ;
    for(j=0 ; j<=4 ; j++)
        scanf("%d" , &b[j]) ;

    for (k=0 , i=0 , j=0 ; i<5 && j<5 ; k++ )
    {
        if (a[i] > b[j])
        {
            c[k] = a[i] ;
            i++ ;
        }
        else
        {
            c[k] = b[j] ;
            j++ ;
        }
    }

    while (i<5)
    {
        c[k] = a[i] ;
        i++ ;
        k++ ;
    }

    while (j<5)
    {
        c[k] = b[j] ;
        j++ ;
        k++ ;
    }

    for (k=0 ; k<=9 ; k++)
        printf("%d " , c[k]) ;

    return 0 ;
}
