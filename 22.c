/*Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/

#include<stdio.h>
int main ()
{
    int x ;
    printf("enter a number : ") ;
    scanf("%d" , &x) ;

    int y ;
    y = x/10 ;
    x = y*10 ;
    printf("%d ", x) ;

    return 0 ;
}
