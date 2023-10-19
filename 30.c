/*Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/
#include<stdio.h>
int main ()
{
    int b, a,c ;
    printf("enter 3 number : ") ;
    scanf("%d%d%d" , &a,&b , &c) ;

    
    if (a>b && a>c)
        printf("Greater a=%d" , a) ;
    else if (b>c)
        printf("greater b=%d" ,b) ;
    else
        printf("gteater c=%d", c) ;



    return 0 ;
}
