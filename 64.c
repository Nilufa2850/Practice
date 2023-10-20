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
    int a, b ;

while(x)
{
    printf("\nEntere a numbers : ") ;
    scanf("%d" , &x) ;
    switch (x)
    {
        case 1 : printf("\nEnter 2 numbers : ") ;
                    scanf("%d%d" , &a,&b) ;
                    printf("\nsum is %d" ,a+b) ;
                    break ;
        case 2 : printf("\nEnter 2 numbers : ") ;
                    scanf("%d%d" , &a,&b) ;
                    printf("\nsubstract is %d" ,a-b) ;
                    break ;
        case 4 : exit (0) ;

        default : printf("\ninvalid") ;
                    break ;
    }
}
}
