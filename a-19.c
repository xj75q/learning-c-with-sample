#include <stdio.h>  
void main() {
    int age;

    gotolabel:
    printf("You are not eligible to vote!\n");

    printf("Enter you age:\n");
    scanf("%d", &age);
    if (age < 18) {
        goto gotolabel;
    }else {
        printf("You are eligible to vote!\n");
    }

}
c-goto

