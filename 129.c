/*5. Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.*/

#include<stdio.h>

int main ()
{
    int a[10] ;

    int i , j ;

    printf("Enter 10 numbers : " ) ;
    for(i=0 ; i<=9 ; i++)
        scanf("%d" , &a[i]) ;

    printf("\n1st ajacent duplicate : ") ;

    for (i=0 ; i<=9 ; i++)
    {
        if (a[i] == a[i+1])
        {
            printf("%d " , a[i]) ;
            break ;
        }
    }



    return 0 ;
}
