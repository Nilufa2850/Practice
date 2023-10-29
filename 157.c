//2. Write a function to reverse a string.

#include <stdio.h>
#include<string.h>
int length ( char [] ) ;
void rev(char [] ) ;

int main ()
{
    char str[30] ;
    
    printf("Enter a string : ") ;
    gets(str ) ;

    rev(str) ;

}
int length ( char a[] )
{
    int i ;
    for (i=0 ; a[i] ; i++); 
    return i ;
}
void rev(char b[])
{
    int i , l ;
    l = length(b) ;

    for (i=l ; i>=0 ; i--)
        printf("%c" , b[i]) ;
}

