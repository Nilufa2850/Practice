//Write a function to print all Prime numbers between two given numbers. (TSRN)

#include <stdio.h>
void prime (int , int) ;

int main ()
{
    int n , m ;
    printf("Enter two number : ") ;
    scanf("%d%d" , &n,&m) ;

    prime (n,m) ;
    return 0 ;
}
void prime (int l , int u)
{
    int x , i ;
    for(x=l+1 ; x<=u-1 ; x++)
    {
        for (i=2 ; i<x ; i++)
        {
            if (x%i==0)
                break ;
        }
        if (x==i)
            printf("%d " ,x) ;
    }

    

    
            
    
}
