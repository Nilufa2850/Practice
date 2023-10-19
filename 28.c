/*Write a program to print greater between two numbers. Print one number of both are
the same.*/
#include<stdio.h>
int main ()
{
    int x , y ;
    printf("enter 2 number : ") ;
    scanf("%d%d" , &x,&y) ;
    
    if (x > y)
        printf("x=%d" , x) ;
    else if(x==y)
        printf("x=y=%d" , x) ;
    else 
        printf("y=%d",y);


    return 0 ;
}
