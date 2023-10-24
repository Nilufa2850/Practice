/*4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/

#include<stdio.h>
int main ()
{
    int a[5] ;
    int i ;
    int max ; 

    printf("Enter 5 numbers : ") ;
    
    for(i=0 ; i<5 ; i++)
        scanf("%d" , &a[i]) ;

    max = a[0] ;

    for (i=0 ; i<5 ; i++)
    {
        if (max < a[i])
        {
            max = a[i] ;
        }
    }

    printf("greatest value is %d" , max) ;

}
