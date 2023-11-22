/*4. Write a program to input and print text using dynamic memory allocation.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char *p=NULL ;
    p = (char*) malloc (sizeof(char)) ;

    int i ;
    char ch ;
    int j=1 ;

    printf("Enter a string : ") ;

    for (i=0 ; ch!='\n' ; i++)
    {
        scanf("%c" , &ch) ;
        j++ ;

        p = (char*) realloc (p , sizeof(char)*j) ;
        p[i] = ch ;
    }
    p[i] = '\0' ;

    printf("String is - %s" , p) ;

    free(p) ;
}

/*int main ()
{
    char *p =NULL ;
    p = (char*) calloc(20 , sizeof(char)) ;

    printf("Enter a string : ") ;
    fgets(p , 20 , stdin) ;

    printf("Text is - %s" , p) ;
}*/
