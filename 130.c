/*7. Write a function in C to count a total number of duplicate elements in an array.*/

#include<stdio.h>

int main ()
{
    int a[10] ;

    int i , j , c=0 ;

    printf("Enter 10 numbers : " ) ;
    for(i=0 ; i<=9 ; i++)
        scanf("%d" , &a[i]) ;

    for (i=0 ; i<=8 ; i++)
    {
        for (j=i+1 ; j<=9 ; j++)
        {
            if (a[i] == a[j])
                c++ ;
        }
    }

    printf("Duplicate times - %d" , c) ;



    return 0 ;
}
