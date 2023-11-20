/*6. Write a function to sort employees according to their names [refer structure from
question 1]*/

#include<stdio.h>
#include<string.h>

struct Emp 
{
    int id ;
    char name[20] ;
    float salary ;
};
struct Emp input()
{
    struct Emp e ;
    printf("Enter id , name and salary : ") ;
    scanf("%d" , &e.id) ;
    fflush(stdin) ;
    fgets(e.name , 20 , stdin) ;
    e.name[strlen(e.name)-1] = '\0' ;
    scanf("%f" , &e.salary) ;
    return e ;
}

void display (struct Emp y)
{
    printf("\n%d %s %.2f" , y.id , y.name , y.salary) ;
}

void sortBYname(struct Emp x[] , int n)
{
    int i , j ;
    char temp[20] ;

    for (i=0 ; i<=n-2 ; i++)
    {
        for (j=i+1 ; j<=n-1 ; j++)
        {
            if (strcmp(x[i].name , x[j].name) > 0)
            {
                strcpy(temp , x[i].name) ;
                strcpy(x[i].name , x[j].name) ;
                strcpy (x[j].name , temp) ;
            }
        }
    }
}

int main ()
{
    struct Emp x[5] ;
    
    printf("Enter number of Employee : ") ;
    int n ;
    scanf("%d" , &n) ;

    int i ;
    for (i=0 ; i<=n-1 ; i++)
        x[i] = input() ;
    

    sortBYname(x , n) ;

    for (i=0 ; i<=n-1 ; i++)
        display(x[i]) ;

}
