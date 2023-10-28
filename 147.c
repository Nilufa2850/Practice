//2. Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>
#include<string.h>

int main ()
{
    char str [20] , ch  ;
    int i , c=0 ;

    printf("Enter a character : ") ;
    scanf("%c" , &ch) ;

    fflush(stdin) ;

    printf("Enter a string : ") ;
    fgets(str , 20 , stdin) ;

    for (i=0 ; str[i] ; i++)
    {
        if (str[i] == ch) 
            c++ ;
    }

    printf("%c occurrence %d times" , ch,c) ;

    return 0 ;

}
