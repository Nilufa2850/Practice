/*7. Write a program to find second largest in an array.Take array values from the user.*/

#include<stdio.h>
int main ()
{
    int n  , i , j , temp ;

    printf("Enter size of array : ") ;
    scanf("%d" , &n) ;

    int a[n] ;

    printf("Enter %d numbers : " , n) ;
    
    for(i=0 ; i<n ; i++)
        scanf("%d" , &a[i]) ;

    for (i=0 ; i<=n-2 ; i++)
    {
        for(j=i+1 ; j<=n-1 ; j++)
        {
            if (a[i] > a [j])
            {
                temp = a[i] ;
                a[i] = a[j] ;
                a[j] = temp ;
            }
        }
    }

    printf("second largest is %d" , a[n-2]) ;
    return 0 ;

}
