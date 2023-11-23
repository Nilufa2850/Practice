/*10. Find out the maximum and minimum from an array using dynamic memory allocation
in C.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int n ;
    printf("Enter size : ") ;
    scanf("%d" , &n) ;

    int*p = (int*) calloc(n , sizeof(int)) ;

    int i , j , temp ;

    printf("Enter %d numbers : " , n) ;
    for (i=0 ; i<n ; i++)
        scanf("%d" , &p[i]) ;

    for (i=0 ; i<n-1 ; i++)
    {
        for (j=i+1 ; j<n ; j++)
        {
            if (p[i] > p[j])
            {
                temp = p[i] ;
                p[i] = p[j] ;
                p[j] = temp ;
            }
        }
    }

    printf("Max - %d\nMin - %d" , p[n-1] , p[0]) ;

    
}
