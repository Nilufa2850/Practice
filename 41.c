
#include<stdio.h>
int main ()
{
    int x , n , sum = 0 ;

    printf("Enter n value : ") ;
    scanf ("%d" , &n) ;
    
    for (x=1 ; x<=n ; x++)
        sum = sum+x ;
        
    printf("sum is %d" , sum) ;
        

    return 0 ;
}
