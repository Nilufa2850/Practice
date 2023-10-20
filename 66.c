/*Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.*/

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int x ;
    printf("enter a number : ") ;
    scanf("%d" , &x) ;

    switch (x > 0 )
    {
        case 1 :printf("number is %d" , -x) ;
                    break ;
                

        case 0 : printf("number is %d" , -x) ;
                    break ;
                

        default : printf("invalid") ;
                    break ;
    }
}
