
#include<stdio.h>
int main ()
{
    char alphabet ;
    printf("Enter an alphabet : ") ;
    scanf("%c" , &alphabet) ;

    if (alphabet >='a' && alphabet<='z')
        printf("lwr case") ;
    else if (alphabet >='A' && alphabet<='Z')
        printf("uppr case") ;
    else
        printf("invalid") ;
        

    return 0 ;
}
