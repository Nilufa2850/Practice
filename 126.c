
#include<stdio.h>

int main ()
{
    int a[5] ;

    int i , largest=0 , s_lar=0  , max ;

    printf("Enter 5 numbers : " ) ;

    for(i=0 ; i<=4 ; i++)
        scanf("%d" , &a[i]) ;

    max = -9999 ;

    for(i=0 ; i<=4 ; i++)
    {
        if (max < a[i])
        {
            max = a[i] ;
            s_lar = largest ;
            largest = a[i] ;

        }
    }

    printf("1st lar - %d\n2nd lar- %d" , largest, s_lar) ;

    return 0 ;
}
