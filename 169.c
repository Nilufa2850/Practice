/*7. Write a function to check whether a given string is palindrome or not.*/

#include <stdio.h>
#include<string.h>

void palindrome (char str[])
{
    int i ,j , len; 
    len = strlen (str) ;

    for (i=0,j=len-1 ; i<=j ; i++,j--)
    {
        if (str[i]!=str[j]) 
                break ;
        
    }
    if (i>j)
        printf("Palindrome") ;
    else
        printf("not") ;


}
int main ()
{
    char str[30] ;
    printf("Enter a string : ") ;
    gets(str) ;
    palindrome(str) ;
}
