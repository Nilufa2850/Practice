
#include<stdio.h>
int main ()
{
    int x , y , z;
    printf("Enter 3 number : ") ;
    scanf("%d%d%d" , &x,&y,&z) ;

    if (x+y>z && y+z>x && z+x>y)
        printf("valid") ;
    else
        printf("not" ) ;

        

    return 0 ;
}
