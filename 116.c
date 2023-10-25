/*Write a function to find the greatest number from the given array of any size. (TSRS)*/

#include<stdio.h>
int greatest (int [] , int ) ;
int main ()
{
    int a[5] ;

    printf("greatest number is %d" , greatest (a,5)) ;

    return 0 ;

}

int greatest (int b[] , int n)
{
    int i , max=-99999 ;
    printf("Enter %d numbers : " , n) ;

    for(i=0 ; i<=n-1 ; i++)
        scanf("%d" , &b[i]) ;

    for(i=0 ; i<=n-1 ; i++)
    {
        if (max<b[i])
            max = b[i] ;
    }

    return max ;
}
