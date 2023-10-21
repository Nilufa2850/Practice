#include<stdio.h>
//Write a function to print first N natural numbers (TSRN).

void N (int) ;

int main ()
{
    int a ;
    printf("Enter a number  : ") ;
    scanf("%d" , &a) ;
    N(a) ;
    
    return 0 ;
}
void N (int x )
{
    int i ;
    for(i=1 ; i<=x ; i++)
    {
        printf("%d " , i) ;
    }

}
