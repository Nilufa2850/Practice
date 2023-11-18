//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

#include<stdio.h>
#include<string.h>

void swap (char* , char*) ;

int main ()
{
    char a[20] , b[20] ;

    printf("Enter 1st string : ") ;
    fgets(a , 20 , stdin) ;

    printf("Enter 2nd string : ") ;
    fgets(b , 20 , stdin) ;

    swap (a,b) ;

    printf("%s" , a) ;
    printf("%s" , b) ;

}

void swap (char* p , char* q)
{
    char temp[20] ;

    strcpy(temp , p) ;
    strcpy(p , q) ;
    strcpy(q , temp) ;
}
