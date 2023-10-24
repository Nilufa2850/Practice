/*10. Write a program in C to copy the elements of one array into another array.Take array
values from the user.*/

#include<stdio.h>
int main ()
{
    int n  , i ;

    printf("\nEnter size of 'a' array : ") ;
    scanf("%d" , &n) ;

    int a[n] , b[n] ;

    printf("\nEnter %d numbers : " , n) ;
    for(i=0 ; i<n ; i++)
        scanf("%d" , &a[i]) ;

    for(i=0 ; i<n ; i++)
    {
        b[i] = a[i] ;

        printf("%d " ,b[i]) ;
    }

    return 0 ;

}
