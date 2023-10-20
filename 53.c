#include<stdio.h>
int main ()
{
    
    int a=-1 , b=1 , c ;
    int i , n ;
    printf("Enter a number for check fibonacchi : ") ;
    scanf ("%d" , &n) ;

    if (n==1 || n==0)
        printf("Fibonacchi") ;

    else
    {
        for(i=1 ; n ; i++)
        {
            c = a+b ;
            a = b  ;
            b = c ;

            if (n == c)
            {
                printf("fibonachhi") ;
                break ;
            }
            else if (c > n )
            {
                printf("not") ;
                break ;
            }
            
        }
    }
    
   // printf("%d term fibonacchi is %d\n" ,n, c) ;

}
