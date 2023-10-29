/*7. Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/

#include <stdio.h>
#include<string.h>

int main ()
{
    char str [30] ;
    int i , alphabet=0 , digit=0 , count=0 ;

    printf("Enter a string : ") ;
    gets(str) ;

    for (i=0 ; str[i] ; i++)
    {
        if(str[i]>='a'&& str[i]<='z' || str[i]>='A'&& str[i]<='Z')
            alphabet++ ;
        
        else if (str[i]>='0'&& str[i]<='9')
            digit++ ;
        
        else
            count++ ;
    }

    printf("\nTlotal no. of alphabet : %d" , alphabet) ;
    printf("\nTlotal no. of digit : %d" , digit) ;
    printf("\nTlotal no. of special character : %d" , count) ;
    
    return 0 ;
}


