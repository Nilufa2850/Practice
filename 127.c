/*Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/

#include<stdio.h>

void roatate (int b[] , int n) ;
int main ()
{
    int a[5] ;

    roatate(a,5) ;
    
    return 0 ;
}

void roatate (int b[] , int n)
{

    int i ; 
    
    printf("Enter %d numbers : " , n) ;

    for (i=0 ; i<=n-1 ; i++)
        scanf("%d" , &b[i]) ;

    int d , temp ;
 
    for (d=1 ; d<=2 ; d++)
    {
        temp = b[0] ;

        for (i=0 ; i<=n-1 ; i++)
        {
            b[i] = b[i+1] ;
        }
        b[n-1] = temp ;
    }
    for (i=0 ; i<=n-1 ; i++)
        printf("%d " , b[i]) ;
}
