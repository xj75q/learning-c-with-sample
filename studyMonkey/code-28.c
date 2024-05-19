
#include <stdio.h>

//请编程输出100~300之间(包括100与300)的数。
int demo1(){
    int n =99;
    while (n <300)
    {
        n =n+1;
        printf("%d\t",n);
    }
    return 0;
    
}

//请编程输出100~300之间(包括100与300)不能被4整除的数，
int demo2(){
    int n =99;
    while (n <300)
    {
       n = n+1;
       if (n%4==0){
        continue;
       }
       printf("%d\t",n);
    }
    return 0;

}

int main(){
    demo2();

}