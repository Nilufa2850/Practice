/*6. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)*/

#include <stdio.h>
#include<string.h>
void check (char str[]) ;

int main ()
{
    char a[30] ;
    
    printf("Enter 1st string : ") ;
    gets(a) ;

    check(a) ;
    
}

void check (char str[])
{
    int i , alpha=0 , digit=0  ;

    for (i=0 ; str[i] ; i++)
    {
        if (str[i]>='a'&&str[i]<='z' || str[i]>='A'&&str[i]<='Z')
            alpha++ ;

        if (str[i]>='0'&&str[i]<='9')
            digit++ ;
    }

    if (alpha>0 && digit>0)
        printf("Alphanumereic") ;
    else
        printf("It's Not") ;
    
}
