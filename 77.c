/*Write a function to check whether a given number contains a given digit or not.
(TSRS)*/

#include <stdio.h>
int check (int num , int digit) ;
int main ()
{
    int num , digit ;
    printf("Enter a number & digit : ") ;
    scanf("%d%d" , &num,&digit) ;

    if (check(num , digit))
        printf("yes") ;
    else
        printf("no") ;

    return 0 ;
}

int check (int num , int digit)
{
    int y , count=0 ;
    while (num)
    {
        y = num % 10 ;

        if (y == digit)
        {
            count++ ;
            return 1 ;
        }

        num = num/10 ;
    }
    if (count > 0 )
        return 0 ;

    
}
