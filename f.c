//6. Write a program to calculate the length of the string using a pointer

#include<stdio.h>
int main ()
{
    char str[20] ;

    char* p = NULL ;
    p = str ;

    printf("Enter a string : ") ;
    fgets(p , 20 , stdin) ;

    int i ;

    for (i=0 ; p[i] ; i++) ;

    printf("Length is %d" , i-1) ;



}
