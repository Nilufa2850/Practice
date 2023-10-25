/*3. Write a function to sort an array of any size. (TSRN)*/

#include<stdio.h>
void sorting (int [] , int ) ;

int main ()
{
    int a[5] , i ;  

    sorting(a,5) ;

    return 0 ;

}
void sorting (int b[] , int n)
{
    int i , j , temp ;
    printf("Enter %d numbers : " , n) ;
    for(i=0 ; i<=n-1 ; i++)
        scanf("%d" , &b[i]) ;

    for(i=0 ; i<=n-2 ; i++)
    {
        for (j=i+1 ; j<=n-1 ; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i] ;
                b[i] = b[j] ;
                b[j] = temp ;
            }
        }
    }
    for (i=0 ; i<n ; i++)
        printf("%d " , b[i] );
}
