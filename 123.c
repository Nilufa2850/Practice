/*6. Write a function in C to read n number of values in an array and display it in reverse
order.*/

#include<stdio.h>
void rev (int [] , int) ;

int main ()
{
    int a[5] ;  

    rev(a,5) ;

    return 0 ;

}
void rev (int b[] , int n)
{
    int i ;
    printf("Enter %d numbers : " , n) ;
    for(i=0 ; i<=n-1 ; i++)
        scanf("%d" , &b[i]) ;

    for(i=n-1 ; i>=0 ; i--)
        printf("%d " , b[i]) ;
    
}
