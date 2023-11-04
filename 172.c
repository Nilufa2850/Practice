/*6. Write a program to print the strings which are palindrome in the list of strings.*/

#include<stdio.h>
#include<string.h>

int main ()
{
    char a[5][20] ;
    int i , j , k , l ;

    printf("Enter 5 string : ") ;
    for (i=0 ; i<=4 ; i++)
        gets(a[i]) ;

    for (i=0 ; i<=4 ; i++)
    {
        l = strlen(a[i]) ;

        for (j=0,k=l-1 ; j<=k ; j++,k--)
        {
            if (a[i][j]!=a[i][k])
            break ;
        }
        if (j>k)
            printf("%s\n" , a[i]) ;
    }
    

    
}
