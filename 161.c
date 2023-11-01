//10. Write a function to find the repeated character in a given string.

#include <stdio.h>
#include<string.h>
void repeat (char a[]) ;
int main()
{
    char str[30] ;
    printf("Enter a number : ") ;
    fgets(str,30,stdin) ;

    repeat (str) ;

    
    return 0 ;
}
void repeat (char a[])
{
    int i ; 
    int freq[150]={0} ;

    for(i=0 ; a[i] ; i++)
        freq[a[i]] ++ ;

    for (i=0 ; i<150 ; i++)
    {
        if (freq[i] > 1)
            printf("%c - %d\n" , i , freq[i]) ;
    }
        
}
