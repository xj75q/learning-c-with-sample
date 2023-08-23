#include <stdio.h>  
#include <string.h>  
union employee
{
    int id;
    char name[150];
}e1;  //declaring e1 variable for union  

int demo1()
{
    //store first employee information  
    e1.id = 1010;
    strcpy(e1.name, "Maxsu");//copying string into char array  
                                     //printing first employee information  
    printf("employee 1 id : %d, address: %u\n", e1.id, &e1.id);
    printf("employee 1 name : %s, address: %u\n", e1.name, &e1.name);
    e1.id = 1010;
    printf("employee 1 id : %d, address: %u\n", e1.id, &e1.id);
    printf("employee 1 name : %s, address: %u\n", e1.name, &e1.name);
    return 0;
}



union U1
{
    char s[9];
    int n;
    double d;
}u1;

union U2
{
    char s[5];
    int n;
    double d;
}u2;

int demo2()
{
    printf("%d\n", sizeof(u1));
    printf("%d\n", sizeof(u2));
    printf("0x%x\n", &u1);
    printf("0x%x\n", &u1.s);
    printf("0x%x\n", &u1.n);
    printf("0x%x\n", &u1.d);
    u1.n = 1;
    printf("%d\n", u1.s[0]);
    printf("%lf\n", u1.d);
    unsigned char *p = (unsigned char *)&u1;
    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));
    printf("%d\n", *(p + 3));
    printf("%d\n", *(p + 4));
    printf("%d\n", *(p + 5));
    printf("%d\n", *(p + 6));
    printf("%d\n", *(p + 7));
    return 0;
}


void main(){
    demo2();
}