#include<stdio.h>
void great(int []);
int main()
{
    int a[10];
    great(a);
}
void great( int b[])
{
    int n,i;
    printf("enter value of this array");
    scanf("%d",&n);
    printf("enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);

    }
    for(i=0;i<n;i++)
    {
        if(b[0]<b[i])
        {
            b[0]=b[i];

        }

    }
    printf(" greatest number of the array is %d",b[0]);
}
