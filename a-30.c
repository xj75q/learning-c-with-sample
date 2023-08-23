#include <stdio.h>          
void demo1() {
    int number = 50;
    int *p;//pointer to int    
    p = &number;//stores the address of number variable      

    printf("Address of p variable is %u \n", p);
    p = p + 1;
    printf("After increment: Address of p variable is %u \n", p);
}


void demo2() {
    int number = 50;
    int *p;//pointer to int    
    p = &number;//stores the address of number variable      

    printf("Address of p variable is %u \n", p);
    p = p - 1;
    printf("After decrement: Address of p variable is %u \n", p);
}


void demo3() {
    int number = 50;
    int *p;//pointer to int    
    p = &number;//stores the address of number variable      

    printf("Address of p variable is %u \n", p);
    p = p + 3;   //adding 3 to pointer variable  
    printf("After adding 3: Address of p variable is %u \n", p);
}


         
void demo4() {
    int number = 50;
    int *p;//pointer to int    
    p = &number;//stores the address of number variable      

    printf("Address of p variable is %u \n", p);
    p = p - 3; //subtracting 3 from pointer variable  
    printf("After subtracting 3: Address of p variable is %u \n", p);
}






void main(){
    demo4();
}