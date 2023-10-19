/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/


#include<stdio.h>
int main ()
{
    int x ;
    printf("enter a number : ") ;
    scanf("%d" , &x) ;

    float y ;
    y = x/76.23 ;

    printf("rs-%d  usd-%f" , x , y) ;
    

    return 0 ;
}
