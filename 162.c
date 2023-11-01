//8. Write a function to count words in a given string

#include <stdio.h>
#include<string.h>

int main()
{
    char str[40] ;

    printf("Enter a string : ") ;
    fgets(str, 40 , stdin);

    int i , c=0 ;

    for (i=0 ; str[i] ; i++)
    {
        if (str[i]==' ' || str[i] == '\n')
            c++ ;
    }
    printf("Number of words are - %d" , c) ;

}
