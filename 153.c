//9. Write a C program to sort a string array in ascending order.

#include <stdio.h>
#include<string.h>

int main ()
{
    char str[30] ;
    
    printf("Enter a string : ") ;
    fgets(str , 30 , stdin) ;

    int i , j , temp ;
    for (i=0 ; str[i] ; i++)
    {
        for (j=i+1 ; str[j] ; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i] ;
                str[i] = str[j] ;
                str[j] = temp ;
            }
        }
    }

    printf("After swaping - %s" , str) ;

    return 0 ;
}

