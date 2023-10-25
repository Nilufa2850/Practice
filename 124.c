/*7. Write a function in C to count a total number of duplicate elements in an array.*/

#include<stdio.h>
int duplicate (int [] , int) ;

int main ()
{
    int a[10] ;  

    printf("duplicate value is %d" , duplicate(a,10)) ;

    return 0 ;

}
int duplicate (int b[] , int n)
{
    int i , j , count=0 ;

    printf("Enter %d numbers : " , n) ;
    for(i=0 ; i<=n-1 ; i++)
        scanf("%d" , &b[i]) ;

    for(i=0 ; i<=n-2 ; i++)
    {
        for (j=i+1 ; j<=n-1 ; j++)
        {
            if (b[i] == b[j])
                count ++ ;

        }
    }
    return count ;
    
}
