#include<stdio.h>
int main ()
{
    int x =1;
    int n ;
    printf("Enter a number : ") ;
    scanf("%d" , &n) ;

    while(x<=n)
    {
        printf("%d\n" , x) ;
        x++ ;
    }

    return 0 ;
}
