#include <stdio.h>

int demo1() {
   int op1, op2, sum;      // variable declaration

   op1 = 5;                // variable definition
   op2 = 3;
   sum = op1 + op2;        // addition operation
   printf("sum of %d and %d is %d", op1, op2, sum);
}


int demo2() {
   int op1, op2, sub;      // variable declaration
   op1 = 5;                // variable definition
   op2 = 3;
   sub = op1 - op2;        // subtraction operation
   printf("Output of %d − %d is %d", op1, op2, sub);
}


int demo3() {
   int op1, op2, mul;      // variable declaration

   op1 = 5;                // variable definition
   op2 = 3;

   mul = op1 * op2;        // multiplication operation

   printf("Output of %d multiplied by %d is %d", op1, op2, mul);
}

int demo4() {
   int op1, op2, div;      // variable declaration
   op1 = 6;                // variable definition
   op2 = 3;

   div = 6 / 3;            // division operation

   printf("Output of %d divide by %d is %d", op1, op2, div);
}




void main(){
    demo4();

}