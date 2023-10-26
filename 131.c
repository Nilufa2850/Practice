/*8. Write a function in C to print all unique elements in an array.*/

#include<stdio.h>

int main ()
{
    int a[10] ;

    int i , j , c ;

    printf("Enter 10 numbers : " ) ;
    for(i=0 ; i<=9 ; i++)
        scanf("%d" , &a[i]) ;

    printf("\nUnique numbers \n" ) ;

    for (i=0 ; i<=9 ; i++)
    {
        c=0 ;

        for (j=0 ; j<=9 ; j++)
        {
            if (a[i] == a[j] && i!=j )
                c++ ;   
        }

        if (c==0)
            printf("%d " , a[i]) ;
    }

    return 0 ;
}
