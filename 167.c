/*9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed*/

#include <stdio.h>
#include<string.h>

int main()
{
    char user[5][30] , str[30] ;

    printf("Enter 5 user name : ") ;
    int i ;
    for (i=0 ; i<=4 ; i++)
        gets (user[i]) ;
    
    printf("List of the user name is : \n") ;
    for (i=0 ; i<=4 ; i++)
        printf("%s\n" , user[i]) ;


    printf("Enter a valid user name : ") ;
        gets(str) ;

    for (i=0 ; i<=4 ; i++)
    {
        if (strcmp(user[i] , str) == 0 )
        {
            int x , y , f=1 ;
            printf("Enter a number : ") ;
            scanf("%d" , &x) ;

            for (y=x ; y>=1 ; y--)
                f = f*y ;
            printf("Factorial is %d" , f) ;
            break ;

        }
        
    }
    if (i==5)
        printf("Invalid User name ") ;

    
}
