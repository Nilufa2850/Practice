
//4. Write a program to convert a given string into uppercase

#include <stdio.h>
#include<string.h>

int main ()
{
    char str [30] ;
    int i ;

    printf("Enter a string : ") ;
    gets(str) ;

    //printf("%s" , strupr(str)) ;

    for (i=0 ; str[i] ; i++)
        str[i] = str[i]-32 ;

    printf("%s" , str) ;
    return 0 ;
}
