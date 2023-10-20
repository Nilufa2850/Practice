/*Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int x ;
    printf("enter a number : ") ;
    scanf("%d" , &x) ;

    switch (x)
    {
        case 1 : printf("Good") ;
                    break ;

        case 2 : printf("better") ;
                    break ;

        case 3 : printf("best") ;
                    break ;

        default : printf("invalid") ;
                    break ;
    }
}
