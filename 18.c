//Write a program to swap values of two int variables

#include<stdio.h>
int main ()
{
    int x , y ;
    printf("Enter two numbers : ") ;
    scanf("%d%d", &x, &y) ;

    printf("x=%d and y=%d" , x, y) ;
    
    x = x+y ;
    y = x-y ;
    x = x-y ;

    printf("\nx=%d and y=%d" , x, y) ;

    return 0 ;
}
