#include <stdio.h>      

void demo1() {
    int number = 50;
    printf("value of number is %d, address of number is %u", number, &number);
}


#include <stdio.h>      

void demo2() {
    int number = 50;
    int *p;

    p = &number;//stores the address of number variable  

    printf("Address of number variable is %x \n", &number);
    printf("Address of p variable is %x \n", p);
    printf("Value of p variable is %d \n", *p);

}


void demo3() {
    int a = 10, b = 20, *p1 = &a, *p2 = &b;

    printf("Before swap: *p1=%d *p2=%d\n", *p1, *p2);
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    printf("\nAfter swap: *p1=%d *p2=%d\n", *p1, *p2);

}




void main(){
    demo2();
}