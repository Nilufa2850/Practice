//3. Write a program to count vowels in a given string

#include <stdio.h>
#include<string.h>

int main ()
{
    char str [20] ;
    int i , c=0 ;

    printf("Enter a string : ") ;
    fgets(str , 20 , stdin) ;

    for (i=0 ; str[i] ; i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') 
            c++ ;
    }

    printf("total vowels are %d" , c) ;
    return 0 ;
}
