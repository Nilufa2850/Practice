/*5. Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.*/

#include <stdio.h>
#include<string.h>

int main()
{
    char a[5][20]  ;

    int i , j , c=0 ;

    printf("Enter 5 string : ") ;
    for (i=0 ; i<=4 ; i++)
        gets(a[i]) ;

    for (i=0 ; i<=4 ; i++)
    {
        for (j=0 ; a[i][j] ; j++)
        {
            if (strchr(a[i] , '@') != 0  )
            {
                printf("%s - Valid\n" , a[i]) ;
                break ;
            }     
        } 
    } 
}
