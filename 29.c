/*Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/
#include<stdio.h>
int main ()
{
    int b, a,c ;
    printf("enter 3 number : ") ;
    scanf("%d%d%d" , &b,&a , &c) ;

    int D ;
    D = b*b-4*a*c ;
    
    if (D>0)
        printf("real &distinct") ;
    else if(D==0)
        printf("real & equal") ;
    else 
        printf("imaginary");


    return 0 ;
}
