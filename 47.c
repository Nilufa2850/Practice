#include<stdio.h>
int main ()
{
    int i , n ;

    for (i=1 ; i<=3 ; i++)
    {
        printf("Enter an even number : ") ;
        scanf("%d" , &n) ;

        if (n % 2 == 0)
        {
            printf("You win") ;
            break ;
        }
    }
    if (i==4)
        printf("You lose the game :( ") ;
    /*else 
        printf("You win") ;*/


    
    /*do {
        printf("Enter a even number : ");
        scanf("%d", &n);
        i++;
        if (n % 2 ==0)
            break;
    }while (i<=2);
    if(i==3)
        printf("Lose");
    else 
        printf("Win");*/
    
    return 0 ;
}
