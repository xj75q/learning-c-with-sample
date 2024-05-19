#include<stdio.h>   

//递归
int factorial(int n)
{
    if (n < 0)
        return -1; /*Wrong value*/
    if (n == 0)
        return 1; /*Terminating condition*/
    return (n * factorial(n - 1));
}

void main() {
    int fact = 0;
    fact = factorial(5);
    printf("\n factorial of 5 is %d \n", fact);

}
recursion-in-c

