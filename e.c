//5. Write a program to find the maximum number between two numbers using a pointer

#include<stdio.h>
int main ()
{
    int a , b ;
    int *p=NULL , *q=NULL ;

    p = &a ;
    q = &b ;

    printf("Enter two numbers : ") ;
    scanf("%d%d" , p,q) ;

    if (*p > *q)
        printf("Maximum number is : %d" , *p) ;
    else
        printf("Minimum number is %d" , *q) ;


}
