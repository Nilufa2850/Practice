//1. Write a function to calculate length of the string

#include <stdio.h>
#include<string.h>
int length ( char [] ) ;

int main ()
{
    char str[30] ;
    
    printf("Enter a string : ") ;
    gets(str ) ;

    printf("Leangth is %d" , length(str)) ;
}

int length ( char a[] )
{
    int i ;

    for (i=0 ; a[i] ; i++);
        
    return i ;
}

