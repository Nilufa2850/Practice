//Write a recursive function to calculate HCF of two numbers.   

#include <stdio.h>
void rev (int x);

int main ()
{
    int x ;
    printf("Enter a number : ") ;
    scanf("%d" , &x) ;
    rev(x) ;
}
void rev (int x)
{
    int y ;
    
    if (x > 0)
    {
        y = x%10 ;
        printf("%d" , y) ;
        rev(x/10) ;
    }
}

