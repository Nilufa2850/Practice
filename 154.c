/*10. Write a function in C to count the frequency of each element of an array.*/

#include<stdio.h>
int main ()
{
    int a[10]  , freq[100] = {0} ;

    int i  ;

    printf("Enter 10 numbers for a[] : " ) ;
    for(i=0 ; i<=9 ; i++)
        scanf("%d" , &a[i]) ;

    for (i=0 ; i<10 ; i++)
    {
        freq[a[i]] ++ ;
    }

    for (i=0 ; i<=99 ; i++)
    {
        if (freq[i] != 0)
            printf("%d - %d\n" , i , freq[i]) ;
    }

    return 0 ;
}
