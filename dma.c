/*4. Write a program to input and print text using dynamic memory allocation.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char *p =NULL ;
    p = (char*) calloc(20 , sizeof(char)) ;

    printf("Enter a string : ") ;
    fgets(p , 20 , stdin) ;

    printf("Text is - %s" , p) ;
}
