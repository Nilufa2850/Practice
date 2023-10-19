/*Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/
#include<stdio.h>
int main ()
{
    float cost , selling ;
    printf("Enter cost and selling prices : ") ;
    scanf("%f%f" , &cost , &selling) ;

    if (selling > cost)
        {
            float profit ;
            profit = ((selling - cost)/cost) *100 ;
            printf("Profit is %.2f" , profit) ;
        }
    else 
        {
            float loss ;
            loss = ((cost - selling)/cost) *100 ;
            printf("loss is %.2f" , loss) ;
        }



    return 0 ;
}
