/*2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user.*/

#include<stdio.h>
int main ()
{
    int a[10] ;
    int i, sum=0  ;
    float avg ;

    printf("Enter 10 numbers : ") ;
    
    for(i=0 ; i<=9 ; i++)
        scanf("%d" , &a[i]) ;

    for (i=0 ; i<=9 ; i++)
        sum+=a[i] ;

    avg = sum/10.0 ;

    printf("\naverage is %.2f" , avg) ;

}
