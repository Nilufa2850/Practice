//1. Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>
#include<string.h>
int main ()
{
    char str [20] ;
    int i ;
    printf("Enter a string : ") ;
    gets(str) ;

    for (i=0 ; str[i] ; i++) ;

    printf("1.lenghth is %d" , i) ;
    printf("\n2.lenghth is %d" , strlen(str)) ;

    return 0 ;

}
