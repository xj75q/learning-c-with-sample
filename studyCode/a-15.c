#include <stdio.h>           
void demo1() {
    int i = 1;

    while (i <= 10) {
        printf("%d \n", i);
        i++;
    }

}
while-loop-in-c

#include <stdio.h>     
void demo2() {
    int i = 1, number = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (i <= 10) {
        printf("%d \n", (number*i));
        i++;
    }

}
while-loop-in-c


void main(){
    demo2();

}