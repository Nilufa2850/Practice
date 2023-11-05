/*7. From the list of IP addresses, check whether all ip addresses are valid.*/

#include<stdio.h>
#include<string.h>

int main ()
{
    char a[5][20] ;
    char *x ;
    int i ;

    printf("Enter 5 ip address : ") ;
    for (i=0 ; i<=4 ; i++)
        gets(a[i]) ;

    for (i=0 ; i<=4 ; i++)
    {
        x = strtok(a,".") ;

        while (x != NULL)
        {
            int y = atoi(x) ;
            
            if (y>=0 && y<=255)
                printf("%d " , y) ;

            x = strtok(NULL , "." );

        }
    }
    

    
}
