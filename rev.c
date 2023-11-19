//10. Write a program to print a string in reverse using a pointer

#include<stdio.h>
int main ()
{
    char str[30] ;
    char *p=NULL ;

    p = str ;

    printf("Enter a string : ") ;
    gets(p) ;

    int i , len ;

    for (i=0 ; p[i] ; i++);

    len = i ;

    for (i=len-1 ; i>=0 ; i--)
        printf("%c" , p[i]) ;



}
