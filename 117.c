/*Write a function to find the greatest number from the given array of any size. (TSRS)*/

#include<stdio.h>
int greatest (int [] , int ) ;
int main ()
{
    int a[5] ;

    printf("smallest number is %d" , greatest (a,5)) ;

    return 0 ;

}

int greatest (int b[] , int n)
{
    int i , min=99999 ;
    printf("Enter %d numbers : " , n) ;

    for(i=0 ; i<=n-1 ; i++)
        scanf("%d" , &b[i]) ;

    for(i=0 ; i<=n-1 ; i++)
    {
        if (min > b[i])
            min = b[i] ;
    }

    return min ;
}
