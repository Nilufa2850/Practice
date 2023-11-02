/*7. Write a function to check whether a given string is palindrome or not.*/

#include <stdio.h>
#include<string.h>

void palindrome (char str[])
{
    int i ,j,len , temp; 

    len = strlen(str) ;

    for (i=0 ; i<=(len/2)-1 ; i++)
    {
        if (str[i]!=str[len-1-i]) 
                break ;
        
    }
    if (i==len/2)
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
