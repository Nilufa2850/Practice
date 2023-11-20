/*5. Write a function to sort employees according to their salaries [ refer structure from
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

void sortBYsalary(struct Emp x[] , int n)
{
    int i , j , temp ;

    for (i=0 ; i<=n-2 ; i++)
    {
        for (j=i+1 ; j<=n-1 ; j++)
        {
            if (x[i].salary > x[j].salary)
            {
                temp = x[i].salary ;
                x[i].salary = x[j].salary ;
                x[j].salary = temp ;
            }
        }
    }
}

int main ()
{
    struct Emp x[5] ;
    
    int i ;
    for (i=0 ; i<=4 ; i++)
        x[i] = input() ;
    

    sortBYsalary(x , 5) ;

    for (i=0 ; i<=4 ; i++)
        display(x[i]) ;

}
