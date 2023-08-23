#include <stdio.h>  
#include <string.h>  

struct Date0  
{  
   int dd;  
   int mm;  
   int yyyy;   
};  
struct Employee0  
{     
   int id;  
   char name[20];  
   struct Date0 doj0;  // 嵌套一个结构体：Date，用于存储日期
}emp0;


//===================

struct Employee1  
{     
   int id;  
   char name[20];  
   struct Date1  
    {  
      int dd;  
      int mm;  
      int yyyy;   
    }doj1;  
}emp1;


//=======================




struct Employee
{
    int id;
    char name[20];
    struct Date
    {
        int dd;
        int mm;
        int yyyy;
    }doj;
}e1;

int main()
{
    //storing employee information  
    e1.id = 1001;
    strcpy(e1.name, "Maxsu");//copying string into char array  
    e1.doj.dd = 12;
    e1.doj.mm = 11;
    e1.doj.yyyy = 2018;

    //printing first employee information  
    printf("employee id : %d\n", e1.id);
    printf("employee name : %s\n", e1.name);
    printf("employee date of joining (dd/mm/yyyy) : %d/%d/%d\n", e1.doj.dd, e1.doj.mm, e1.doj.yyyy);
    return 0;
}



