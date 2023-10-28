/*10. Write a program in C to find the row with maximum number of 1s.*/

#include<stdio.h>
int main ()
{
    int a[3][3] ;

    int i , j , count , max=0 , index ;

    printf("Enter 3x3 values of a[] : ") ;
    for (i=0 ; i<=2 ; i++)
        for (j=0 ; j<=2 ; j++)
            scanf("%d" , &a[i][j]) ;
    printf("\na[] matrix is : \n") ;
    for (i=0 ; i<=2 ; i++)
    {
        for (j=0 ; j<=2 ; j++)
            printf("%d  " ,a[i][j]) ;
        printf("\n") ;
    }

    /**********************************************/
    for (i=0 ; i<=2 ; i++)
    { 
        count=0 ;
        for (j=0 ; j<=2 ; j++)
        { 
            if (a[i][j]==1)
                count ++ ;
        }

        if (count > max)
        {
            max = count ;
            index = i+1 ;
        }
    
    }

    printf("max row is %d " , index ) ;
    return 0 ;

}
