/*1. Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.*/

#include <stdio.h>
#include<string.h>

int main()
{
    char str[5][30] ;

    int i , j , c ;

    printf("Enter 5 string : ") ;

    for (i=0 ; i<=4 ; i++)
        fgets(str[i], 30 , stdin) ;
    
    for (i=0 ; i<=4 ; i++)
    {
        c=0 ;
        for (j=0 ; str[i][j] ; j++)
        {
            if (str[i][j]=='a' ||str[i][j]=='e' || str[i][j]=='i' || str[i][j]=='o' || str[i][j]=='u' ||str[i][j]=='A' || str[i][j]=='E' || str[i][j]=='I' || str[i][j]=='O' || str[i][j]=='U')
             c++ ;
        }
        printf("\n%d string - %d" , i+1 , c) ;
    }

    
}
