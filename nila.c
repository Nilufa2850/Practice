/*5. Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int n ;
    printf("Enter size of array : ") ;
    scanf("%d" , &n) ;

    int *p = NULL ;
    p = (int*) calloc(n,sizeof(int)) ;

    printf("Enter %d numbers of values : " , n) ;
    int i ;
    for (i=0 ; i<n ; i++)
        scanf("%d" , &p[i]) ;

    int sum = 0 ;

    for (i=0 ; i<n ; i++)
        sum = sum + p[i] ;

    printf("Sum is %d" , sum) ;
}
