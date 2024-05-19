#include <stdio.h>       
void demo1() {
    int i = 1, number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    do {
        printf("%d \n", (i));
        i++;
    } while (i <= number);
}


#include <stdio.h>    

void demo2() {
    int i = 1, number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    do {
        printf("%d \n", (number*i));
        i++;
    } while (i <= 10);
}



void main(){
    demo2();
}