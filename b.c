/*3. Write a function to sort an array of int type values.                               [ void sort(int *ptr,int size); ]*/

#include<stdio.h>

void sort (int*p , int n) ;
int main ()
{
    int a[10] ;

    int i ;
    printf("Enter 10 values : ") ;
    for (i=0 ; i<10 ; i++)
        scanf("%d" , &a[i]) ;

    sort(a , 10 ) ;

    for (i=0; i<=9 ; i++)
        printf("%d " , a[i]) ;
}

void sort (int*p , int n)
{
    int i ,j , temp;

    for (i=0 ; i<n ; i++)
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
}
