//1. Define a structure Employee with member variables id, name, salary

#include<stdio.h>
struct Emp
{
    int id ;
    char name[30] ;
    float salary ;
};

int main ()
{
    struct Emp e1; 

    printf("Enter employee id : ") ;
    scanf("%d" , &e1.id) ;
    fflush(stdin) ;
    printf("Enter employee name : ") ;
    fgets (e1.name , 30 , stdin) ;
    printf("Enter salary of employee : ") ;
    scanf("%f" , &e1.salary) ;

    //output
    printf("\nEmployee id -> %d" , e1.id) ;
    printf("\nName -> %s" , e1.name) ;
    printf("Salary -> %.2f" , e1.salary) ;

}
