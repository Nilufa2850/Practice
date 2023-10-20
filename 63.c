/*Write a program which takes the month number as an input and display
number of days in that month.*/
#include<stdio.h>
int main ()
{
    int x ;
    printf("Entere month numbers : ") ;
    scanf("%d" , &x) ;

    switch (x)
    {
        case 1 : printf ("january") ;
                break ;
        case 2 : printf("february") ;
                    break ;
        case 3 : printf("march") ;
                    break ;
        case 4 : printf ("april") ;
                    break ;
        default : printf("wrong month number ,") ;
    }
}
