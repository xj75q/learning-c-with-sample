#include <stdio.h>  
#include <string.h>  
struct employee
{
    int id;
    char name[50];
}e1;  //declaring e1 variable for structure  

int demo1()
{
    //store first employee information  
    e1.id = 1010;
    strcpy(e1.name, "Max Su");//copying string into char array  
    //printing first employee information  
    printf("employee 1 id : %d\n", e1.id);
    printf("employee 1 name : %s\n", e1.name);
    return 0;
}



 
struct employee2
{
    int id;
    char name[50];
    float salary;
}e21, e22;  //declaring e1 and e2 variables for structure  

int demo2()
{
    //store first employee information  
    e21.id = 1001;
    strcpy(e1.name, "Max Su");//copying string into char array  
    e21.salary = 18000;

    //store second employee information  
    e22.id = 1002;
    strcpy(e22.name, "Julian Lee");
    e22.salary = 15600;

    //printing first employee information  
    printf("employee 1 id : %d\n", e21.id);
    printf("employee 1 name : %s\n", e21.name);
    printf("employee 1 salary : %f\n", e21.salary);

    //printing second employee information  
    printf("employee 2 id : %d\n", e22.id);
    printf("employee 2 name : %s\n", e22.name);
    printf("employee 2 salary : %f\n", e22.salary);

    return 0;
}




void main(){
    demo2();
}
