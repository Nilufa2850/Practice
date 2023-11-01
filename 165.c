/*4. Write a program to search a string in the list of strings.*/

#include <stdio.h>
#include<string.h>

int main()
{
    char a[10][20], t[20] ;
    int i , j ;

    printf("Enter 10 city name : ") ;

    for (i=0 ; i<=4 ; i++)
        fgets(a[i] , 20 , stdin) ;

    for (i=0 ; i<=4 ; i++)
    {
        for (j=i+1 ; j<=4; j++)
        {
            if (strcmp(a[i],a[j]) > 0 )
            {
                strcpy (t , a[i]) ;
                strcpy (a[i] , a[j]) ;
                strcpy (a[j] , t) ;
            }
        }
    }

    printf("After sroting : \n") ;
    for (i=0 ; i<=4 ; i++)
        printf("%s" , a[i]) ;


}
