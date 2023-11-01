//8. Write a function to count words in a given string

#include <stdio.h>
#include<string.h>
int count (char a[]) ;
int main()
{
    char str[30] ;
    printf("Enter a number : ") ;
    fgets(str,30,stdin) ;

    printf("total word is %d",count(str)-1) ;
    return 0 ;
}
int count (char a[])
{
    int i , c=0 ; 

    for(i=0 ; a[i] ; i++)
        c++ ;
    return c ;
}
