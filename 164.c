/*2. Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.*/

#include <stdio.h>
#include<string.h>

int main()
{
    char a[10][20], t[20] ;
    int i , j ;

    printf("Enter 10 city name : ") ;

    for (i=0 ; i<=9 ; i++)
        fgets(a[i] , 20 , stdin) ;

    for (i=0 ; i<=9 ; i++)
    {
        for (j=0 ; j<=9; j++)
        {
            if (strcmp(a[i],a[j]) < 0 )
            {
                strcpy (t , a[i]) ;
                strcpy (a[i] , a[j]) ;
                strcpy (a[j] , t) ;
            }
        }
    }

    printf("After sroting : \n") ;
    for (i=0 ; i<=9 ; i++)
        printf("%s" , a[i]) ;


}
