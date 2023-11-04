#include<stdio.h>
#include<string.h>

int main ()
{
    char a[5][20] , temp[20];
    printf("Enter 5 city names : ") ;
    int i , j ;
    for (i=0 ; i<=4 ; i++)
        fgets(a[i], 20 , stdin) ;

    for (i=0 ; i<=4 ; i++)
    {
        for (j=i+1 ; j<=4 ; j++ )
        {
            if (strcmp(a[i] , a[j]) > 0)
            {
                strcpy (temp , a[i]) ;
                strcpy (a[i] , a[j] ) ;
                strcpy(a[j] , temp) ;
            }
        }
        printf("%s" , a[i]) ;
    }
    

    
}
