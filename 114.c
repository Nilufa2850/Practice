/*9. Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.*/

#include<stdio.h>
int main ()
{
    int n  , i ;

    printf("\nEnter size of 'a' array : ") ;
    scanf("%d" , &n) ;

    int a[n] ;

    printf("\nEnter %d numbers : " , n) ;
    for(i=0 ; i<n ; i++)
        scanf("%d" , &a[i]) ;

    printf("\nReverse order is : ") ;
    for(i=n-1 ; i>=0 ; i--)
        printf("%d " , a[i]) ;

    return 0 ;

}
