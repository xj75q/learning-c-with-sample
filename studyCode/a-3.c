#include<stdio.h>  
#include<string.h>
void main() {
    char name[50];
    printf("Enter your name: ");
    // gets(name); //reads string from user  
    fgets(name,50,stdin);
    printf("Your name is: ");
    puts(name);  //displays string  

}

