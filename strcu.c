/*4. Write a function to find the highest salary employee from a given array of 10
employees. [ Refer structure from question 1]*/

#include<stdio.h>
struct Emp
{
    int id ;
    char name[30] ;
    float salary ;
};

struct Emp input()
{
    struct Emp e1; 

    printf("Enter employee id : ") ;
    scanf("%d" , &e1.id) ;
    fflush(stdin) ;
    printf("Enter employee name : ") ;
    fgets (e1.name , 30 , stdin) ;
    printf("Enter salary of employee : ") ;
    scanf("%f" , &e1.salary) ;

    return e1 ;

}
void display(struct Emp e1)
{
    printf("\nEmployee id -> %d" , e1.id) ;
    printf("\nName -> %s" , e1.name) ;
    printf("Salary -> %.2f" , e1.salary) ;
}

int main ()
{
    struct Emp x [5] ;
    int i , j ;
    float max ;

    for (i=0 ; i<=4 ; i++)
        x[i] = input() ;

    max = -9999 ;

    for (i=0 ; i<=4 ; i++)
    {
        if (x[i].salary > max )
                max = x[i].salary ;
    }

    printf("max salary is %.2f" , max) ;
}
