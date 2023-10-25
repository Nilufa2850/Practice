/*7. Write a function in C to count a total number of duplicate elements in an array.*/

#include<stdio.h>
void unique (int [] , int) ;

int main ()
{
    int a[10] ;  

    unique(a,10) ;

    return 0 ;

}
void unique (int b[] , int n)
{
    int i , j  , count ;

    printf("Enter %d numbers : " , n) ;
    for(i=0 ; i<=n-1 ; i++)
        scanf("%d" , &b[i]) ;

    printf("\nunique numbers are : \n") ;

    for(i=0 ; i<=n-1 ; i++)
    {
        count=0 ;

        for (j=0 ; j<=n-1 ; j++)
        {
            if (b[i] == b[j] && i!=j)
            {
                count++ ;
                break ;
            }
        }

        if (count == 0)
            printf("%d " , b[i]) ;
    }
    
}
