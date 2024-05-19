#include <stdio.h>

int demo1() {
   char c;        // char variable declaration
   c = 'A';       // defining a char variable
   printf("value of c is %c", c);
   return 0;
}

int demo2() {
   int i;         // integer variable declaration
   i = 123;       // defining integer variable
   printf("value of i is %d", i);
   return 0;
}

int demo3() {
   float f;             // floating point variable declaration
   f = 12.001234;       // defining float variable
   printf("value of f is %f", f);
   return 0;
}

int demo4() {
   double d;            // double precision variable declaration

   d = 12.001234;       // defining double precision variable

   printf("value of d is %e", d);

   return 0;
}



void main(){

    demo4();

}