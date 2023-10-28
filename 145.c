#include <stdio.h>
int main ()
{
    char str[10] = "Bhopal" ;

    int i , c=0 ;
    for (i=0 ; str[i] ; i++)
        c++ ;
    printf("%d" , c) ;

    for (i=0 ; str[i] ; i++);

    printf("\nAnother method\n%d" , i) ;
}
