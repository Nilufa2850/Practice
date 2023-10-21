#include<stdio.h>
//Write a function to print first N odd natural numbers (TSRN).

void N_odd (int) ;

int main ()
{
    int a ;
    printf("Enter a number  : ") ;
    scanf("%d" , &a) ;
    N_odd(a) ;

    return 0 ;
}
void N_odd (int x )
{
    int i ;
    for(i=1 ; i<=x ; i++)
    {
        printf("%d " , 2*i-1) ;
    }

}
