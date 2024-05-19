#include <stdio.h>  
void demo1() {
    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("Line :%d\n", __LINE__);
    //printf("STDC :%d\n", __STDC__); 不常用
}


#include <stdio.h>  
#define MIN(a,b) ((a)<(b)?(a):(b))  
void demo2() {  
   printf("Minimum between 10 and 20 is: %d\n", MIN(10,20));    
}




/*
#include <stdio.h>  
#define PI 3.14  
void demo4() {  
   printf("%f",PI);  
}

*/

#include <stdio.h>  
#define number 15  
int square=number*number;  
#undef number  
void demo5() {  
   printf("%d",square);  
}



#include <stdio.h>  

#define NOINPUT  
void demo6() {
    int a = 0;
#ifdef NOINPUT  
    a = 2;
#else  
    printf("Enter a:");
    scanf("%d", &a);
#endif         
    printf("Value of a: %d\n", a);
}



#include <stdio.h>  

#define INPUT  
void demo7() {
    int a = 0;
#ifndef INPUT  
    a = 2;
#else  
    printf("Enter a:");
    scanf("%d", &a);
#endif         
    printf("Value of a: %d\n", a);
}


#include <stdio.h>  

void demo8() {
    int a = 0;
#ifndef INPUT  
    a = 2;
#else  
    printf("Enter a:");
    scanf("%d", &a);
#endif         
    printf("Value of a: %d\n", a);
}


#include <stdio.h>  
#define NUMBER 100

void demo10() {

#if (NUMBER==10)
    printf("Value of Number is: 10");
#else
    printf("Value of Number is: %d", NUMBER);
#endif
}


/*
#include <stdio.h>

#ifndef PI  
#error First include then compile  
#else  
void demo11() {
    float a = 1000.999;
    printf("b = %f\n", a);
}
#endif

*/



#include <stdio.h>
#define PI  3.14159

#ifndef PI  
#error First include then compile  
#else  
void demo12() {
    float a = 1000.999;
    printf("b = %f\n", a);
}
#endif



#include<stdio.h>  


void func();

#pragma startup func  
#pragma exit func  

void demo13() {
    printf("\nI am in main");

}

void func() {
    printf("\nI am in func");
}





void main(){
    demo13();

}