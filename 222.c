/*6. Write a program in C to find the largest element using Dynamic Memory Allocation.*/

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

    for (i=1 ; i<n ; i++)
    {
        if (p[0] < p[i])
            p[0] = p[i] ;
    }

    printf("Largest element is %d" , p[0]) ;
}
