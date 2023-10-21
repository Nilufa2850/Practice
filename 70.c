#include<stdio.h>

//Write a function to calculate simple interest. (TSRS)
float SI (int , int , int) ;

int main ()
{
    int x , y , z ;
    printf("Enter amount time interest : ") ;
    scanf("%d%d%d" , &x,&y,&z) ;

    printf("si is %.2f" , SI(x,y,z)) ;
    return 0 ;
}
float SI (int r , int t , int i)
{
    float si ;
    si=r*t*i /100 ;

    return si ;
}
