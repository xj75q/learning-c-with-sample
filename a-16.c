#include <stdio.h>      
void demo1() {
    int i = 0;

    for (i = 1;i <= 10;i++) {
        printf("%d \n", i);
    }

}
for-loop-in-c

void demo2() {
    int i = 1, number = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1;i <= 10;i++) {
        printf("%d \n", (number*i));
    }
}
for-loop-in-c

void demo3(){
    for(;;){  
     printf("infinitive for loop example by yiibai");  
    }

}

void main(){
    demo2();
}


