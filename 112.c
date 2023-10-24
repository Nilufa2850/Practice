/*5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.*/

#include<stdio.h>
int main ()
{
    int a[5] ;
    int i ;
    int min ; 

    printf("Enter 5 numbers : ") ;
    
    for(i=0 ; i<5 ; i++)
        scanf("%d" , &a[i]) ;

    min = a[0] ;

    for (i=0 ; i<5 ; i++)
    {
        if (min > a[i])
        {
            min = a[i] ;
        }
    }

    printf("smallest value is %d" , min) ;

}
