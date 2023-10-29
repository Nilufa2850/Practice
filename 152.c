//8. Write a program in C to copy one string to another string.

#include <stdio.h>
#include<string.h>

int main ()
{
    char a[30] , b[30] ;
    
    printf("Enter a string : ") ;
    fgets(a , 30 , stdin) ;

    strcpy(b , a) ;

    printf("a - %s" , a) ;
    printf("b - %s" , b) ;

    return 0 ;
}

