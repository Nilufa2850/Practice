/*5. Write a program to check whether two given numbers are co-prime
numbers or not*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int x , y , i;

    printf("enter two number : ") ;
    scanf("%d%d" , &x , &y) ;
    
    int min = x<y?x:y ;

    for (i = 2 ; i<=min ; i++)
    {
        if (x%i==0 && y%i==0)
        {
            printf("not co prime") ;
            break ;
        }

    }
    if (i > min)
        printf("co prime") ;
}
